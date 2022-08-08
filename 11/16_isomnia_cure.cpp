#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,N;
   int flag=0,count=0;
   cin>>a>>b>>c>>d>>N;
   if(a==1 || b==1 || c==1 || d==1)
   {
    cout<<N<<endl;
    flag=1;
   }
   if(flag==0)
   {
    for(int i=1;i<=N;i++)
    {
        if(!(i%a==0 || i%b==0 || i%c==0 || i%d==0))
        {
            count++;
        }
    }
    cout<<N-count<<endl;
   }
}