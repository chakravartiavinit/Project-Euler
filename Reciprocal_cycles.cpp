#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double ans;
    map<int, int> mp;
    for (double i = 2; i < 1000; ++i)
    {
        ans = 1 / i;
        string temp;
        temp = to_string(ans);
        cout << i << "    :" << temp << "\n";
    }
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }
    return 0;
}