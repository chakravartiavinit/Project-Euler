#include <bits/stdc++.h>
using namespace std;
long double Cal(long a, long b)
{
    long double a_one, a_ten, b_one, b_ten;
    a_one = a % 10;
    a_ten = a / 10;
    b_one = b % 10;
    b_ten = b / 10;
    if (a_one == b_one)
    {
        return a_ten / b_ten;
    }
    else if (a_one == b_ten)
    {
        return a_ten / b_one;
    }
    else if (a_ten == b_one)
    {
        return a_one / b_ten;
    }
    else if (a_ten == b_ten)
    {
        return a_one / b_one;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> a, b;
    long double i, j;
    for (i = 10; i < 100; ++i)
    {
        for (j = 10; j < 100; ++j)
        {
            if (i != j)
            {
                long double temp = i / j;
                long double temp2 = Cal(i, j);
                if (temp2 == -1)
                {
                    continue;
                }
                else
                {
                    if (temp == temp2)
                    {
                        a.insert(i);
                        b.insert(j);
                    }
                }
            }
        }
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : b)
    {
        cout << x << " ";
    }

    return 0;
}