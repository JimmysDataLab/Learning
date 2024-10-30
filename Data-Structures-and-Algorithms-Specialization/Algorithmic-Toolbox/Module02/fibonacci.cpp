#include<iostream>
using namespace std;


unsigned long long fibonacci(int n){

    
    // initialize
    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long temp;
    if(n == 0) return 0;
    if(n == 1) return 1;

    // loop
    for(int i=2;i<=n;++i){
        temp = a;
        a = b;
        b = temp + b;

    }

    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}