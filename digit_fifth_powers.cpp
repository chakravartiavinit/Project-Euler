#include <bits/stdc++.h>
using namespace std;
long long Digcount(long long a)
{
    long long count = 0;
    while (a)
    {
        long long temp = a % 10;
        count += pow(temp, 5);
        a = a / 10;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum = 0;
    for (long long i = 2; i <= 10000000; ++i)
    {
        if (i == Digcount(i))
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}