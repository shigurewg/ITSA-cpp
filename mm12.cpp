#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,b;
while(cin>>a){
b=1000-254*3;
a*=1000;
a=a/b;
b=a%b;
if(b!=0)a++;
cout<<a<<endl;
}
return 0;
}