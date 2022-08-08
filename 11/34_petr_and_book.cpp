#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int day[7];
    int count=0,ans=0;
    for(int i=0;i<7;i++)
    {
        cin>>day[i];
    }
    while(1)
    {
        for(int i=0;i<7;i++)
        {
            count+=day[i];
            ans=i+1;
            if(count>=n)
            {
                goto label;
            }
        }
    }
    label:
    cout<<ans<<endl;
    
}