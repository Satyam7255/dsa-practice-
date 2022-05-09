class Solution {
public:
    bool isPalindrome(string s) 
    {
     string r;
		for(int i=0;i<s.size() ; i++)
        {
			if(s[i] >= 'a' && s[i]<='z' || s[i] >= '0' && s[i]<='9') 
                r+=(s[i]);
			if(s[i] >= 'A' && s[i]<='Z') r+=(s[i]-'A'+'a');
		}
        
        int lens = r.size();
		for(int j=0;j<lens/2;j++)
        {
			if(r[j] != r[lens-j-1]) 
            {
                return false;
            }   
		}
        return true;   
    }
};
