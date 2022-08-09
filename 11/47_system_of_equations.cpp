#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n>m?n:m;
    int count=0;
    for(int i=0;i<=x;i++)
    {
       if(i+n*n+i*i*i*i-2*i*i*n==m && n-i*i>=0/*to eliminate -ve value of b*/)
       {
       // cout<<i<<endl;
        count++;
       }
    }
    cout<<count<<endl;
}
