// O(N^2) solution -> https://codeforces.com/problemset/problem/327/A

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n, sum = 0; cin >> n;
    vector<int> arr(n+3, 0);
    for (int i = 1; i <= n; i++) 
    {
        cin>> arr[i];
        sum+= arr[i];
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int curr = 0;

        for (int j = i; j <= n; j++)
        {
            if(arr[j]==0)curr++;
            else curr--;

            ans = max(sum+curr, ans);
        }
    }

    cout<< ans<<nl;
}