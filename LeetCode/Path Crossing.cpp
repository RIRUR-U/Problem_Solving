
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string path;
    int x=0,y=0,result =0;
    cin>>path;
    unordered_set<string> visited;

    //Starting position
    visited.insert("0,0");
    for(int i=0;i< path.size(); i++)
    {
        if(path[i] == 'N') y++;
        else if(path[i] == 'S') y--;
        else if(path[i] == 'E') x++;
        else if(path[i] == 'W') x--;
        // Check if the current position has been visited before
        string currentPosition = to_string(x) + "," + to_string(y);
        if (visited.count(currentPosition) > 0) {
            result =1;// Crossed the path
        }

        // Add the current position to the set of visited positions
        visited.insert(currentPosition);
//        cout<<currentPosition<<endl;
//        cout<<result<<endl;
    }

    if(result>0)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
