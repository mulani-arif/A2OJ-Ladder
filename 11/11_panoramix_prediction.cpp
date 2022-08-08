#include<bits/stdc++.h>
using namespace std;

int prime(int n);

int main()
{
    int a,b,x=0;
    cin>>a>>b;
    for(int i=a+1;i<=b;i++)
    {
        if(prime(i))
        {
           x=i;
           break;
        }
    }
    if(x==b) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

int prime(int n)
{
   
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}