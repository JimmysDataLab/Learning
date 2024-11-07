#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Declaring trivial functions here 
void print_menu();
void user_choice();
enum class OrderBookOptions{ask,bid};


class OrderBookEntry{
    public:
        string timestamp;
        string product;
        OrderBookOptions ordertype;
        double amount;
        double price;

        OrderBookEntry(string timestamp,string product,OrderBookOptions ordertype,double amount,double price)
        :timestamp(timestamp),product(product),ordertype(ordertype),amount(amount),price(price){}

};


int main(){

    vector <OrderBookEntry> orders;
    orders.push_back(OrderBookEntry{"2020/03/17 17:01:24.884492","ETH/BTC",OrderBookOptions::bid,0.02187308,7.44564869});
    orders.push_back(OrderBookEntry{"2020/03/17 17:01:24.884492","ETH/BTC",OrderBookOptions::bid,0.02187307,3.467434});
    orders.push_back(OrderBookEntry{"2020/03/17 17:01:24.884492","ETH/BTC",OrderBookOptions::bid,0.02187305,6.85567013});


    // Iterate through vector ways:
    // for(int i = 0; i < orders.size(); ++i){
    //     cout<<orders[i].timestamp<<orders[i].product<<orders[i].amount<<orders[i].price<<endl;
    // }

    for(const OrderBookEntry &order : orders){
        cout<<order.timestamp<<order.product<<order.amount<<order.price<<endl;
    }


    // while(true){
    //     int choice;
    //     print_menu();
    //     cin >> choice;
    //     user_choice(choice);
    // }    
    return 0;
}

void print_menu(){

    cout<<endl;
    cout<<"Select Choice from menu"<<endl;
    cout<<"1 Print help"<<endl;
    cout<<"2 Print exchange stats"<<endl;
    cout<<"3 Place an ask"<<endl;
    cout<<"4 Place a bid"<<endl;
    cout<<"5 Print wallet"<<endl;
    cout<<"6 Continue"<<endl;

}

void user_choice(int choice){

    if (choice < 1 || choice > 6)
        cout<<"Invalid Choice"<<endl;

    else{
        switch(choice){
            case 1:
                cout<<"1 Print help"<<endl;
                break;
            case 2:
                cout<<"2 Print exchange stats"<<endl;
                break;
            case 3:
                cout<<"3 Place an ask"<<endl;
                break;
            case 4:
                cout<<"4 Place a bid"<<endl;
                break;
            case 5:
                cout<<"5 Print wallet"<<endl;
                break;
            case 6:
                cout<<"6 Continue"<<endl;
                break;

        }
    }
}