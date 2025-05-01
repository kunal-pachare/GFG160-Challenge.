class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        
        unordered_map<char, int> charcnt;
        
        for(char ch: s1){
            charcnt[ch]+=1;
        }
        for(char ch: s2){
            charcnt[ch]-=1;
        }
        
        for(auto& pair : charcnt){
            if(pair.second != 0){
                return false;
            }
        }
        return  true;
        
        
    }
};
