#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int x=(k*l)/nl;
   int y=c*d;
   int z=p/np;
   int min=(x<y && x<z)?x:(y<z && y<x)?y:z;
   cout<<min/n<<endl;
   return 0;
}