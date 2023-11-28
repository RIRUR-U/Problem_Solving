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
   int n,m,maxx=0,minn=100,sum=0;
   cin>>n>>m;
   int a[n];
   for (int i=0;i<n;i++)
   {
       cin>>a[i];
       maxx=max(maxx,a[i]);
       minn = min(minn,a[i]);
       sum+= a[i];
   }
   //cout<<t<<endl;
   cout<< (max(maxx, (sum+m+n-1)/n) )<< " "<< maxx+m<<endl;


  bair_ho;
}

/*The maximum value of k
 should be determined in the following way: let's find the maximum number of people already sitting on the same bench (i. e. the maximum value in the array a
). Let this number be t
. Then if all additional m
 people will seat on this bench, we will get the maximum value of k
, so the answer is t+m
.

To determine the minimum value of k
 let's perform m
 operations. During each operation we put a new person on the bench currently having minimum number of people occupying it. The answer is the maximum number of people on the bench after we perform this operation for each of m
 newcomers.*/

