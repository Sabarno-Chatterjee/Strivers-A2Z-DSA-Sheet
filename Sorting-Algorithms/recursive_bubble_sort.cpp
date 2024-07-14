#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[],int n){
    if(n==1)
        return;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
    }
    bubble_sort(arr,n-1);
}

int main(){
    int arr[]={45,23,78,3,2,86,1};
    bubble_sort(arr,7);
    for(int i=0;i<7;i++) 
        cout<<arr[i]<<" ";
    
    return 0;
}