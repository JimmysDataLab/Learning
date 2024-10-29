#include<iostream>
using namespace std;



int fib_sum_last_digit(unsigned long long n){    
    // n : 0 1 2 3 4 5 6 7
    // f : 0 1 1 2 3 5 8 13
    // s : 0 1 2 4 7 12 20 33

    unsigned long long a = 0;
    unsigned long long b = 1;
    int sum;
    unsigned long long temp;
    if(n == 0) return a;
    if(n == 1) return b;
    sum = 1;

    for(int i = 2;i <= n;++i){
        temp = a%10;
        a = b%10;
        b = (temp+b)%10;

        sum = (sum+b)%10;
        // cout<<i<<" "<<a<<" "<<b<<" "<<sum<<endl;
        
        
    }

    return sum;
}
int main(){
    unsigned long long n;
    cin>>n;
    cout<<fib_sum_last_digit(n)<<endl;
    return 0;
}