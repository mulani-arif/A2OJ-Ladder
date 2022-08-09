#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int count=0;
    for(int i=0;i<12;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    int flag=0;
    for(int i=0;i<12;i++)
    {
     count+=v[i];
     if(count>=n)
     {
        if(n==0)
        {
            flag=1;
            cout<<0<<endl;
            break;
        }
        flag=1;
        cout<<i+1<<endl;
        break;
     }
    }
    if(flag==0) cout<<-1<<endl;
}
