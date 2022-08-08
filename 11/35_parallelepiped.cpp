#include<bits/stdc++.h>
using namespace std;

int main()
{
   double A,B,C;
   cin>>A>>B>>C;
   double l=sqrt((A/B)*C);
   double b=A/l;
   double h=C/l;
   cout<<(l+b+h)*4<<endl;
   
}
/* simple l*b=A and b*h=B where l/h=A/B 
is taken and placed into another eqn and
solved by simple method*/