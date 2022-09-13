#include <bits/stdc++.h>
using namespace std;

void SubsequencesWithGivenSum(int index,int n,int arr[],vector<int>&subseq,int sum,int targetSum){
    if(index >= n){
        if(sum == targetSum){
            for(auto i:subseq) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    subseq.push_back(arr[index]);
    sum += arr[index];
    SubsequencesWithGivenSum(index+1,n,arr,subseq,sum,targetSum);
    subseq.pop_back();
    sum -= arr[index];
    SubsequencesWithGivenSum(index+1,n,arr,subseq,sum,targetSum);
    return;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int targetSum  = 5;
    int sum = 0;
    vector<int> subseq;
    SubsequencesWithGivenSum(0,5,arr,subseq,sum,targetSum);
    return 0;
}