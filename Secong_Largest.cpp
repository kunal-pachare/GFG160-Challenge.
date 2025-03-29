class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max = arr[0];
        int secondMax = -1;
        int n = arr.size();
        
        for (int i=0; i<n; i++){
            if (arr[i]>max){
                secondMax = max;
                max = arr[i];
            }
            if (arr[i]>=secondMax && arr[i]<max){
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};
