#include <bits/stdc++.h>
using namespace std;
int Amicable(int a)
{
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            count += i;
        }
    }
    return count;
}
bool Check(int a)
{
    int temp;
    temp = Amicable(a);
    if (Amicable(temp) == a)
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
    unordered_set<long> st;
    for (int i = 1; i < 10000; i++)
    {
        if (Check(i) == true)
        {
            if (i != Amicable(i))
            {
                st.insert(i);
                st.insert(Amicable(i));
            }
        }
    }
    long long sum = 0;
    for (auto x : st)
    {
        sum += x;
    }
    cout << sum << "\n";
    return 0;
}