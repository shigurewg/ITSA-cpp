#include<iostream>
using namespace std;
int f(int n){
    if(n==1|n==0)return n+1;
    else
    return f(n-1)+f(n/2); 
}


int main(){
int in;
cin>>in;
cout<<f(in)<<endl;


return 0;
}