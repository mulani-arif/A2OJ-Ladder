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
const int M=1e9+7;

void solve()
{
  string s;cin>>s;
  int ct=0;
  int sum=0;
  string nw;
  while(nw.size()!=1)
  {
    if(s.size()==1) break;
  for(int i=0;i<s.size();i++)
  {
    sum+=s[i]-'0';
  }
  nw=to_string(sum);
  s=nw;
  ct++;
  sum=0;
  }
  cout<<ct<<endl;
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
