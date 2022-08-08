#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    int count=0;
    cin>>a;
    while(a>0)
    {
       int x=a%10;
       if(x==4 || x==7)
       {
        count++;
       }
       a/=10;
    }
    if(count==4 || count==7)
    {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    return 0;
}