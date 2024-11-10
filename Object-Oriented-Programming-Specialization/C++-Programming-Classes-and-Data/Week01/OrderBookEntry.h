#include<string>
using namespace std;


enum class OrderBookOptions{ask,bid};


class OrderBookEntry{
    public:
        string timestamp;
        string product;
        OrderBookOptions ordertype;
        double amount;
        double price;

        OrderBookEntry(string timestamp,string product,OrderBookOptions ordertype,double amount,double price);


    };