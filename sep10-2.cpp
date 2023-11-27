///1872A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        int a,b,c;
        cin>>a>>b>>c;
        double d;

        d= (double(abs(a-b))/(2*c));
        //cout<<d<<endl;
        double r = ceil(d);
        cout<<r<<endl;
    }
    return 0;
}


//pr
