#include <bits/stdc++.h>
using namespace std;
long long count(long long a)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            if (a / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long i = 1;
    long long alpha, ans;
    while (1)
    {
        alpha = (i * (i + 1)) / 2;
        if (count(alpha) > n)
        {
            ans = alpha;
            break;
        }
        i++;
    }
    cout << count(alpha) << '\n';
    cout << ans << "\n";
    return 0;
}