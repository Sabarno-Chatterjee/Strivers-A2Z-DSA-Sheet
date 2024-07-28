//d=Number or rotations and N=size of array.
//we will calculate d%N and then perform rotations for the results, as after every N rotation we will get the original array itself.

//Brute Force

//We will take a similar approach as for the single rotation case, here we will take a temp array and store all the numbers till d. Then we left shift the elements and place the temp values back.
//Time Complexity: O(d)+O(n-d)+O(d) = O(n+d)
//Space Complexity: O(d)

// #include<bits/stdc++.h>
// using namespace std;

// void rotateLeft(int arr[],int n,int d){
//     d=d%n;
    
//     //Shifting d elements into temp array; TC:O(d)
//     vector<int> temp;
//     for(int i=0;i<d;i++){
//         temp.push_back(arr[i]);
//     }
    
//     //shifting; TC:O(n-d)
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
    
//     //put back temp; TC:O(d)
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     rotateLeft(arr,n,3);
    
//     for(auto it:arr)
//         cout<<it<<" ";
    
//     return 0;
// }


// Optimal Solution
// Time Complexity: O(d)+O(n-d)+O(n)=O(2n)
// Space Complexity: O(1); as no additional space was required.

// vector<int> rotateArray(vector<int>arr, int k) {
//     // Write your code here.
//     k=k%arr.size();
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     reverse(arr.begin(),arr.end());
//     return arr;
// }

#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    rotateLeft(arr,n,3);
    
    for(auto it:arr)
        cout<<it<<" ";
    
    return 0;
}