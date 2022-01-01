#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
using namespace std;
long long Count(string a)
{
    long long count = 0;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            count += (a[i] - 'A') + 1;
        }
    }
    return count;
}
int Pos(vector<string> a, string b)
{
    int index = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == b)
        {
            index = i + 1;
            break;
        }
    }
    return index;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> st;
    ifstream file("temp1.txt");
    string temp;
    if (file.is_open())
    {
        while (getline(file, temp, ','))
        {
            st.push_back(temp);
        }
        file.close();
    }
    string a = "COLIN";
    long long ans = 0;
    sort(st.begin(), st.end());
    for (auto x : st)
    {
        ans += Count(x) * Pos(st, x);
    }
    cout << ans << "\n";
    

    return 0;
}