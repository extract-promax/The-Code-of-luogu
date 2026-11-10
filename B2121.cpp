#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    unsigned int f_min = 0, l_min = 101;
    unsigned int f_max = 0, l_max = 0;
    unsigned int length = 0;
    unsigned int pt = 0;
    unsigned int sign = 0;    // 0:表示没读到单词 1：开始读单词了
    
    for (int i = 0; i <= (int)str.size(); i++)
{
    char c = (i < (int)str.size()) ? str[i] : '.';  // 末尾补一个分隔符收尾
    if (isalpha(c))
    {
        if (!sign) { sign = 1; pt = i; length = 1; }
        else length++;
    }
    else
    {
        if (i == 0) continue;
        if (sign)   // 一个单词刚结束
        {
            if (length < l_min) { f_min = pt; l_min = length; }
            if (length > l_max) { f_max = pt; l_max = length; }
            sign = 0;
            length = 0;   // ← 补上：重置长度，保持状态干净
        }
    }
}
    string str_min = str.substr(f_min, l_min);
    string str_max = str.substr(f_max, l_max);
    cout << str_max << endl;
    cout << str_min;
}