#include<iostream>
using namespace std;

int main(){
int k,j;
cin>>k>>j;
if(k==0|j==0){
    cout<<"no answer\n";
    return 0;
}
for(int i=0;i<j;i++){
    for(int l=0;l<k;l++)
        cout<<"*";
    cout<<endl;
}

return 0;
}