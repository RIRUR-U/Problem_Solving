
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            //int cnt=0;
            cnt+=(a[i+1]-a[i])-1;
        }
        cout<<cnt<<endl;

    return 0;
}
