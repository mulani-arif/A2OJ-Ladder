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
     vll v(n+1),s(n+1);ll temp;
     v[0]=0;s[0]=0;
     vll hsh(n+1);hsh[0]=0;
     vll shs(n+1);shs[0]=0;
     for(int i=1;i<=n;i++)
     {
        cin>>v[i];
        s[i]=v[i];
        hsh[i]=hsh[i-1]+v[i];
     }
     sort(s.begin(),s.end());
     for(int i=1;i<=n;i++)
     {
        shs[i]=shs[i-1]+s[i];
     }
     int q;cin>>q;
     int type,l,r;
     while(q--)
     {
        cin>>type>>l>>r;
        if(type==1) cout<<hsh[r]-hsh[l-1]<<endl;
        else cout<<shs[r]-shs[l-1]<<endl;
     }
}
