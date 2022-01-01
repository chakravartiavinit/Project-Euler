#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long first = 1, second = 2;
    long long sum = 2, i = 2, next = 0;
    while (next < 4000000)
    {
        next = first + second;
        if (next % 2 == 0)
        {
            sum += next;
        }
        first = second;
        second = next;
    }
    cout << sum << "\n";
    return 0;
}