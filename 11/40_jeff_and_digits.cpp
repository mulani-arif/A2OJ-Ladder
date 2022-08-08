#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count0=0,count5=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0) count0++;
        else count5++;
    }
    int req_count5=count5-(count5%9);
    if(count0==0) cout<<-1<<endl;
    else if(count5==0) cout<<0<<endl;
    else
    {
        for(int i=0;i<req_count5;i++)
        {
            cout<<5;
            flag=1;
        }
        for(int i=0;i<count0;i++)
        {
            if(flag==1) cout<<0;
            else break;
        }
        if(flag==0) cout<<0;
        cout<<endl;
    }

}