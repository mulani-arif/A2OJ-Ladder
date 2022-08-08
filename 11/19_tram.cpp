#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int max=0,temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        temp+=(b[i]-a[i]);
        if(temp>max)
        {
            max=temp;
        }
    }
    cout<<max<<endl;
    return 0;
}