//
// Created by santhosh chaitanya singaraju on 12/13/20.
//

#include <iostream>
using namespace std;
int n,t;
string q;
int main(){
    cin>>n>>t;
    cin>>q;
    while(t-->0){
       for(int i=0;i<q.length();){
           if(i+1<q.length() && q[i]=='B' && q[i+1]=='G'){
               q[i+1] = 'B';
               q[i] = 'G';
               i+=2;
           }
           else{
               i+=1;
           }
       }
    }
    cout<<q;
}
