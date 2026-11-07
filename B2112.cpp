#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.get();
    char ch[2];
    char temp;
    for (int i = 0; i < N; i++)
    {
        cin.get(ch[0]);
        int sign = 0;
        while (cin.get(temp) && temp != '\n')
        {
            if (temp == ' ') {sign++;}
            else if (sign == 1) {ch[1] = temp;sign = 0;}
        }
        int a = ch[0] - ch[1];
        switch(a)
        {
            case 0: cout << "Tie" << endl;break;
            case -1: cout << "Player1" << endl;break;
            case 1 : cout << "Player2" << endl;break;
            case -2: cout << "Player1" << endl;break;
            case 2: cout << "Player2" << endl;break;
            case -3: cout << "Player2" << endl;break;
            case 3: cout << "Player1" << endl;break;
            default: cout << "Error!" << endl;
        }
    }
}