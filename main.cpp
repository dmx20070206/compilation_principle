#include "yacc/dmx_yacc.cpp"
#include <fstream>

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
        total += line;
    SysY_parse(total.c_str());

    inputFile.close();
    return 0;
}