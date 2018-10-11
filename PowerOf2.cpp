class Solution {
public:
    bool isPowerOfTwo(int n) {
        int result = 1;
        if(n==1)
        {
            return true;
        }
        bool results = false;
        
        int check = n & 1;
        int countbits = 0;
        int temp = n;
        while(temp>0)
        {
            temp = temp & (temp-1);
            countbits++;
        }
        
        if(check==1 )
        {
            results=false;
        }
        else if(check==0 && countbits==1)
        {
            results = true;
        }
        return results;

            
    }
};