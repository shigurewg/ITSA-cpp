#include<iostream>
#include<iomanip>
using namespace std;
double f(double n){
    if(n==1.0)return 1;
    else
    {
        return (f(n-1)/2+1) ;
    }
    
}


int main(){
int in;
cin>>in;
cout<<fixed<<setprecision(5);
cout<<f((double)in)<<endl;

return 0;
}