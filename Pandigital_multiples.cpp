#include <bits/stdc++.h>
using namespace std;
string Pandigit(int i)
{
    vector<int> digits;
    while (i)
    {
        digits.push_back(i % 10);
        i = i / 10;
    }
    string temp;
    for (int i = 0; i < digits.size(); ++i)
    {
        int sum = digits[i] * i;
        while (sum)
        {
            temp.push_back(sum % 10 + '0');
            sum = sum / 10;
        }
    }
    return temp;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> ans;
    // for(int i=192;i<=10000;++i)
    // {

    // }
    string t = Pandigit(192);
    cout << t << "\n";
    return 0;
}