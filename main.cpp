#include "yacc/dmx_yacc.cpp"
#include <fstream>

vector<string> lines;

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
    inputFile.close();

    SysY_parse(total.c_str(), "testfile.txt");

    // 处理三个问题
    // 1 遇到 < 打头的东西向上交换，如果是 DMX20070206 需要删除
    // 2 INTTK + IDENFR + LPARENT 时，添加 <FuncType>

    ifstream output_first("output_first.txt");

    while (std::getline(output_first, line))
        lines.push_back(line);

    // 1 遇到 < 打头的东西向上交换，如果是 DMX20070206 需要删除
    for (int i = 1; i < lines.size(); i++)
    {
        if (lines[i][0] == '<')
        {
            swap(lines[i], lines[i - 1]);
            if (lines[i] == "DMX20070206")
                lines.erase(lines.begin() + i);
        }
    }

    // 2 INTTK + IDENFR + LPARENT 时，添加 <FuncType>
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

    final_file.close();
    output_first.close();

    lines.clear();
    lines.resize(0);
    return 0;
}