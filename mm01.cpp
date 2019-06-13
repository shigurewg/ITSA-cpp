#include<iostream>
#include<cstdio>
using namespace std;

int main(){
double a,b,c;
while(cin>>a){
cin>>b>>c;
printf("Trapezoid area:%.1f\n",((a+b)*c)/2);
}

return 0;
}