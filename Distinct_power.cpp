#include <bits/stdc++.h>
using namespace std;
long long Fastpow(long long a, long long b, long long c)
{
    if (b == 0 || a == 1)
    {
        return 1;
    }
    long long temp = Fastpow(a, b / 2, c);
    if (b % 2 == 0)
    {
        return ((temp % c) * (temp % c)) % c;
    }
    return ((temp % c) * (temp % c) * (a % c)) % c;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<long long> st;
    long long mod = 1000000007;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= 100; j++)
        {
            long long ans = Fastpow(i, j, mod);
            if (st.find(ans) == st.end())
            {
                st.insert(ans);
            }
        }
    }
    cout << st.size() << "\n";
    return 0;
}
