#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[m];
    cin>>arr[0];
    long long count=0;
    count=arr[0]-1;
    for(long long i=1;i<m;i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            count+=(arr[i]-arr[i-1]);
        }
        else
        {
            count+=((n-arr[i-1])+arr[i]);
        }
    }
    cout<<count<<endl;
}