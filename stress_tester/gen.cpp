// generator for -> https://codeforces.com/problemset/problem/327/A

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// Random Integer Number Generator:
inline int gen_random(int l, int r) 
{
    return uniform_int_distribution<int>(l, r)(rng);
}

// // Random Real Number Generator:
// inline double gen_random(double l, double r) 
// {
//     return uniform_real_distribution<double>(l, r)(rng);
// }


int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n = gen_random(1, 10);

    cout<<n<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<< gen_random(0,1)<<" ";
    }
    cout<<"\n";
}