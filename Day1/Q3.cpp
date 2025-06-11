//we have to check if the array is sorted.
#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    cout<<"enter the size of array: ";
    int n; cin>>n;
    cout<<"enter the elements of the array: ";
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bool result=checkSorted(arr,n);
    if(result){
        cout<<"the array is sorted."<<endl;
    }else{
        cout<<"the array is not sorted."<<endl;
    }
}