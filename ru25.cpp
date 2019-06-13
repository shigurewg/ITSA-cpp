#include<iostream>
#include<iomanip>
using namespace std;
int g(int n);

int f(int n){
    if(n==1)return 2;
    else
    {
        return (3*f(n-1)+g(n-1));
    }
    
}

int g(int n){
    if(n==1)return -6;
    else
        return ((f(n-1)*-1)+g(n-1));
}



int main(){
int in;
cin>>in;
cout<<f(in)<<" "<<g(in)<<endl;

return 0;
}
