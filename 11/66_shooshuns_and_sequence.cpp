#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int element;
    bool flag=true;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        v.push_back(temp);
        if(i==k-1)
        {
          element=temp;
        }
        if(i>(k-1))
        {
            if(temp!=element)
            {
                flag=false;
                break;
            }
        }
    }
     int strt;
     bool tot=true;
     for(int i=0;i<v.size();i++)
     {
       if(v[i]==element && tot)
       {
        strt=i;
        tot=false;
       }
       else if(v[i]!=element)
       {
        tot=true;
       }
     }
 
    if(flag)
    {
        cout<<strt<<endl;
    }
    else cout<<-1<<endl;
}
