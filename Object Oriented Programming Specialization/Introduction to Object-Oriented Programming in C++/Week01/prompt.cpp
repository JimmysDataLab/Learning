#include <iostream>
using namespace std;

int main(){
// Print out 6 choices (Print help, Print exchange stats, Place an ask, Place a bid, Print wallet, Continue)
// Prompt the user with a message to select a choice from the menu
// Show the correct information according to the user input choice. You should also handle wrong input choices (e.g. numbers below 1 or above 6)
// Be wrapped in a loop so that it repeatedly prompts the user to choose options.   

    while(true){
        int choice;

        cout<<"Select Choice from menu"<<endl;
        cout<<"1 Print help"<<endl;
        cout<<"2 Print exchange stats"<<endl;
        cout<<"3 Place an ask"<<endl;
        cout<<"4 Place a bid"<<endl;
        cout<<"5 Print wallet"<<endl;
        cout<<"6 Continue"<<endl;

        cin >> choice;

        if (choice < 1 || choice > 6){
            cout<<"Invalid Choice"<<endl;
            continue;
        }
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
    return 0;
}