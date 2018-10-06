class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mymap;
        bool result=true;
        for(int i=0;i<magazine.length();i++)
        {
            mymap[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            mymap[ransomNote[i]]--;
        }
        map<char,int> :: iterator it;
        for(it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second<0)
            {
                result=false;
                break;
            }
        }
        return result;
    }
};