#include<bits/stdc++.h>
using namespace std;
#define int long long
map<char,pair<int,int>> m;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    m['N']={0,1};
    m['S']={0,-1};
    m['E']={1,0};
    m['W']={-1,0};

    int t,sx,sy,ex,ey,ans=0;
    cin>>t>>sx>>sy>>ex>>ey;
    int cx=sx,cy=sy;
    char dir;

    for(int i=0;i<t;i++)
    {
        cin>>dir;
        if(sx==ex && sy==ey) break;
       cx=sx+m[dir].first;
       cy=sy+m[dir].second;
       if(abs(ex-sx)>=abs(ex-cx) && abs(ey-sy)>=abs(ey-cy))
       {
          sx=cx;sy=cy;
       }
       ans+=1;
    }
    if(sx==ex && sy==ey) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}
