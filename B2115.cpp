#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i])) 
        {
            if (str[i] == 'a') cout << 'z';
            else if (str[i] == 'A') cout << 'Z';
            else cout << (char) (str[i] -1);
        }
        else cout << str[i];
    }
}
