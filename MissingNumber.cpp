class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp = temp ^ nums[i];
        }
        int check =0;
        for(int i=0;i<(nums.size()+1);i++)
        {
            check = check ^ i;
        }
        return temp^check;
        
    }
};