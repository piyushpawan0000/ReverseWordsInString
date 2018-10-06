class Solution {
public:
    bool checkRecord(string s) {
        int counta=0;
        int countl=INT_MIN;
        bool result=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                counta++;
            }
            if(s[i]=='L')
            {
                int temp=1;
                for(int j=i+1;j<s.length();j++)
                {
                    if(s[j]==s[i])
                    {
                        temp++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(temp>countl)
                {
                    countl=temp;
                }
            }
        }
    if(counta>1 || countl>2)
    {
            result=false;
    }
    return result;
    }
};