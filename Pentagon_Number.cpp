#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_set<long long> st;
    vector<long long> v;
    for (int i = 1; i <= 10000; ++i)
    {
        long long alpha = (i * (3 * i - 1)) / 2;
        st.insert(alpha);
        v.push_back(alpha);
    }
    long long Min = INT_MAX;
    long long a, b;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            long long temp1, temp2;
            temp1 = v[i] + v[j];
            temp2 = v[j] - v[i];
            if (st.find(temp1) != st.end() && st.find(temp2) != st.end())
            {
                if (temp2 < Min)
                {
                    a = v[i];
                    b = v[j];
                    Min = temp2;
                }
            }
        }
    }
    cout << abs(b - a) << "\n";
    return 0;
}