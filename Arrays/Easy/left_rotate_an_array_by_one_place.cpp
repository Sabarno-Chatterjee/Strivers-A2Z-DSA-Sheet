// Time Complexity: O(N)
// Space Complexity: O(1), constant as no new array is created

#include<bits/stdc++.h>

using namespace std;

void rotateLeft(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    rotateLeft(arr,n);
    
    for(auto it:arr)
        cout<<it<<" ";
    return 0;
}