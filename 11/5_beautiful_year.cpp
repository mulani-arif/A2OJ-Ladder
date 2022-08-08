#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    int arr[4];
    cin>>year;
    int N=year;
    for(int i=year+1;i<=9999;i++)
    {
        int x=i;
        int j=0;
        while(x>0)
        {
            arr[j]=x%10;
            x/=10;
            j++;
        }
        if(arr[0]!=arr[1] && arr[2]!=arr[1] && arr[3]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && arr[2]!=arr[3] )
        {
            cout<<i<<endl;
            break;
        }
    }



    return 0;
}