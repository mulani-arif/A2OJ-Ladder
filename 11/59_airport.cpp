#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int> ms;
    priority_queue<int> pq;
    int count_min=0,count_max=0;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        ms.insert(temp);
        pq.push(temp);
    }
    
    while(n--)
    {
        auto it=ms.begin();
        count_min+=(*it);
        int nul=(*it)-1;
        ms.erase(it);
        if(nul>0)
        {
        ms.insert(nul);
        }

        int temp=pq.top();
        count_max+=temp;
        temp-=1;
        pq.pop();
        pq.push(temp);
    }
    cout<<count_max<<" "<<count_min<<endl;
    

}
