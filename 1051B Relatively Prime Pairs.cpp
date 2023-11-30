
/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Farjana Ema Nishy,
            Department of CSE, IUBAT.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_shuru int main ()
#define bair_ho return 0
#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define ll long long
#define U unsigned int
#define endl "\n"

ebar_khela_shuru
{
   llu a,b;
   cin>>a>>b;
   if(a==b) cout<<"NO"<<endl;
   else{
      if(((b-a)+1)%2==0){
         cout<<"YES"<<endl;
         for(unsigned long long i=a,j=a+1;i<=b,j<=b;i+=2,j+=2){
            cout<<i<<" "<<j<<endl;
         }
      }
      else{
         cout<<"YES"<<endl;
         for(unsigned long long i=a,j=a+1;i<=b,j<=b;i+=2,j+=2){
            cout<<i<<" "<<j<<endl;
         }
      }
   }
  bair_ho;
}
