class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;
        unordered_map<char,int> s1;
        for(char c :s){
            s1[c]++;
        }
        unordered_map<char,int> s2;
        for(char x :t){
            s2[x]++;
        }
        return s1 == s2;
    }
};
