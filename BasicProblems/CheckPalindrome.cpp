#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s , int i , int n){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    checkPalindrome(s,i+1,n);
}

int main(){
    string s = "SUSNATA";
    int n = 5;
    bool check = checkPalindrome(s,0,n);
    if(check) cout<<"Palindrome";
    else cout<<"NOT palindrome";
    return  0;
}