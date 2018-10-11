class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital =0;
        int small =0;
        bool result = false;
        for(int i=0;i<word.length();i++)
        {
            if((int)word[i]>=65 &&  (int)word[i]<=90 )
            {
                capital++;
            }
            if((int)word[i]>=97 && (int)word[i]<=122)
            {
                small++;
            }
        }
        if(capital==word.length() || small == word.length() || (capital==1 && ((int)word[0]>=65 && (int)word[0]<=90)))
        {
            result = true;
        }
        return result;
    }
};