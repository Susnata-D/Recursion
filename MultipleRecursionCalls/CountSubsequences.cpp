#include <bits/stdc++.h>
using namespace std;

//this code is for counting number of subsequences with given sum

int countSubsequences(int index,int n,int arr[],int sum,int targetSum){
    if(index >= n){
        if(sum == targetSum) return 1;
        return 0;
    }
    
    sum += arr[index];
    int leftSum = countSubsequences(index+1,n,arr,sum,targetSum);
    sum -= arr[index];
    int rightSum = countSubsequences(index+1,n,arr,sum,targetSum);
    return leftSum+rightSum;
}

int main(){
    int arr[] = {1,2,3,4};
    int sum = 0;
    int targetSum = 5;
    int num = countSubsequences(0,4,arr,sum,targetSum);
    cout<<"Number of subsequences are: "<<num;
    return 0;
}