#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int removeDuplicate(vector<int>&nums){
            if(nums.size()==0)return 0;
            int i=0;
            for(int j=1;j<nums.size();j++){
                if(nums[j]!=nums[i]){
                    i++;
                    nums[i]=nums[j];                    
                }
            }
            return i+1;
        }
};

int main(){
    vector<int> nums={1,1,2,2,3};
    Solution sol;
    int newLength=sol.removeDuplicate(nums);

    cout<<"length of the modified array: "<<newLength<<endl;
    cout<<"modified array: ";
    for(int i=0;i<newLength;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}