//mere hisab se kii hue sorting h ....meko nhi ptaa sahi hai k glt

#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    int n[t];
    int temp;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int k = 0; k < t; k++)
    {
        for (int j = k + 1; j < t; j++)
        {
            if (n[k] > n[j])
            {
                temp = n[k];
                n[k] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << n[i] << endl;
    }
    return 0;
}
