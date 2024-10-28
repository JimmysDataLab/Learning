#include<iostream>
using namespace std;


unsigned long long fibonacci(int n){

    vector<unsigned long long>fib(1);
    // initialize
    fib[0] = 0;
    fib[1] = 1;
    // loop
    for(int i=2;i<n;++i){
        fib[i] = fib[i-1]+fib[i-2];
    }

    return fib[n-1];
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}