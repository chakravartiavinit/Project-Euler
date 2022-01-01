#include <bits/stdc++.h>
using namespace std;
string Binary(int n)
{
    string binary;

    int i = 0;
    while (n > 0)
    {
        binary.push_back(n % 2 + '0');
        n = n / 2;
        i++;
    }
    return binary;
}
bool Palindrome(int n)
{
    string temp1, temp2, temp3, temp4;
    temp1 = to_string(n);
    temp2 = temp1;
    reverse(temp1.begin(), temp1.end());
    temp3 = Binary(n);
    temp4 = temp3;
    reverse(temp3.begin(), temp3.end());

    if (temp1 == temp2 && temp3 == temp4)
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
    long long sum = 0;
    for (int i = 1; i < 1000000; ++i)
    {
        if (Palindrome(i) == true)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}