#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char temp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i+1] == '\0') cout << (char) (str[i] + str[0]);
        else cout << (char) (str[i] + str[i+1]);
    }
}