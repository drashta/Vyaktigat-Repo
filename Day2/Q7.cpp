//Move the  all the 0's in the array to the end.
#include<iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int moveZeroes(vector<int>&nums, vector<int>&sorted){
        int n=nums.size();
        sorted.resize(n);

        int start=0;
        int end=n-1;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                sorted[start]=nums[i];
                start++;
            }
            else{
                if(start<=end){//it was the advised addition to the code.
                    sorted[end]=nums[i];
                    end--; 
                }
            }
        }
        return 0;
    }
};

int main(){
    cout<<"Enter the size of";
    vector<int>nums;
    vector<int>sorted;

    Solution sol;
    sol.moveZeroes(nums,sorted);

    cout<<"The array after shifting of zeroes is: ";
    for(int i=0;i<nums.size();i++){
        cout<<sorted[i];
    }
}