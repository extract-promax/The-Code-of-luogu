#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int length = str.size();
    for (int i = length-1; i >= 0; i--)
    {
        if (islower(str[i])) str[i] = toupper(str[i]);
        else str[i] = tolower(str[i]);
        
        if (str[i] >= 88 && str[i] <= 90) cout << (char)(str[i] - 23);
        else if (str[i] >= 120 && str[i] <= 122) cout << (char)(str[i] - 23);
        else cout << (char)(str[i] + 3);
    }
}
