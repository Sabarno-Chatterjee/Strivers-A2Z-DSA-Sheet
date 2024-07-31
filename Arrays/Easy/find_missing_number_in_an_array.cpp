// Brute Force
// Here we take each number till n and compare it with the numbers present.
// Time Complexity: O(N x N)
// Space Complexity: O(1)


// for(int i=1;i<=n;i++){
//     flag=0;
//     for(int j=1;j<n-1;j++){
//         if(arr[j]==i){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//         return i;
// }


// Better Approach
// Here we create a hash array and then iterate through i=1 to i=N of the hash array to check the missing number.
// Time Complexity: O(N+N) = O(2N)
// Space Complexity: O(N); hash array

// int hash[n+1]={0};

// for(int i=0;i<n;i++){
//     hash[arr[i]]=1;
// }

// for(int i=1;i<n;i++){
//     if(hash[i]==0)
//         return i;
// }


// Optimal Solution

// Using SUM

// Sum = [N*(N+1)] / 2
// Here we obtain the sum of first n natural numbers and then find the sum of all the numbers present in the array, the difference of the sums obtained will give us the missing number.
// Time Complexity: O(N)
// Space Complexity: O(1)


// sum = n*(n+1)/2
// s2=0
// for(i=0;i<n-1;i++){
//     s2+=arr[i]
// }

// return sum-s2;


// Using XOR
// XOR of same numbers gives us 0
// XOR of any number with 0 will give us the number itself
// We perform XOR1 for n natural numbers and then we perform XOR2 for the n-1 numbers present in the array. Then we perform XOR1 ^ XOR2 which will give us the missing number as it will not be able to find it's pair. 
// Why XOR technique is better than sum is that in case N=10^5, so while we perform the sum of n natural numbers the value will be near about 10^10 which will exceed the value for int, but in case of XOR the value will never exceeds the largest number. 

// XOR1=0
// for(int i=1;i<=n;i++)
//     XOR1=XOR1^i;
// XOR2=0
// for(int i=0;i<n-1;i++)
//     XOR2=XOR2^arr[i]

// return XOR1^XOR2

// In the above case the TC is O(2N); to simplify it further we perform just one iteration as shown below.
// Time Complexity: O(N)


int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1 = xor1^N;

    return xor1^xor2;
}
