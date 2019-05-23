class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(haystack.size() < needle.size()) return -1;
        int pos = 0;
        int npos = 0;
        for(pos; pos < haystack.size(); ++pos){
            if(npos == needle.size())
                return pos - npos;
            if(haystack[pos] == needle[npos])
                npos++;
            else{
                pos = pos - npos;
                npos = 0;
            }
        }
        if(npos == needle.size()) return pos-needle.size();
        return -1;
    }
};
