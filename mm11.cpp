#include<iostream>
#include<cstdio>
using namespace std;

int main(){
int a,b;
while(cin>>a){
b=a%10;
printf("NT10=%d\nNT5=%d\nNT1=%d\n",(a/10),(b/5),(b%5));
}
return 0;
}