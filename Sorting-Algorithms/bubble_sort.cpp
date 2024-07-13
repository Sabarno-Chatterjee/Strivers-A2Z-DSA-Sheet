#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble_sort(int arr[], int n){
    int flag;
    for(int i=n-1;i>=0;i--){
        flag=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}

int main(){
    int arr[6]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return 0;
}