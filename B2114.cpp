#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A') cout << 'T';
        else if (str[i] == 'T') cout << 'A';
        else if (str[i] == 'G') cout << 'C';
        else cout << 'G';
    }
}