#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum = 0;
    for (int i = 1; i < 10; ++i)
    {
        if (i % 15 == 0)
        {
            sum += i;
        }
        else if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}