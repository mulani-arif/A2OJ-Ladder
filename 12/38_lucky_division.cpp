#pragma GCC optimize ("Ofast")

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
typedef map<char,ll> mcll;
typedef map<pair<char,ll>,ll> mpcll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
const int M=1e9+7;
vll v={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
void solve()
{
    ll n;cin>>n;
    for(int i=0;i<v.size();i++)
    {
        if(n%v[i]==0)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
       int t=1;//cin>>t;
       while(t--) 
       {
        solve();
       }
    
}
