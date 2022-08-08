#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int min=a[0];
    int max=a[0];
    int count=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
        else if(a[i]>max)
        {
            max=a[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}