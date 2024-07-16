// Find the largest element in an array

// Brute force (Implement using merge sort/quick sort and then print the n-1 element)
// Time Complexity: NlogN


//Optimal solution
// We take the first element to be the largest and then iterate through the array while updating largest when arr[i] is larger than largest.

//Time Complexity:O(N)

#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={23,64,21,34,24,45};
    
    int largest=arr[0];
    for(auto x:arr){
        if(x>largest)
            largest=x;
    }
    
    cout<<largest;    
    return 0;
}

