#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    unordered_set<int> st;
    for (int i = 1; i < 1000; i++)
    {
        st.insert(i);
    }
    for (int i = 3; i < 1000; i++)
    {
        for (int j = i + 1; j < 1000; j++)
        {
            for (int k = j + 1; k < 1000; k++)
            {
                if (i + j + k == 1000)
                {
                    if (i * i + j * j == k * k)
                    {
                        cout << i * j * k;
                        flag = true;
                        break;
                    }
                }
            }
            if (flag == true)
            {
                break;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    return 0;
}