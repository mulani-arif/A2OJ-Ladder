#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,int> m={{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<int> a,b;
    string s;cin>>s;
    for(int i=0;i<n;i++)
    {
        a.push_back(m[s[i]]);
        b.push_back(m[s[2*n-1-i]]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cond=0;
    bool poss=true;
    if(a[0]>b[0]) cond=1;
    else if(a[0]<b[0]) cond=2;
    if(cond==0) poss=false;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]>b[i] && cond==1) continue;
        else if(a[i]<b[i] && cond==2) continue;
        else
        {
            poss=false;
            break;
        }
    }
    if(poss) cout<<"YES\n";
    else cout<<"NO\n";
}
