#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int index , int n , int arr[] , vector<int>& subseq){
    if(index >= n){
        for(auto i:subseq) cout<<i<<" ";
        if(subseq.size() == 0) cout<<"{}";
        cout<<endl;
        return;
    }
    subseq.push_back(arr[index]);
    printSubsequences(index+1 , n , arr , subseq);
    subseq.pop_back();
    printSubsequences(index+1 , n , arr , subseq);
    return;
}

int main(){
    int arr[5] = {3,1,5};
    vector<int> subseq;
    printSubsequences(0,3,arr,subseq);
    return 0;
}