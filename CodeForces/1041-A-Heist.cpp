
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


//Sortings, Implementation, Greedy.
/*The problem involves a heist at an electronic store where keyboards were initially numbered in ascending order from
an unknown integer x. After the heist, only n keyboards with indices a1, a2, ..., an remain. The goal is to find the minimum
possible number of stolen keyboards by determining the smallest value of x that satisfies the given remaining indices.
This involves subtracting the minimum index from each remaining index and finding the smallest resulting difference. T
he objective is to iterate through possible scenarios to calculate the minimum number of stolen keyboards.
 for example:

    4 is number of keyboards
    10 13 12 8 number of indices.
    and here 9 & 11 are missing.

*/

//Solution explanation (dry run sol)
/* Initialize variables:

n = 4
Array a: 10 13 12 8
cnt = 0
Sort the array a in ascending order:

Sorted array: 8 10 12 13
Calculate the count of stolen keyboards in the sorted array:

For i = 0: cnt += (10 - 8) - 1 = 1
For i = 1: cnt += (12 - 10) - 1 = 1
For i = 2: cnt += (13 - 12) - 1 = 0
Output the result:

cout << cnt << endl; => cout << 2 << endl; */
