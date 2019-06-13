#include<iostream>
using namespace std;

int main(){
int a,b,c;
while(cin>>a){
if((a>999)|(a<100)){
		cout<<"No"<<endl;
continue;
}
c=a%10;
b=(a%100-c)/10;
a=a/100;
if((a*a*a+b*b*b+c*c*c)==(a*100+b*10+c))
    cout<<"Yes\n";
else
    cout<<"No\n";
}
return 0;
}
