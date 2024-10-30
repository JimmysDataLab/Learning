#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0) return b;
    return gcd(b, a%b);
}
int main(){
    int a, b, temp;
    cin >> a;
    cin >> b;
    temp = a;
    a = max(a,b);
    b = min(b,temp);
    cout<<gcd(a,b)<<endl;
}