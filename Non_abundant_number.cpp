#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    if (sum > n)
    {
        return true;
    }
    return false;
}
bool Abundant(int n)
{
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        if (check(i) == true)
        {
            count++;
        }
    }
    if (count >= 2)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum = 0;
    for (int i = 1; i < 28123; i++)
    {
        if (Abundant(i) == false)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}