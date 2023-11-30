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
     int t;
    cin>>t;
    while (t--)
    {
        vector<int>v,v1,v2;
        string s;
        cin>>s;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]>='0' && s[i]<='9')
                v.push_back(i);
            else if (s[i]>='a' && s[i]<='z')
                v1.push_back(i);
            else if (s[i]>='A' && s[i]<='Z')
                v2.push_back(i);
        }
        if (v.size()!=0 && v1.size()!=0 && v2.size()!=0)
        {
            cout<<s<<endl;
        }
        else
        {
            if (v.size()>1 && v1.size()>1 && v2.size()==0)
            {
                s[0]='A';
            }
            else if (v.size()>1 && v2.size()>1 && v1.size()==0)
            {
                s[0]='a';
            }
             else if (v1.size()>1 && v2.size()>1 && v.size()==0)
            {
                s[0]='1';
            }
            else if (v.size()==1 && v1.size()>1 && v2.size()==0)
            {
                s[v1[0]]='A';
            }
            else if (v.size()==1 && v2.size()>1 && v1.size()==0)
            {
                s[v2[0]]='a';
            }
            else if (v1.size()==1 && v2.size()>1 && v.size()==0)
            {
                s[v2[0]]='1';
            }
            else if (v1.size()==1 && v.size()>1 && v2.size()==0)
            {
                s[v[0]]='A';
            }
            else if (v2.size()==1 && v.size()>1 && v1.size()==0)
            {
                s[v[0]]='a';
            }
            else if (v2.size()==1 && v1.size()>1 && v.size()==0)
            {
                s[v1[0]]='1';
            }
            else if (v.size()>1 && v1.size()==0 && v2.size()==0)
            {
                s[0]='a';
                s[1]='A';
            }
            else if (v1.size()>1 && v.size()==0 && v2.size()==0)
            {
                s[0]='1';
                s[1]='A';
            }
            else if (v2.size()>1 && v1.size()==0 && v.size()==0)
            {
                s[0]='a';
                s[1]='1';
            }
            cout<<s<<endl;
        }
    }
  bair_ho;
}
