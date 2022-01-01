#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a = 13195;
    int ans, i = 3;
    while (a > 1)
    {
        if (a % i == 0)
        {
            ans = i;
            a = a / i;
        }
        i++;
    }
    cout << ans << "\n";
    return 0;
}