//Brute force
// First we sort the array and then since we know the largest element is at arr[n-1], we pick up the element at arr[n-2] and compare if they aren't same as the largest then we have our answer, else we keep repeating the steps until we find the ans.

// for(i=n-2;i>=0;i--){
//     if(arr[i]!=largest){
//         second_largest=arr[i];
//         break;
//     }
// }

// Time complexity: O(NlogN + N) (Sorting + Comparing)

// Better Approach
// We take the s_largest as -1(or INT_MIN in case there are negative numbers) and then initiate a second pass, here we check if arr[i] != largest and greater than s_largest; if such is the case then we update s_largest as arr[i].
// Time complexity: O(N+N), as we are making two passes.

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int arr[]={23,64,21,34,24,45};
    
//     int largest=arr[0];
//     for(auto x:arr){
//         if(x>largest)
//             largest=x;
//     }
    
//     int s_largest=-1;
//     for(auto x:arr){
//         if(x!=largest && x>s_largest)
//             s_largest=x;
//     }
    
//     cout<<largest<<endl;   
//     cout<<s_largest<<endl;
//     return 0;
// }

// Optimal Solution
// Time complexity: O(N)
// Here we are checking for the second largest in the first pass itself. In case we need second smallest instead of -1 use INT_MAX. 


#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={7,7,7,7,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int largest=arr[0];
    int slargest=-1;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    
    cout<<largest<<endl;   
    cout<<slargest<<endl;
    return 0;
}