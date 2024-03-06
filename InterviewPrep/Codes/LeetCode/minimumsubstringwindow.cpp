class Solution {
public:
    string minWindow(string s, string t) {
          if (s.empty() || t.empty()) {
            return "";
        }
        unordered_map<char, int> ma,tmp;
        for (char c : t) {
           ma[c]++;
        }
        int required = ma.size();
        int i =0 ;
        int count = 0;
        int minlen = INT_MAX;
        int minleft = 0;
        
        for (int j=0;j<s.length();j++)
        {
            char c = s[j];
            if(ma.count(c)==0) continue;

            tmp[c]++;

            if(tmp[c]<=ma[c]) count++;    
            
            if(count ==t.size())
            {
                while(ma.count(s[i])==0 || tmp[s[i]]>ma[s[i]]){
                    if(tmp.count(s[i])!=0) tmp[s[i]]--;
                    i++;
                }

                if(j-i+1<minlen){
                    minlen = j-i+1;
                    minleft = i;

                }
            }
        }

        if(minlen == INT_MAX) return "";

        return s.substr(minleft,minlen);
    }
};