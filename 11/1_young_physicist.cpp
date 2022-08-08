#include<iostream>
using namespace std;

int main()
{
    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }
    for(int i=0;i<n;i++)
    {
        sumx+=arr[i][0];
        sumy+=arr[i][1];
        sumz+=arr[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }



    return 0;
}
