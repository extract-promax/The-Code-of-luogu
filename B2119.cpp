#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string temp;
    string str_2;
    getline(cin, str);
    int length = str.size();
    if (str[length-1] == 'g')
    {
        temp = str.substr(length-3, 3);
        if (temp == "ing") {str_2 = str.erase(length-3, 3);}
    }
    else if ((str[length-1] == 'y') || (str[length-1] == 'r'))
    {
        temp = str.substr(length-2, 2);
        if ((temp == "er") || (temp == "ly"))
        str_2 = str.erase(length-2, 2);
    }
    else str_2 = str;
    cout << str_2;
}