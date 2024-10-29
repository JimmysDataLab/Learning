#include<iostream>
using namespace std;



int fib_partial_sum(unsigned long long n,unsigned long long m){    
    // n : 0 1 2 3 4 5 6
    // f : 0 1 1 2 3 5 8
    // s : 0 1 2 4 7 12 20

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long temp;
    int sum;
    if(m>=2) sum = 0;
    else sum = 1;
   
    if(n == 0) return a;
    if(n == 1) return b;
  

    for(int i = 2;i <= n;++i){
        temp = a%10;
        a = b%10;
        b = (temp+b)%10;

        if(i>=m){
            sum = (sum+b)%10;
        }
        // cout<<i<<" "<<a<<" "<<b<<" "<<sum<<endl;
        
        
    }

    return sum;
}
int main(){
    unsigned long long n,m;
    cin>>m;
    cin>>n;
    cout<<fib_partial_sum(n,m)<<endl;
    return 0;
}