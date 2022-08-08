#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int i=0;i<(n-1);i++)
        {
            if(arr[i]=='B' && arr[i+1]=='G')
            {
                char temp='B';
                arr[i]='G';
                arr[i+1]=temp;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}