#include <bits/stdc++.h>
using namespace std;
bool Palindrome(long long a)
{
    string temp = to_string(a);
    string temp2 = temp;
    reverse(temp.begin(), temp.end());
    if (temp == temp2)
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
    long long ans = 0;
    for (int i = 900; i < 1000; i++)
    {
        for (int j = 999; j >= 900; j--)
        {
            long long t = i * j;
            if (Palindrome(t) == true)
            {
                ans = max(ans, t);
            }
        }
    }
    cout << ans << "\n";
    return 0;
}