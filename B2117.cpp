#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    cin.get();
    string str;
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        if (isalpha(str[0])) cout << (char)toupper(str[0]);
        else cout << str[0];
        for (int j = 1; str[j] != '\0'; j++)
        {
            cout << (char)tolower(str[j]);
        }
        cout << endl;
    }
}