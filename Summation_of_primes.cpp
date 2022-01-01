#include <bits/stdc++.h>
using namespace std;
long long Count(long long a)
{
    bool flag = true;
    long long alpha = 2, count = 1, ans;
    while (count <= a)
    {
        flag = true;
        for (int i = 2; i <= sqrt(alpha); i++)
        {
            if (alpha % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            ans = alpha;
            count++;
        }
        alpha++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    cout << Count(n);
    return 0;
}