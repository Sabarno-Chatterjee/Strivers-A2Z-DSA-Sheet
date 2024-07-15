#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[],int n,int i){
    if(i==n) 
        return;
    
    int j=i;    
    while(j!=0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    
    insertion_sort(arr,6,i+1);
}

int main(){
    int arr[]={13,46,24,52,20,9};
    insertion_sort(arr,6,0);
    
    for(int i=0;i<6;i++) cout<<arr[i]<<" ";
    return 0;
}