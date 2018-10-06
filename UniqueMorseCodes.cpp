class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string *pst = new string[26] {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
     
        vector<string> myvect;
        for(int i=0;i<words.size();i++)
        {
            string result;
            for(int j=0;j<words[i].size();j++)
            {
                result=result+pst[words[i][j]-'a'];   
            }
            if(find(myvect.begin(),myvect.end(),result)==myvect.end())
            {
                myvect.push_back(result);
            }
        }
        return myvect.size();
        
    }
};