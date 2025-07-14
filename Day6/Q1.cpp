//Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
//Find the number(between 1 to N), that is not present in the given array.
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int missingNo(vector<int>&num,vector<int>&arr,int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                num[j]!=arr[i];
                return arr[i];
            }
        }
        return -1;
    }
}
int main(){
    int n;
    cout<<"enter the integar: ";
    cin>>n;
    vector<int> num(n);
    for(int i=1;i<n-1;i++){
        num[i];
    }
    vector<int> arr(n-1);
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    Solution sol;
    int output=sol.missingNo(num,arr,n);
    if(output!= -1){
        cout<<"the missing no from the array is: "<<output;
    }
    else{
        cout<<"there is no missing element.";
    }
}