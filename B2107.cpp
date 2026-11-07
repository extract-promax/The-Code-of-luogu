#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned int m, n;
    cin >> m >> n;
    vector<vector<unsigned int>> a(m, vector<unsigned int>(n));
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[m-1-i][j] << ' ';
        }
        cout << endl;
    }
}