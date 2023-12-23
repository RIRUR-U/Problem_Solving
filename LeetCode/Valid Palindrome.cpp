class Solution {
public:
    bool isPalindrome(string s) {
        string t="",n;
        for (int i=0;i< s.size();i++)
    {

        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9'))
            t +=tolower(s[i]);
    }
    n=t;

    reverse(n.begin(),n.end());

    if(n==t)
        return true;
    else
        return false;
  
    }
};
