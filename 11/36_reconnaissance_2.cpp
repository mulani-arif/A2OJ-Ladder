#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int min=10000;
    int a1=0,a2=0;
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])<min)
        {
            min=abs(arr[i]-arr[i+1]);
            a1=i+1;
            a2=i+2;
        }
    }
    if(abs(arr[0]-arr[n-1])<min)
    {
        cout<<1<<" "<<n<<endl;
    }
    else
    {
        cout<<a1<<" "<<a2<<endl;
    }
}