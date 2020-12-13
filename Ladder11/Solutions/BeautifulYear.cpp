//
// Created by santhosh chaitanya singaraju on 12/13/20.
//


#include <iostream>
using namespace std;
int n,a,b,c,d;
int main(){
    cin>>n;
   do{
       n++;
       a = (n / 1000) % 10;
       b = (n / 100) % 10;
       c = (n / 10) % 10;
       d = n % 10;
   }
   while(a==b||a==c||a==d||b==c||b==d||c==d);

   cout<<n;
}
