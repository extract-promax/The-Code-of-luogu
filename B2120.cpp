#include <iostream>
using namespace std;

int main()
{
    char ch;
    unsigned int num = 0;
    unsigned int sign_1 = 0;         //0:还没读到单词  1:正在读单词  2:已经读完一个单词了
    unsigned int sign_2;             //读到的空格的个数
    while (cin.get(ch))
    {
        if (ch == ' ' && sign_1 == 1) {cout << num; sign_1 = 2; sign_2++;num = 0; }
        else if (ch == ' ') {sign_2++; sign_1 = 0;}
        else 
        {
            sign_1 = 1;
            sign_2 = 0;
            num++;
        }    
        if (sign_1 == 2) cout << ',';
    }
    if (!sign_2)  cout << num;
    return 0;
}