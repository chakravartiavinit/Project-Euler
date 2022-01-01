#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    set<int> st;
    for (int i = 2; i <= n; ++i)
    {
        while (n % i == 0)
        {
            st.insert(i);
            n = n / i;
        }
    }
    if (st.size() == 4)
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
    for (int i = 200; i <= 1000000; i++)
    {
        if (check(i) == true && check(i + 1) == true && check(i + 2) == true && check(i + 3) == true)
        {
            cout << i << " \n";
            break;
        }
    }
    return 0;
}