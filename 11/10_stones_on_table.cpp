#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char a[n+1];
    cin>>a;
    for(int i=0;i<n;i++)
    {
      if(a[i]==a[i+1])
      {
        count++;
      }
    }
    cout<<count<<endl;
    return 0;
}