#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    unsigned long long alpha = n * (n + 1) / 2;
    unsigned long long beta = (n * (n + 1) * (2 * n + 1)) / 6;
    unsigned long long answer = (alpha*alpha)-beta;
    cout << answer << "\n";

    return 0;
}