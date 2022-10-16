#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        v.push_back(temp);
    }
    // we can mess up with one number 
    // to make all other numbers same
    // so,if sum of all numbers is divisible 
    // by size of array then we can get all numbers same
    int ans=accumulate(v.begin(),v.end(),0);
    if(ans%n) cout<<n-1<<endl;
    else cout<<n<<endl;
}
