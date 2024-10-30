#include<iostream>
using namespace std;



unsigned long long fib_mod(unsigned long long n, unsigned long long d){    
    // initialize
    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long temp;
    if(n == 0) return 0;
    if(n == 1) return 1;

    // loop
    for(unsigned long long i=2;i<=n;++i){
        temp = a;
        a = b;
        b = temp + b;
        a = a%d;
        b = b%d;
    }

    return b;
}
int main(){
    unsigned long long n, d;
    cin>>n;
    cin>>d;
    cout<<fib_mod(n,d)<<endl;
    return 0;
}