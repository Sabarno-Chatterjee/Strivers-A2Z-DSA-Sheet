//Brute Force approach
//We can iterate through an array and inserted arr[i] into a set, as set only accepts unique values, we will not get any duplicates, after this we iterate through the set and insert each values at index=0 onwards. The point where our index ends will be the total number of unique elements in the array.
//Time Complexity: NlogN + N ; for traversing the array and inserting in the set and then for inserting unique elements in the array
//Space Complexity: O(N); in case the array had all unique elements, we need N places in the set.


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int arr[]={1,1,2,2,2,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     set<int> st;
    
//     //first pass
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
    
//     int index=0;
//     for(auto it:st){
//         arr[index]=it;
//         index++;
//     }
    
//     cout<<index;
    
//     return 0;
// }


// Optimal Approach
// We use a two pointer approach for this.
// We take the first element as i pointer and second as j pointer, now we keep comparing the j eleement with i, the moment we get an unique number, we place the j element right after the i element and then increment the i pointer. Eventually we get all the unique elements in the beggining of the array and the number of unique elements is i+1.
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,1,2,2,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int i=0;
    
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    
    cout<<i+1;
    
    return 0;
}