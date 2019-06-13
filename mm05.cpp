#include<iostream>
#include<cstdio>
using namespace std;

int main(){
double a,b;
while(cin>>a){
b=a*a;
b*=10;
b+=0.5;
printf("%.1f\n",b/10);
}

return 0;
}