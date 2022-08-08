#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long min=100000010000;
    long long temp=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==min)
        {
          temp=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
            ans=i+1;
        }
        
    }
    if(min==temp)
    {
        cout<<"Still Rozdil\n";
    }
    else
    {
        cout<<ans<<endl;
    }
}
