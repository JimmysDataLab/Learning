#include <string>
#include <iostream>

using namespace std;



vector<string> tokenize(const string& line, char delimiter){

    int start = 0;
    int end = line.length();
    int token_start, token_end;
    vector<string> tokens;


    
   do{  
        token_start = line.find_first_not_of(delimiter,start);
        token_end = line.find_first_of(delimiter,start+1);
        tokens.push_back(line.substr(token_start,token_end - token_start));
        start = token_end;  
    }while(token_end <= line.length());
    

    return tokens;
}

int main(){

    string line = "Object1,Object2,Object3,Object4,Object5";
    char delimiter = ',';
    vector <string> tokens;


    tokens = tokenize(line, delimiter);

    for(string token : tokens){
        cout<<token<<endl;
    }

    return 0;
}

 

