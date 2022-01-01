#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    int arr[10] = {0};
    while (n)
    {
        arr[n % 10]++;
        n = n / 10;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] != 1)
        {
            return false;
        }
    }
    return true;
}
bool Pand(long n)
{
    int a;
    vector<int> v;
    while (n)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    a = v[1] + v[2] * 10 + v[3] * 100;
    if (a % 2 != 0)
    {
        return false;
    }
    a = v[2] + v[3] * 10 + v[4] * 100;
    if (a % 3 != 0)
    {
        return false;
    }
    a = v[3] + v[4] * 10 + v[5] * 100;
    if (a % 5 != 0)
    {
        return false;
    }
    a = v[4] + v[5] * 10 + v[6] * 100;
    if (a % 7 != 0)
    {
        return false;
    }
    a = v[5] + v[6] * 10 + v[7] * 100;
    if (a % 11 != 0)
    {
        return false;
    }
    a = v[6] + v[7] * 10 + v[8] * 100;
    if (a % 13 != 0)
    {
        return false;
    }
    a = v[7] + v[8] * 10 + v[9] * 100;
    if (a % 17 != 0)
    {
        return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum = 0;
    for (long i = 1234567890; i <= 9876543210; i++)
    {
        if (check(i) == true)
        {
            if (Pand(i) == true)
            {
                sum = sum + i;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}