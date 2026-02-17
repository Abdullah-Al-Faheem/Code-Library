// O(N) solution -> https://codeforces.com/problemset/problem/327/A

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n+3, 0); 
    for (int i = 1; i <= n; i++) cin>> arr[i];

    int curr, mx;
    curr = mx = (arr[1]?-1:1);

    int l, r, lft, rgt; 
    l = r = lft = rgt = 1;

    for (int i = 2; i <= n; i++)
    {
        int val = (arr[i]?-1:1);

        if( val > (val+curr) ) 
        {
            curr = val;
            l = r = i;
        }
        else 
        {
            curr+= val;
            r=i;
        }

        if(mx<curr)
        {
            mx = curr;
            lft = l, rgt =r;
        }
    }

    for (int i = lft; i <= rgt; i++) arr[i]^=1;

    int sum =accumulate(all(arr), 0); 
    cout<<sum<<nl;
}