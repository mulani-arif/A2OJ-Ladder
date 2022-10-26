#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    int t;cin>>t;
    int ct=0;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=t;j++)
        {
            ll x=i*i + j*j;
            if(ceil(sqrt(x))==floor(sqrt(x)) && sqrt(x)<=t) ct+=1;
        }
    }
    cout<<ct/2<<endl;
   
}
    
