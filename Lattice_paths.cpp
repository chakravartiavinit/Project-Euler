#include <bits/stdc++.h>
using namespace std;
long long GridTraveller(int m, int n)
{
    long long paths[m][n];
    for (int i = 0; i < n; i++)
    {
        paths[0][i] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        paths[i][0] = 1;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
            paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
    }

    return paths[m - 1][n - 1];
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    cout << GridTraveller(m, n) << "\n";
    return 0;
}