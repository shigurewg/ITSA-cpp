#include<iostream>
#include<cstdio>
using namespace std;

int main(){
int a,b,c,d;
cin>>a>>b;
c=a%b;
d=a/b;
printf("%d+%d=%d\n",a,b,(a+b));
printf("%d*%d=%d\n",a,b,(a*b));
printf("%d-%d=%d\n",a,b,(a-b));
if(a<0){
    c+=b;
    d--;
    }
printf("%d/%d=%d...%d\n",a,b,d,c);
return 0;
}