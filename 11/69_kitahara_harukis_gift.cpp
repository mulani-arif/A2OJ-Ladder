#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int count1=0,count2=0;
    while(n--)
    {
        int temp;cin>>temp;
        if(temp==100)
        {
            count1+=1;
        }
        else count2+=2;
    }
    if((count1+count2)&1)
    {
        cout<<"NO\n";
    }
    else if(count1==0 && count2%4!=0)
    {
        cout<<"NO\n";
    }
    else cout<<"YES\n";
}
