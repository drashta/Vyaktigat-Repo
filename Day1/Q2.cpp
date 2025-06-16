//Here we have to find the second largest element in array without sorting.

#include<iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        if(nums.size() < 2){
            return -1;
        }

        int largest=INT_MIN;
        int slargest=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                slargest=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest && nums[i]>slargest){
                slargest=nums[i];
            }
        }

        if(slargest==INT_MIN){
            return -1;
        }else{
            return slargest;  
        }         
    }
};
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int result = sol.secondLargestElement(arr);
    if (result == -1) {
        cout << "Second largest element does not exist." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}