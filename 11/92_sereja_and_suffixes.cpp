#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    vll v(n+1);mll m;
    v[0]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        ll x=m.size();
        ll y=v[i];
        v[i]=x;
        m[y]--;
        if(m[y]==0) m.erase(y);
    }
    while(q--)
    {
        ll temp;cin>>temp;
        cout<<v[temp]<<endl;
    }
}
