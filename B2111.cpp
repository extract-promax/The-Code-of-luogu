#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_1, str_2;
    float target;
    cin >> target;
    cin.ignore();
    getline(cin, str_1);
    getline(cin, str_2);
    int num = 0;
    int total = 0;
    for (int i = 0; str_1[i] != '\0'; i++, total++)
    {
        if (str_1[i] == str_2[i] ) num++;
    }
    float similarity = (float) num / (float) total;
    if (similarity >= target) cout << "yes" << endl;
    else cout << "no" << endl;
}