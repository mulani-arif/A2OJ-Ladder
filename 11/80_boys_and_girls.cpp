#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,int> m={{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     int n,m;cin>>n>>m;
    
    if(n>=m)
    {
       string ans(n+m,'B');
        for(int i=1;i<2*m;i+=2) ans[i]='G';
        cout<<ans<<endl;

    }
    else
    {
        string ans(n+m,'G');
        for(int i=1;i<2*n;i+=2) ans[i]='B';
        cout<<ans<<endl;

    }
}
    
