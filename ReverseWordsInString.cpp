class Solution {
public:
    string reverseWords(string s) {
        string result;
        
        while(s.find(" ")!=string::npos)
        {
            int i = s.find(" ");
            string check = s.substr(0,i);
            reverse(check.begin(),check.end());
            result=result+check+" ";
            s.erase(0,i+1);
            
        }
        reverse(s.begin(),s.end());
        result=result+s;
        
        return result;
    }
};