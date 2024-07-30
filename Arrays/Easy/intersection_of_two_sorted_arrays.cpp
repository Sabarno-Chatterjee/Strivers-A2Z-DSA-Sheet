//Intersection means present in both; repetition is allowed.

//Brute Force
// We iterate through each element of the first array while comparing it with the second array to find a match, if there is a match, we check in the visited array to verify if that element has already found it's match or not. But this aprroach takes too much time because we are using two loops and leads to time limit exceeded.
// Time Complexity:O(n x m)
// Space Complexity: O(m); visited array

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.
// 	vector<int> ans;
// 	int visited[m]={0};
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(arr1[i]==arr2[j] && visited[j]==0){
// 				ans.push_back(arr1[i]);
// 				visited[j]=1;
// 				break;
// 			}
// 			if(arr2[j]>arr1[i]) break;
// 		}
// 	}

// 	return ans;
// }


// Optimal Approach
// Here we will opt for the two pointer approach and whenever there is a match we will increment both the pointers else we just increment the i pointer while looking for a match in the second array. 
// Time Complexity: O(n+m); worst case if both i and j keep incrementing without finding a match
// Space Complexity: O(1); for solving
//                   O(n+m); for returning the answer


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	
	int i=0;
	int j=0;

	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr2[j]<arr1[i]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}

	return ans;
}