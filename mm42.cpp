#include<iostream>
#include<iomanip>
using namespace std;

int main(){
int in;
double s;
int myflag;
while(cin>>in){
s=0;
myflag=1;
    for(double k=1;k<=in;k++){
        if(myflag){
            s+=(1/(2*k-1));
            myflag=0;
        }
        else
        {
            s-=(1/(2*k-1));
            myflag=1;
        }
    }
    cout<<fixed<<setprecision(3)<<s<<endl;
}
return 0;
}
