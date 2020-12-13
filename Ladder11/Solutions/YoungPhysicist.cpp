#include <iostream>
using namespace std;
int n,a,b,c,fx,fy,fz;
int main(){
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        fx+=a;fy+=b;fz+=c;
    }
    cout<<(fx|fy|fz?"NO":"YES");
}

//#include<iostream>
//int n,a,b,c,d,e,f;
//main(){
//    std::cin>>n;
//    while(n--)
//    {
//        std::cin>>a>>b>>c,d+=a,e+=b,f+=c;
//    }
//    std::cout<<(d|e|f?"NO":"YES");
//}