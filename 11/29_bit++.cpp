#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int ans=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
       
        if(s=="X++" || s=="++X")
        {
            ans+=1;
        }
        else
        {
            ans-=1;
        }
    }
    cout<<ans<<endl;

    return 0;
}