#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<3;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                count+=1;
            }
        }
        if(count>1) ans+=1;
        count=0;
    }
    cout<<ans<<endl;
    return 0;
}