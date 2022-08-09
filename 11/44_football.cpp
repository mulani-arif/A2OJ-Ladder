#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    pair<int,string> v1;
    pair<int,string> v2;
    string temp;
    cin>>v1.second;
    v1.first++;
    for(int i=2;i<=n;i++)
    {
        cin>>temp;
        if(temp==v1.second)
        {
            v1.first++;
        }
        else
        {
            v2.second=temp;
            v2.first++;
        }
    }
    if(v1.first>v2.first)
    {
        cout<<v1.second<<endl;
    }
    else
    {
        cout<<v2.second<<endl;
    }

   

}
