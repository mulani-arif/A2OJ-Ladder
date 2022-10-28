#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    vpll v;
    mpll m;
    int a,b;
    while(n--)
    {
       cin>>a>>b;
       v.push_back({a,-1*b});
       m[{a,b}]++;
    }
    sort(v.rbegin(),v.rend());
    
    cout<<m[{v[k-1].first,-1*v[k-1].second}]<<endl;
}
