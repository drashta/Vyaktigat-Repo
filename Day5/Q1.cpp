//Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m.
//Find the union of two sorted arrays.#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution{
    public:
    int findUnion(vector<int>&arr1,vector<int>&arr2,int m,int n,vector<int>&unionArr){
        if(m>n){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(find(unionArr.begin(),unionArr.end(),arr2[i])==unionArr.end()){
                        unionArr.push_back(arr2[i]);
                    }
                }
            }
        }
        else if(m<n){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(find(unionArr.begin(),unionArr.end(),arr1[i])==unionArr.end()){   
                        unionArr.push_back(arr1[i]);
                    }

                }
            }
        }
        else{
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    if(find(unionArr.begin(),unionArr.end(),arr1[i])==unionArr.end()){
                        unionArr.push_back(arr1[i]);
                    }
                }
            }
        }
        return 1;
    }
};

int main(){
    int m,n;
    cout<<"enter the the size of array1 and array2: ";
    cin>>m>>n;
    vector<int> arr1(m);
    vector<int> arr2(n);
    vector<int> unionArr;
    cout<<"enter the the elements of array1: ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"enter the the elements of array2: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    Solution sol;
    int result=sol.findUnion(arr1,arr2,m,n,unionArr);
    if(result == -1){
        cout<<"no distinct elements";
    }
    return 0;
}