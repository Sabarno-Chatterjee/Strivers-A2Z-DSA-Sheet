// TC: O(N); as we are performing a single pass

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){}
            else{
                return false;
            }
        }
        return true;
    }
};