#include <iostream>
#include <cstdlib>
#include "MerkleMain.h"
using namespace std;

MerkleApp::MerkleApp(){}

void MerkleApp::init(){
    
    int choice;
    while(true){

        PrintMenu();
        cin>>choice;
        Menu(choice);
    }
}

void MerkleApp::PrintMenu(){

    cout<<endl;
    cout<<"Select Choice from menu"<<endl;
    cout<<"========================"<<endl;
    cout<<"1 : Print help"<<endl;
    cout<<"2 : Print exchange stats"<<endl;
    cout<<"3 : Place an ask"<<endl;
    cout<<"4 : Place a bid"<<endl;
    cout<<"5 : Print wallet"<<endl;
    cout<<"6 : Exit"<<endl;
    cout<<"========================"<<endl;

}

void MerkleApp::PrintHelp(){

    cout<<"Print Help"<<endl;
}

void MerkleApp::PrintStats(){

    cout<<"Print Stats"<<endl;
}

void MerkleApp::PlaceAsk(){

    cout<<"Place Ask"<<endl;
}

void MerkleApp::PlaceBid(){

    cout<<"Place Bid"<<endl;
}

void MerkleApp::PrintWallet(){

    cout<<"Print Wallet"<<endl;
}




void MerkleApp::Menu(int choice){



    if (choice < 1 || choice > 6){

        cout<<"Invalid Choice"<<endl;
    
    }

    else{
        switch(choice){
            case 1:
                PrintHelp();
                break;
            case 2:
                PrintStats();
                break;
            case 3:
                PlaceAsk();
                break;
            case 4:
                PlaceBid();
                break;
            case 5:
                PrintWallet();
                break;
            case 6:
                exit(1);
                break;

        }
    }
}