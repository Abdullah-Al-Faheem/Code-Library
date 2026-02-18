// O(N) solution -> https://codeforces.com/problemset/problem/327/A

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n,a,c1=0,c0=0,mx=-1;

    cin>>n;

    while(n--)
    {
        cin>>a;

        if(a)
        {
            c1++;

            if(c0)c0--;
        }
        else
        {
            c0++;
            mx = max(c0, mx);
        }
    }

    cout<<c1+mx<<endl;
}
