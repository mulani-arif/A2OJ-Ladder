#include<bits/stdc++.h>
using namespace std;
#define ll long  long
int main()
{
    // possible sequences:
    // 1 2 4
    // 1 2 6
    // 1 3 6
    int n;cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        m[temp]++;
    }
    if(m[2]+m[3]!=m[1] || m[5]>0 || m[7]>0 || (m[6]+m[4])!=(m[2]+m[3]) || m[3]>m[6])
    {
        cout<<-1<<endl;
    }
    else
    {
       
          while(m[4]>0)
          {
            cout<<1<<" "<<2<<" "<<4<<endl;
            m[4]--;
            m[2]--;
            m[1]--;
          }
          while(m[2]>0)
          {
            cout<<1<<" "<<2<<" "<<6<<endl;
            m[6]--;
            m[2]--;
            m[1]--;
          }
          while(m[6]>0)
          {
            cout<<1<<" "<<3<<" "<<6<<endl;
            m[6]--;
            m[3]--;
            m[1]--;
          }
        
        
    }
}
