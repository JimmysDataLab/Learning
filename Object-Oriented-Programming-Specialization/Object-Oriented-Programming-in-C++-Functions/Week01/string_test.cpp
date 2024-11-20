#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1 = "Hello,World!";
    int pos1 = s1.find_first_not_of(",",2);
    int pos2 = s1.find_first_of(",");
    cout << pos1 << endl;
    cout << pos2 << endl;

    return 0;
}
