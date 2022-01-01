#include <bits/stdc++.h>
using namespace std;
long long Sequence(long long a)
{
    long long count = 0;
    while (a != 1)
    {
        count++;
        if (a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a = 3 * a + 1;
        }
    }
    return count + 1;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans = 0, count = 0;
    for (int i = 2; i < 1000000; ++i)
    {
        if (Sequence(i) > count)
        {
            ans = i;
            count = Sequence(i);
        }
    }
    cout << ans << " " << count << "\n";
    return 0;
}