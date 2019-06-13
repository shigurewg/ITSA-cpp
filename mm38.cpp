#include<iostream>
using namespace std;

int main(){
int a,b,c;
int tmp;
while(cin>>a){
    cin>>b>>c;
    if (a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if (a<c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if (b<c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    if (b+c>a)
        cout<<"fit"<<endl;
    else
        cout<<"unfit"<<endl;
}

return 0;
}