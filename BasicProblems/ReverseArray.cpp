#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[] , int i , int n){
    if(i >= n/2) return;
    swap(arr[i] , arr[n-i-1]);
    reverseArray(arr,i+1,n);
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    reverseArray(arr,0,n);

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}