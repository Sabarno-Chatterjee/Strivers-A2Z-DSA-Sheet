// Brute Force
// We perform a linear search while comparing each number and check which number appears once.
// Time Complexity= O(n^2)
// Space Complexity= O(1)

// for(i=0;i<n;i++){
//     num=arr[i]
//     cnt=0;
//     for(j=0;j<n;j++){
//         if(arr[j]==num)
//             cnt++;
//     }
//     if(cnt==1)
//         return num;
// }

// Better Solution
// Here we are simply implementing hashing to keep track of which element appears once.
// Time Complexity: O(3N)
// Space Complexity: O(maxi); maximum element present in the array

// #include<bits/stdc++.h>

// using namespace std;

// int getSingleElement(vector<int> &arr){
//     int maxi=arr[0];
//     int n=arr.size();
    
//     //finding the max element for creating a hash array
//     // TC: O(N)
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//     }
    
//     vector<int> hash(maxi+1,0);
    
//     //creating the hash map
//     // TC: O(N)
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
    
//     //finding the element that appears once
//     // we can also loop till the max element which will in turn change the time complexity; draw back is that in case the max element is very big, then we would keep iterating till that number even though total elements(n) might have been less eg: [2,2,3,9,9]. Here, n=5 but if we iterated till the max element, then the loop would have run for 9 times.  
//     // TC: O(N)

//     //for(int i=0;i<maxi;i++){
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1)
//             return arr[i];
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
//     return 0;
// }


// Better Approach 2
// Here we are using a map datastructure in case we have negative elements as well as very large elements

// #include<bits/stdc++.h>

// using namespace std;

// int getSingleElement(vector<int> &arr){
//     int n=arr.size();
    
//     // Declare the hashmap.
//     // And hash the given array:
//     map<int, int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
    
//     //Find the single element and return the answer:
//     for(auto it:mpp){
//         if(it.second==1)
//             return it.first;
//     }
    
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
//     return 0;
// }


// Optimal Solution
// Time Complexity: O(N)
// Space Complexity: O(1)

int getSingleElement(vector<int> &arr){
    int n=arr.size();
    int xorr=0;
    
    for(int i=0;i<n;i++)
        xorr=xorr^arr[i];
        
    return xorr;
}
