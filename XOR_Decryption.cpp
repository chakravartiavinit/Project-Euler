#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string pi;
    ifstream in("p059_cipher.txt");
    in >> pi;
    int finalkey = 0;
    for (int i = 97; i <= 122; ++i)
    {
        for (int j = 97; j <= 122; ++j)
        {
            for (int k = 97; k <= 122; ++k)
            {
                int key = i + j + k;
                int count = 0;
                int count2 = 0;
                for (int i = 0; i < pi.length(); ++i)
                {
                    if (pi[i] != ',')
                    {
                        count2++;
                        int alpha = (int)(pi[i]) ^ key;
                        if (alpha > 250)
                        {
                            break;
                        }
                        else
                        {
                            count++;
                        }
                    }
                }
                if (count == count2)
                {
                    finalkey = key;
                    break;
                }
            }
            if (finalkey > 0)
            {
                break;
            }
        }
        if (finalkey > 0)
        {
            break;
        }
    }
    cout << finalkey;

    return 0;
}