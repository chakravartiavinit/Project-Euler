#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;

// KKKKKKKKK    KKKKKKK               AAA               LLLLLLLLLLL             IIIIIIIIII        66666666           66666666           66666666
// K:::::::K    K:::::K              A:::A              L:::::::::L             I::::::::I       6::::::6           6::::::6           6::::::6
// K:::::::K    K:::::K             A:::::A             L:::::::::L             I::::::::I      6::::::6           6::::::6           6::::::6
// K:::::::K   K::::::K            A:::::::A            LL:::::::LL             II::::::II     6::::::6           6::::::6           6::::::6
// KK::::::K  K:::::KKK           A:::::::::A             L:::::L                 I::::I      6::::::6           6::::::6           6::::::6
//   K:::::K K:::::K             A:::::A:::::A            L:::::L                 I::::I     6::::::6           6::::::6           6::::::6
//   K::::::K:::::K             A:::::A A:::::A           L:::::L                 I::::I    6::::::6           6::::::6           6::::::6
//   K:::::::::::K             A:::::A   A:::::A          L:::::L                 I::::I   6::::::::66666     6::::::::66666     6::::::::66666
//   K:::::::::::K            A:::::A     A:::::A         L:::::L                 I::::I  6::::::::::::::66  6::::::::::::::66  6::::::::::::::66
//   K::::::K:::::K          A:::::AAAAAAAAA:::::A        L:::::L                 I::::I  6::::::66666:::::6 6::::::66666:::::6 6::::::66666:::::6
//   K:::::K K:::::K        A:::::::::::::::::::::A       L:::::L                 I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// KK::::::K  K:::::KKK    A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL  I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// K:::::::K   K::::::K   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::LII::::::II6::::::66666::::::66::::::66666::::::66::::::66666::::::6
// K:::::::K    K:::::K  A:::::A               A:::::A  L::::::::::::::::::::::LI::::::::I 66:::::::::::::66  66:::::::::::::66  66:::::::::::::66
// K:::::::K    K:::::K A:::::A                 A:::::A L::::::::::::::::::::::LI::::::::I   66:::::::::66      66:::::::::66      66:::::::::66
// KKKKKKKKK    KKKKKKKAAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLLIIIIIIIIII     666666666          666666666          666666666

#define MOD 1000000007
#define PI 3.141592653589793238462
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*########################################### DEBUG ###############################################################################################*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/*###############################################################################################################################################*/
vector<bool> visited(MOD, true);
vector<int> primes;
void Sieve(int n)
{
    for (int p = 2; p * p <= n; p++)
    {
        if (visited[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                visited[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (visited[p])
        {
            primes.push_back(p);
        }
    }
}
bool check(string temp, map<string, int> &mp)
{
    int i = 0;
    for (int i = 0; i < temp.length(); ++i)
    {
        string gamma;
        for (int j = i; j < temp.length(); ++j)
        {
            gamma.push_back(temp[j]);
        }
        for (int j = 0; j < i; ++j)
        {
            gamma.push_back(temp[j]);
        }
        if (mp.find(gamma) == mp.end())
        {
            return false;
        }
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> mp;
    Sieve(1000000);
    for (int i = 0; i < primes.size(); ++i)
    {
        string m;
        m = to_string(primes[i]);
        mp[m]++;
    }
    int answer = 0;
    for (int i = 0; i < primes.size(); ++i)
    {
        string temp;
        temp = to_string(primes[i]);
        bool flag = true;
        if (check(temp, mp) == true)
        {
            answer++;
        }
    }
    cout << answer << "\n";
}