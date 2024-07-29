// Brute Force
// On first iteration store all the non zero numbers and then store all the non zero numbers to the front and fill the rest with zeros.
// Time Complexity: O(n)+O(x)+O(n-x)=O(2n)
// Space Complexity: O(x); x:no. of non zero elements

// #include<bits/stdc++.h>
// using namespace std;

// void moveZero(int arr[],int n){
//     vector<int> temp;
    
//     // Step 1
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0)
//             temp.push_back(arr[i]);
//     }
    
//     // Step 2
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
    
//     // Step 3
//     for(int i=temp.size();i<n;i++){
//         arr[i]=0;
//     }
// }

// int main(){
//     int arr[]={1,2,0,3,0,4,5,0,6,0,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     moveZero(arr,n);
    
//     for(auto it:arr)
//         cout<<it<<" ";
    
//     return 0;
// }


// Optimal Solution 
// Here we use a two pointer approach, first we have to find the first 0 and denote it as j and then we allot the next element as i and compare whether it is a non zero number, if yes we swap it with the j element, else we move both the pointers by one and keep making the comparisions.

// Time complexity: O(x)+O(n-x)=O(n)
// Space complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n){
    int j=-1;
    
    // Step 1: Locating the first zero
    // TC: O(x)
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    // Handling exceptions
    if(j==-1) return;
    
    // Step 2: Locating non-zeros and swapping
    // TC: O(n-x)
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={1,2,0,3,0,8,4,5,0,6,0,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    moveZero(arr,n);
    
    for(auto it:arr)
        cout<<it<<" ";
    
    return 0;
}