#include<iostream>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b){
    if(a%b == 0) return b;
    return gcd(b, a%b);
}

unsigned long long lcm(unsigned long long a, unsigned long long b, unsigned long long g){

    return a/g * b/g * g;
}

int main(){
    unsigned long long a, b, temp, g;
    cin >> a;
    cin >> b;
    temp = a;
    a = max(a,b);
    b = min(b,temp);
    g = gcd(a,b);


    cout<<lcm(a,b,g)<<endl;
}