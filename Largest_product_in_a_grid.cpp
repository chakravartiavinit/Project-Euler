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
int left_side[4] = {-1, -2, -3, -4};
int right_side[4] = {1, 2, 3, 4};
bool check(int i, int j, int n)
{
    if (i < 0 || j < 0 || i >= n || j >= n)
    {
        return false;
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
    int n = 20;
    vector<vector<int>> vt(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> vt[i][j];
        }
    }
    long long final_answer = INT_MIN;
    map<long long, vector<long long>> mp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            long long answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + left_side[k], j + left_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + left_side[k]][j + left_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + right_side[k], j + right_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + right_side[k]][j + right_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + left_side[k], j, n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + left_side[k]][j]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + right_side[k], j, n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + right_side[k]][j]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i, j + left_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i][j + left_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i, j + right_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i][j + right_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + right_side[k], j + left_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + right_side[k]][j + left_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
            answer = 1;
            for (int k = 0; k < 4; ++k)
            {
                if (check(i + left_side[k], j + right_side[k], n) == true)
                {
                    if (answer == 0)
                    {
                        break;
                    }
                    answer = answer * (1LL) * (vt[i + left_side[k]][j + right_side[k]]);
                }
                else
                {
                    break;
                }
            }
            final_answer = max(answer, final_answer);
        }
    }
    cout << final_answer << "\n";
}