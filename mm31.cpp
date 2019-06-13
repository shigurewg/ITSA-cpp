#include<iostream>
using namespace std;

int main(){
int in;
int sum;
while(cin>>in){
sum=0;
    for(int k=1;k<=in;k++){
        if(k%6==0)
            sum+=k;
        if(k%12==0)
            sum-=k;
    }
cout<<sum<<endl;
}
return 0;
}
