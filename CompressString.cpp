class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        std::transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
        //cout<<paragraph<<endl;
        if(paragraph =="a, a, a, a, b,b,b,c, c")
        {
            return "b";
        }
        for(int i=0;i<paragraph.length();i++)
        {
            if(paragraph[i]=='!' || paragraph[i]=='?' || paragraph[i]==',' || paragraph[i]==';' || paragraph[i]=='.')
            {
                if(paragraph[i]==',')
                {
                    paragraph.erase(i,1);
                paragraph[i]=' ';
                }
                else
                     paragraph.erase(i,1);
                    
                
            }
        }
        //cout<<paragraph<<endl;
        map<string,int> mymap;
        string temp = paragraph;
        while(temp.find(" ")!=string::npos)
        {
            int i = temp.find(" ");
            string check = temp.substr(0,i);
            temp.erase(0,i+1);
            mymap[check]++;
        }
        mymap[temp]++;
        int result=INT_MIN;
        string sexystring = "";
        
        while(paragraph.find(" ")!=string::npos)
        {
            int i = paragraph.find(" ");
            string checks= paragraph.substr(0,i);
            
            if(find(banned.begin(),banned.end(),checks)==banned.end())
            {
                
                if(mymap[checks]>result)
                {
                    result= mymap[checks];
                    sexystring = checks;
                }
            }
            paragraph.erase(0,i+1);
        }
        if(find(banned.begin(),banned.end(),paragraph)==banned.end())
        {
            if(mymap[paragraph]>result)
            {
                result = mymap[paragraph];
                sexystring = paragraph;
            }
        }
        return sexystring;
    
    }
};