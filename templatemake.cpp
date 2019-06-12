#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <direct.h>
using namespace std;

int main()
{
    string contest_name;
    char contest_abc;
    FILE *fi;
    char filename[30];

    /* コンテスト名読み込み */
    cout << "Input contest name --> ";
    cin >> contest_name;

    /* 問題数読み込み */
    cout << "What is the backmost alphabet? --> ";
    cin >> contest_abc;

    /* ディレクトリ生成 */
    if (_mkdir(contest_name.c_str()) == 0)
    {
        printf("succeed to make dir.\n");
    }
    else
    {
        printf("failed to make dir.\n");
    }

    /* cppファイル生成 */
    for (char i = 'a'; i <= contest_abc; i++)
    {
        sprintf(filename, "%s/%s%c.cpp", contest_name.c_str(), contest_name.c_str(), i);
        fi = fopen(filename, "w");

        if (fi == NULL)
        {
            fprintf(stderr, "error!\n");
            exit(1);
        }

        fprintf(fi, "#include <iostream>\n");
        fprintf(fi, "#include <string>\n");
        fprintf(fi, "#include <algorithm>\n");
        fprintf(fi, "#include <cmath>\n");
        fprintf(fi, "using namespace std;\n");
        fprintf(fi, "\n");
        fprintf(fi, "int main()\n");
        fprintf(fi, "{\n");
        fprintf(fi, "\tint N;\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\tcin >> N;\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\tint a[N];\n");
        fprintf(fi, "\tstring S;\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\tfor(int i = 1; i <= N; i++)\n");
        fprintf(fi, "\t{\n");
        fprintf(fi, "\t\tcin >> a[i];\n");
        fprintf(fi, "\t}\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\tint ans;\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\tcout << ans << endl;\n");
        fprintf(fi, "\t\n");
        fprintf(fi, "\treturn 0;\n");
        fprintf(fi, "}\n");

        fclose(fi);
    }

    return 0;
}