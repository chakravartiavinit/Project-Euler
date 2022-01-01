#include <bits/stdc++.h>
using namespace std;
bool check(unsigned long long n)
{
    unsigned long long i = 1, a = 0;
    while (a < n)
    {
        a = (i * (3 * i - 1)) / 2;
        if (a == n)
        {
            return true;
        }
        i++;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (long long int i = 144; i < 100000; ++i)
    {
        unsigned long long result = i * (2 * i - 1);
        if (check(result) == true)
        {
            cout << result << "\n";
            break;
        }
    }
    return 0;
}