class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right = s.length()-1;
        
        while(left<right)
        {
            bool isleftavowel = s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u' || s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' || s[left]=='U';
            bool isrightavowel = s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u' || s[right]=='A' || s[right]=='E' || s[right]=='I' || s[right]=='O' || s[right]=='U';
            
            if(isleftavowel && isrightavowel)
            {
                swap(s[left],s[right]);
                left++;
                right--;
                
            }
            else if(!isleftavowel && isrightavowel)
            {
                left++;
                
            }
            else if(isleftavowel && !isrightavowel)
            {
                right--;
            }
            else
            {
                left++;
                right--;
            }
            
        }
        return s;
    }
};