#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int a=*(v.begin());
    int b=*(--v.end());
    cout<<b-a<<" ";
    long long counta=0,countb=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==a) counta+=1;
        else if(v[i]==b) countb+=1;
    }
    
    if(countb==0) cout<<((n)*(n-1))/2<<endl;
    else
    {
    cout<<counta*countb<<endl;
    }
}
