#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> mp;
    int ans = 0;
    for (int j = 3; j <= 1000; j++)
    {
        for (int k = j + 1; k <= 1000; k++)
        {
            for (int z = k + 1; z <= 1000; z++)
            {
                if (j * j + k * k == z * z && j + k + z <= 1000)
                {
                    mp[j + k + z]++;
                }
            }
        }
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}