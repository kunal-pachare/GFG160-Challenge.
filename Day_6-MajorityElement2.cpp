class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> res;
        
        for(int ele : arr){
            freq[ele]++;
        }
        
        for(auto it: freq){
            int elee = it.first;
            int cnt = it.second;
            
            if(cnt > n/3)
            res.push_back(elee);
            
            if(res.size()==2 && res[0] > res[1]){
                swap(res[0], res[1]);
            }
            
        }
        return res;
    }
};

