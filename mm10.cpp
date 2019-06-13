#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double in;
    cout<<fixed<<setprecision(1);
    while(cin>>in){
        cout<<(in*9/5+32)<<endl;
    }
return 0;
}