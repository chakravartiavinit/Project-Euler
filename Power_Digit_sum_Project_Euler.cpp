#include <bits/stdc++.h>
using namespace std;
long long Fastpow(long long a,long long b)
{
    if(b==1)
    {
        return a;
    }
    else if(b==0)
    {
        return 1;
    }
    long long temp=Fastpow(a,b/2);
    if(b%2==0)
    {
        return temp*temp;
    }
    return temp*temp*a;
}
long long DigitSum(long long a,long long b)
{
    
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}