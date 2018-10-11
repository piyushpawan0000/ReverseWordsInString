class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mymap;
        for(int i=0;i<s.length();i++)
        {
            mymap[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            mymap[t[i]]--;
        }
        map<char,int> :: iterator it;
        char result;
        for(it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second!=0)
            {
                result = it->first;
            }
        }
        return result;
        
    }
};