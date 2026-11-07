#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int min_col[5][2];
    int max_row[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (i == 0) {min_col[0][j] = a[0][j]; min_col[1][j] = 1;}
            else
            {
                if (a[i][j] < min_col[0][j]) {min_col[0][j] = a[i][j]; min_col[1][j] = i+1;}
            }
            if (j==0) {max_row[0][i] = a[i][0]; max_row[1][i] = 1;}
            else 
            {
                if (a[i][j] > max_row[0][i]) {max_row[0][i] = a[i][j]; max_row[1][i] = j+1;}
            }
        }
    }
    int row,col;
    int sign = 0;
    for (int i = 0; i < 5; i++)
    {
        int j = min_col[1][i];
        if (max_row[1][j-1] == i+1) {row = j; col = i+1;}
        else sign += 1;
    }
    if (sign == 5) cout << "not found";
    else {cout << row << col << a[row-1][col-1];}
}