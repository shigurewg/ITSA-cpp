#include<iostream>
using namespace std;

int main(){
int in[100][2];
int k,l;
k=0;
while(cin>>in[k][0]){
cin>>in[k][1];
k++;
}
for(int a=1;1;a++){
    for(l=0;l<k;l++){
        if((a-in[l][1])<0)
            break;
        if((a-in[l][1])%in[l][0]!=0)
            break;
    }
    if(l==k){
        cout<<a<<endl;
        return 0;
    }
}


return 0;
}