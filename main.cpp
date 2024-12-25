#include "yacc/dmx_yacc.cpp"
#include <fstream>

#define MAX_LINE_LENGTH 1024

int main()
{
    ifstream inputFile("testfile.txt");
    if (!inputFile)
    {
        printf("failed to read file\n");
        return 1;
    }

    string line;
    string total;
    while (getline(inputFile, line))
        total += line + '\n';
    SysY_parse(total.c_str(), "testfile.txt");

    inputFile.close();

    // 处理三个问题
    // 1 遇到 DMX 时删除并向上交换
    // 2 倒数第四行添加 RBRACE }
    // 3 INTTK + IDENFR + LPARENT 时，添加 <FuncType>

    FILE *file = fopen("output_first.txt", "r");

    vector<string> lines;
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file))
    {
        std::string line(buffer);
        if (!line.empty() && line.back() == '\n')
        {
            line.pop_back();
        }

        lines.push_back(line);
    }

    printf("%d\n", (int)lines.size());

    // 2 倒数第四行添加 RBRACE }
    lines.insert(lines.begin() + lines.size() - 3, "RBRACE }");

    // 1 遇到 DMX 时删除并向上交换
    for (int i = 0; i < lines.size(); i++)
    {
        if (!lines[i].empty() && lines[i].substr(0, 3) == "DMX")
        {
            lines[i].erase(0, 3);
            swap(lines[i], lines[i - 1]);
        }
    }

    // 3 INTTK + IDENFR + LPARENT 时，添加 <FuncType>
    for (int i = 2; i < lines.size(); i++)
    {
        if (lines[i].find("LPARENT") != string::npos && lines[i - 1].find("IDENFR") != string::npos && lines[i - 2].find("INTTK") != string::npos)
        {
            string str = "<FuncType>";
            lines.insert(lines.begin() + i - 1, str);
            i++;
        }
    }

    ofstream final_file("output.txt");
    for (int i = 0; i < lines.size(); i++)
    {
        final_file << lines[i] << "\n";
    }

    return 0;
}