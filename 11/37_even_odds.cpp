#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(n&1)
    {
       
            if(m<=(n+1)/2)
            {
                cout<<2*m-1<<endl;
            }
            else
            {
                cout<<(m-(n+1)/2)*2<<endl;
            }
        
    }
    else
    {
        if(m<=n/2)
        {
            cout<<2*m-1<<endl;
        }
        else
        {
            cout<<(m-n/2)*2<<endl;
        }
    }
}