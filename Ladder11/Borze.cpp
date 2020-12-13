//
// Created by santhosh chaitanya singaraju on 12/13/20.
//

#include <string>
#include <iostream>
using namespace std;
string bz;
int main(){
    string res,bz;
    int len;
    cin>>bz;
    for(int i=0;i<bz.length();i++){
        if(bz[i]=='.'){
            res+='0';
        }
        else if(bz[i+1]=='.'){
            res+='1';i++;
        }
        else{
            res+='2';i++;
        }
    }
   cout<<res;
}
