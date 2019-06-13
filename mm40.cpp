#include<iostream>
using namespace std;

int main(){
int in,sum=0;
cin>>in;
if(in>=1){
cout<<"1";
sum=1;
}
for(int k=2;k<=in;k++){
cout<<" + "<<k;
sum+=k;
}

cout<<" = "<<sum<<endl;

return 0;
}