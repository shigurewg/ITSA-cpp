#include<iostream>
using namespace std;

int main(){
int a,b;
while(cin>>a>>b){
if(a>100|a<0){
    cout<<"outside\n";
    continue;
}
if(b>100|b<0){
    cout<<"outside\n";
    continue;
}
    cout<<"inside\n";
}
return 0;
}