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

void solve()
{
    ll n;cin>>n;
    vll a,b,c;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<0 && a.size()==0)
        {
            a.push_back(temp);
        }
        else if(temp>0)
        {
            c.push_back(temp);
        }
        else
        {
            b.push_back(temp);
        }
    }
    if(c.size()==0)
    {
        sort(b.rbegin(),b.rend());
        c.push_back(b[b.size()-1]);
        c.push_back(b[b.size()-2]);
        b.pop_back();b.pop_back();
    }

    cout<<a.size()<<" ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<c.size()<<" ";
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    cout<<b.size()<<" ";
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
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
