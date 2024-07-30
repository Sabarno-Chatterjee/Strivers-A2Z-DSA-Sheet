// Union of two sorted arrays
// Union means just the unique elements
// Brute Force
// First we create an empty set and then iterate through the first array and then the second. Since set only stores the unique elements in sorted order we get our union, next step is to create a vector and add all the elements from the set back to the vector and we have our solution.

// Time complexity: O(nlogn+mlogn)+O(n+m)
// Space Complexity: O(m+n) ;for the set(used to solve the problem)
//                   O(m+n) ;vector being used to return the ans, not to solve the problem.
	
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//     public:
//     //arr1,arr2 : the arrays
//     // n, m: size of arrays
//     //Function to return a list containing the union of the two arrays. 
//     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         //Your code here
//         //return vector with correct order of elements
//         set<int> st;
           
           // TC:O(nlogn) 
//         for(int i=0;i<n;i++){
//             st.insert(arr1[i]);
//         }
           // TC:O(mlogn)
//         for(int i=0;i<m;i++){
//             st.insert(arr2[i]);
//         }
        
//         vector<int> temp;
           // TC: O(n+m)
//         for(auto it:st){
//             temp.push_back(it);
//         }
        
//         return temp;
//     }
// };

// //{ Driver Code Starts.

// int main() {
	
// 	int T;
// 	cin >> T;
	
// 	while(T--){
	    
	    
	    
// 	    int N, M;
// 	    cin >>N >> M;
	    
// 	    int arr1[N];
// 	    int arr2[M];
	    
// 	    for(int i = 0;i<N;i++){
// 	        cin >> arr1[i];
// 	    }
	    
// 	    for(int i = 0;i<M;i++){
// 	        cin >> arr2[i];
// 	    }
// 	    Solution ob;
// 	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
// 	    for(int i: ans)cout<<i<<' ';
// 	    cout << endl;
	    
// 	}
	
// 	return 0;
// }
// // } Driver Code Ends


// Optimal Approach
// Here we use two pointers i and j and iterate through the two sorted arrays, on every addition of distinct element into the union array we increment the respective pointer. 
// Time Complexity: O(n+m)
// Space Complexity: O(n+m); being used to return the ans, not for solving.


class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0;
        int j=0;
        vector<int> unionArr;
        
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                    unionArr.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(j<m){
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        
        while(i<n){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        
        
        return unionArr;
    }
};


