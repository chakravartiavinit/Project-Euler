#include <bits/stdc++.h>
using namespace std;
int alpha(int i)
{
    int count = 0;
    vector<string> temp = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "Thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "Nineteen"};
    vector<string> temp2 = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    vector<string> temp3 = {"hundred"};
    if (i == 1000)
    {
        return 11;
    }
    int one = (i % 10);
    int ten = (i / 10) % 10;
    int hundred = (i / 100);
    if (hundred > 0)
    {
        count += 3 + temp3[0].length() + temp[hundred - 1].length();
    }
    if (one > 0)
    {
        count += temp[one - 1].length();
    }
    if (one == 0)
    {
        count += temp2[ten - 1].length();
    }
    if (ten > 0 && one != 0)
    {
        if (ten == 1)
        {
            int a1 = 10 * ten + one;
            count += temp[a1 - 1].length() - temp[one - 1].length();
        }
        else
        {
            count += temp2[ten - 1].length();
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long letters = 0;
    for (int i = 1; i <= 1000; i++)
    {
        letters += alpha(i);
    }
    cout << letters << "\n";
    return 0;
}