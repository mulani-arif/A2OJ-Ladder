#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int temp;
    int minn=INT_MAX,maxn=INT_MIN,minm=INT_MAX,maxm=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(maxn<temp)
        {
            maxn=temp;
        }
        if(minn>temp)
        {
            minn=temp;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        if(maxm<temp)
        {
            maxm=temp;
        }
        if(minm>temp)
        {
            minm=temp;
        }
    }
    int v=minn;//2*v for extra time
    int p=maxn;//max so all right will get passed
    int c=minm;//no wrong should pass
    if(max(2*v,p)<c)
    {
        cout<<max(2*v,p)<<endl;
    }
    else cout<<-1<<endl;
}
