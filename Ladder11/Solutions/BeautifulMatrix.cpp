//
// Created by santhosh chaitanya singaraju on 12/13/20.
//

#include <iostream>
using namespace std;
int x=0,a,b,c,d,e,y;
int main(){
    while(x++<6){
        cin>>a>>b>>c>>d>>e;
        if(a==1) {y = 1; break;}
        else if(b==1) {y = 2; break;}
        else if(c==1) {y = 3; break;}
        else if(d==1) {y = 4; break;}
        else if(e==1) {y = 5; break;}
    }
    cout<<abs(x-3)+abs(y-3);
}
