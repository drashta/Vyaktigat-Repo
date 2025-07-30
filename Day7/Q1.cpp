// Count Maximum Consecutive One's in the array
// Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
// Examples:
// Example 1:
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.
// Input: prices = {1, 0, 1, 1, 0, 1}
// Output: 2
// Explanation: There are two consecutive 1's in the array.
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxOne(vector<int> &arr,vector<int> &count,int n){
        for(int i =0;i<n;i++){
            if(arr[i]!=1){
                count[i]++;
            }
        }
    }
};
int main(){
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> count;
    cout<<endl<<"enter the elements of the  array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution sol;
    int output=sol.maxOne(arr,count,n);
}