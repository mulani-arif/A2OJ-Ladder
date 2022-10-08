#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
   vector<bool> prime(1e7,true);
   prime[0]=prime[1]=false;
   for(int i=2;i<=1e7;i++)
   {
    if(prime[i])
    {
      if(n>0)
      {
        cout<<i<<" ";
        n--;
      }
      else break;
    }
      for(int j=i*2;j<=1e7;j+=i)
      {
        prime[j]=false;
      }
   }
}
