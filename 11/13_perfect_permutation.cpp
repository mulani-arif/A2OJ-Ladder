#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=2,y=1;
    cin>>n;
    if(~n&1)
    {
        cout<<x<<" "<<y<<" ";
    for(int i=2;i<n;i++)
    {
        if(~i&1)
        {
          x+=2;
          cout<<x;
        }
        else
        {
            y+=2;
            cout<<y;
        }
        cout<<" ";
    }
   cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}