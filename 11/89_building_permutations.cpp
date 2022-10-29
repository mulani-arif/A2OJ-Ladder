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
    int n;cin>>n;
     vll v(n);ll temp;
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
     }
     sort(v.begin(),v.end());
     ll ans=0;
     for(int i=0;i<n;i++)
     {
        ans+=abs(i+1-v[i]);
     }
     cout<<ans<<endl;
}
