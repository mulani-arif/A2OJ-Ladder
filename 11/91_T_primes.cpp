#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long &num)
{
    bool flag=true;
    if(num==3)
    {
        return flag;
    }
    else if(num==1)
    {
        return false;
    }
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(ceil(sqrt(n))!=floor(sqrt(n)))
        {
            cout<<"NO\n";
        }
        else if(n!=4 && n%2==0)
        {
            cout<<"NO\n";
        }
        else 
        {
            long long num=sqrt(n);
           // cout<<num<<endl;
            if(is_prime(num))
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
}
