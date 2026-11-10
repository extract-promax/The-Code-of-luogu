#include <iostream>
#include <string>
using namespace std;

// 判断 a 是否为 b 的子串（沿用原代码的双指针回溯逻辑）
bool isSubstring(const string& a, const string& b)
{
    unsigned int sign_1 = 0;     // 指向 a 中正在匹配的字符
    unsigned int sign_next = 0;  // 指向 b 中上一次与 a[0] 匹配的位置
    unsigned int sign_2 = 0;     // 指向 b 中正在匹配的字符
    unsigned int judge = 1;      // 1 = 尚未匹配成功
    unsigned int judge_2 = 1;    // 1 = 尚未匹配失败

    while (judge && judge_2)
    {
        if (a[sign_1] == '\0') { judge = 0; break; }   // a 已全部匹配
        if (b[sign_2] == '\0') { judge_2 = 0; break; } // b 已扫完

        if (a[sign_1] == b[sign_2] && sign_1 == 0)
        {
            sign_1++;              // a 前进
            sign_2++;              // b 前进
            sign_next = sign_2;    // 记录下一次回溯起点
        }
        else if (a[sign_1] == b[sign_2])
        {
            sign_1++;              // a 前进
            sign_2++;              // b 前进    
        }
        else
        {
            sign_1 = 0;            // a 回到开头
            sign_2 = sign_next + 1; // b 从与 a[0] 匹配的起点后一位重新尝试
            sign_next = sign_2+1;
        }
    }
    return judge == 0;  // judge==0 表示匹配成功
}

int main()
{
    string str_1, str_2;
    getline(cin, str_1);
    getline(cin, str_2);

    if (isSubstring(str_1, str_2))
        cout << str_1 << " is substring of " << str_2 << endl;
    else if (isSubstring(str_2, str_1))
        cout << str_2 << " is substring of " << str_1 << endl;
    else
        cout << "No substring" << endl;

    return 0;
}
