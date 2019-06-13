#include<iostream>
using namespace std;

int main(){
int in;
long i;
while(cin>>in){
        if(in>30)
            cout<<"Value of more than 31"<<endl;
        else{
            i=1<<in;
            cout<<i<<endl;
}
}
return 0;
}