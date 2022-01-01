#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            if (v[j] % v[i] == 0)
            {
                v[j] = v[j] / v[i];
            }
        }
    }
    long long ans = 1;
    for (auto x : v)
    {
        ans = ans * x;
    }
    cout << ans << "\n";

    return 0;
}