#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned int n, m;
    cin >> n >> m;
    vector<vector<unsigned int>> a(n, vector<unsigned int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) cout << a[i][j] << ' ';
            else
            {
                cout << (a[i][j-1] + a[i][j] + a[i][j+1] + a[i-1][j] + a[i+1][j]+2)/5.0 << ' ';
            }
        }
        cout << endl;
    }
}