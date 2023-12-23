#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3,a,b;
   while( cin>>x>>y>>z>>t1>>t2>>t3)
   {
    if(x!=y)
    {
      a=abs(x-z)*t2+abs(x-y)*t2+t3*3;
      b=abs(x-y)*t1;
      if(b>=a)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
   }
    return 0;
}
