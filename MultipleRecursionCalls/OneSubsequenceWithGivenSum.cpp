#include <bits/stdc++.h>
using namespace std;

//this code is for printing only one subsequence that add upto the given sum

bool SubsequencesWithGivenSum(int index,int n,int arr[],vector<int>&subseq,int sum,int targetSum){
    if(index >= n){
        if(sum == targetSum){
            for(auto i:subseq) cout<<i<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    subseq.push_back(arr[index]);
    sum += arr[index];
    if(SubsequencesWithGivenSum(index+1,n,arr,subseq,sum,targetSum) == true) return true;
    subseq.pop_back();
    sum -= arr[index];
    if(SubsequencesWithGivenSum(index+1,n,arr,subseq,sum,targetSum)==true) return true;
    return false;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int targetSum  = 5;
    int sum = 0;
    vector<int> subseq;
    SubsequencesWithGivenSum(0,5,arr,subseq,sum,targetSum);
    return 0;
}