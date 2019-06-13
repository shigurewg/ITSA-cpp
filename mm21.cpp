#include<iostream>
using namespace std;

int main(){
long long a,sum;
while(cin>>a){
    sum=1;
    for(int k=1;k<=a;k++){
        sum*=k;
    }
    cout<<sum<<endl;
}

return 0;
}