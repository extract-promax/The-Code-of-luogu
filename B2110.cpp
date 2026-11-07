#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    unsigned int sign = 0;
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (j == i) continue;
            if (str[j] == str[i]) break;
            else if(str[j+1] == '\0') {ch = str[i]; sign++;}
        }
        if(sign) break;
    }
    if (sign) cout << ch;
    else cout << "no";
}