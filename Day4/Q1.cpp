#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int linearSearch(vector<int>&arr,int num){
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    cout<<"enter the array elements: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number in the array you are searching for: ";
    int num;
    cin>>num;
    cout<<endl<<"Elements entered are: ";
    for(int i=0;i<n;i++){
        cout<<(arr[i])<<" ";
    }
    cout<<endl<<"The number asked for is: "<<num<<endl;
    Solution sol;
    int output=sol.linearSearch(arr,num);
    if(output==-1){
        cout<<"The number is not found in the array.";
    }
    else{
        cout<<"The number is found at index: "<<output;
    }

}
