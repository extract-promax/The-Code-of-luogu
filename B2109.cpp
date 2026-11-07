#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    unsigned int num = 0;
    while (cin.get(ch))
    {
        if(isdigit(ch)) num++;
    }
    cout << num;
}