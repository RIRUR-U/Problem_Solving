class Solution {
public:
    bool isPalindrome(int x) {
        int div=1;
        while(x/div >=10)
            div *= 10;
        
        while (x!=0)
        {
            int leading = x/div;
            int trailing = x%10;
            if(x>=-9 and x<=-1)
		return false;
            if(leading != trailing)
                return false;
            
                x= (x%div)/10;
                div=div/100;
            
        }
        return true;
        
      
    }
};
