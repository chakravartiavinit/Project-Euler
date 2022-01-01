#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double n;
    double m = 1.618157;
    n = ceil((log(10) * 999 + log(5) / 2) / log(m));
    cout << n << "\n";
    return 0;
}