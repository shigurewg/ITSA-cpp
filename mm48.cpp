#include<iostream>
using namespace std;

int f(int t){
if(t<=100)
    return f(f(t+11));
else
return t-10;    
}

int main(){
int in;
cin>>in;
while(cin>>in){
    cout<<f(in)<<endl;
}
return 0;
}