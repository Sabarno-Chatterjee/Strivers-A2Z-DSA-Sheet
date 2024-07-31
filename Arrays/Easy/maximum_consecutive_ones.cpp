// Time Complexity: O(N)
// Space Complexity: O(1)
// Here we take a counter variable and a max variable, we keep counting the consecutive ones and simultaneously updating the max as long as counter>max; when we encounter a different digit, the counter variables resets to zero and the process continues.

int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int cnt=0,maxi=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else
            cnt=0;
    }
    return maxi;
}
