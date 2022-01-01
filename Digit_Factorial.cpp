#include <bits/stdc++.h>
using namespace std;
vector<int> fact;
long long sumFact(long long a)
{
    long long ans = 0;
    while (a)
    {
        if ((a % 10) != 0)
        {
            ans += fact[a % 10 - 1];
        }
        else
        {
            ans += 1;
        }
        a = a / 10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans = 1;
    for (int i = 1; i < 10; ++i)
    {
        ans = ans * i;
        fact.push_back(ans);
    }
    long long netsum = 0;
    for (long long i = 3; i < 10000000; i++)
    {
        if (sumFact(i) == i)
        {
            netsum += i;
            cout << i << " ";
        }
    }
    cout << netsum << "\n";
    return 0;
}