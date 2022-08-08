#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,chocolates;
    cin>>n>>chocolates;
    int arr[n],max=0,counter;
    int div_arr[n];
    int mod_arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mod_arr[i]=arr[i]%chocolates;
        //cout<<mod_arr[i]<<" ";
        if(mod_arr[i]==0)
        {
            div_arr[i]=arr[i]/chocolates;
        }
        else
        {
        div_arr[i]=arr[i]/chocolates +1;
        }
        //cout<<div_arr[i]<<endl;
        if(div_arr[i]>=max) 
        {
            max=div_arr[i];
            counter=i+1;
 
        }
    }
    
    cout<<counter<<endl;
}