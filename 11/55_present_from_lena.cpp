#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n+1;i++)
    {
        for(int j=0;j<2*n+1;j++)
        {
            int temp=n-abs(n-i)-abs(n-j);
            if(temp<0 && j<n)
            {
                cout<<"  ";
            }
            else if(temp>0)
            {
                cout<<temp<<" ";
            }
            else if(temp==0 && j<n)
            {
                cout<<"0 ";
            }
            else if(temp==0 && j>=n)
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}
