//there are multiple functions.I was learning functions this day.
#include<bits/stdc++.h>
using namespace std;

//print name n times.
void func1(int i,int n){
    if(i>n) return;
    cout<<"nishant"<<endl;
    func1(i+1,n);
}

//print 1 to n numbers.
void func2(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    func2(i+1,n);
}

//print n to 1 numbers.
void func3(int n){
    if(n<1) return;
    cout<<n<<" ";
    func3(n-1);
}

//print sum  of first n  numbers.
int func4(int n){
    if (n<0) return 0;
    if (n==0) return 0;
    return n+func4(n-1);
}
//print factorial of n terms.
int fact(int n){
    if (n==0) return 1;
    if (n==1) return 1;
    return n*fact(n-1);
}

//print fibionacci series.
int fib(int n){
    while(n>0){
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int result=fib(n);
    cout<< result;
    return 0;
    
}