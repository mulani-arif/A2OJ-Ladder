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
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
const int M=1e9+7;

void solve()
{
  ll n;cin>>n;
  vll a(n),b(n);
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b.rbegin(),b.rend());
  if(a==b)
  {
    cout<<"yes\n";
    cout<<1<<" "<<n<<endl;
    return;
  }
  reverse(b.begin(),b.end());
  if(a==b)
  {
    cout<<"yes\n";
    cout<<1<<" "<<1<<endl;
    return;
  }
  else
  {
    ll L=-1,R=-1;
    for(int i=1;i<n-1;i++)
    {
      if(a[i-1]<a[i] && a[i]>a[i+1]) L=i;
      if(a[i-1]>a[i] && a[i]<a[i+1]) R=i;
    }
    if(L==-1) L=0;
    if(R==-1) R=n-1;
    reverse(a.begin()+L,a.begin()+R+1);
    if(a==b)
    {
        cout<<"yes\n";
        cout<<L+1<<" "<<R+1<<endl;
        return;
    }
    else
    {
        cout<<"no\n";
    }
  }
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
