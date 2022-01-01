#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpha = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000 ";
    long long sum = 0;
    for (int i = 0; i < alpha.length(); ++i)
    {
        if(alpha[i]!=0)
        {
            sum += (alpha[i] - '0');
        }
    }
    cout << sum << "\n";
    return 0;
}