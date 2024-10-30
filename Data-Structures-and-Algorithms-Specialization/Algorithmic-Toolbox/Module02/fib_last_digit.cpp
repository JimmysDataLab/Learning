#include<iostream>
// #include <boost/multiprecision/cpp_int.hpp>


// using namespace boost::multiprecision;
using namespace std;







int fib_last_digit(int n){    
    // initialize
    int a = 0;
    int b = 1;
    int temp;
    if(n == 0) return 0;
    if(n == 1) return 1;

    // loop
    for(int i=2;i<=n;++i){
        temp = a;
        a = b;
        b = temp + b;
        if(a>=10) a = a%10;
        if(b>=10) b = b%10;

    }

    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fib_last_digit(n)<<endl;
    return 0;
}