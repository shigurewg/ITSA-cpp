#include<iostream>
#include<iomanip>
using namespace std;

int main(){
double a,b,c;
cin>>a>>b;
a=a/100;
cout<<fixed<<setprecision(2);
c=b/a/a;
if(c<18.5){
    cout<<c<<endl;
    cout<<"Underweight"<<endl;
}
if(c>=18.5&c<24){
    cout<<c<<endl;
    cout<<"Normal"<<endl;
}
if(c>=24&c<27){
    cout<<c<<endl;
    cout<<"Overweight"<<endl;
}
if(c>=27&c<30){
    cout<<c<<endl;
    cout<<"Obese Class I"<<endl;
}
if(c>=30&c<35){
    cout<<c<<endl;
    cout<<"Obese Class II"<<endl;
}
if(c>=35){
    cout<<c<<endl;
    cout<<"Obese Class III"<<endl;
}
return 0;
}