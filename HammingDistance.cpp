class Solution {
public:
    int countones(int x)
    {
        int count=0;
        while(x!=0)
        {
            int remain = x%2;
            if(remain==1)
            {
                count++;
            }
            x=x/2;
        }
        return count;
    }
    int hammingDistance(int x, int y) {
        int result = x^y;
        return countones(result);
    }
};