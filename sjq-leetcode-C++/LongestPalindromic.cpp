class Solution {
public:
    string longestPalindrome(string s) {
        vector<int> len(2 * s.size() + 1);  
        int maxR = 0, po = 0;      
        int start = 0, maxlen = 0; 
        string m="#";
        for (int i = 0; i < s.size(); i++)
        {
            m += s[i];
            m += '#';
        }
        for (int i = 1; i < m.size(); i++)
        {
            len[i] = i < maxR ? min(len[2 * po - i], maxR - i) : 1;
            while (len[i]+i<m.size() && i-len[i]>=0 && m[i+len[i]]==m[i-len[i]])
            {
                len[i]++;
            }
            if (i + len[i]>maxR) 
            {
                maxR = len[i] + i-1;   
                po = i;
            }
            if (len[i] - 1 > maxlen)   
            {
                start = (i - len[i] + 1) / 2;
                maxlen = len[i] - 1;
            }
        }
        return s.substr(start, maxlen);
    }
};
