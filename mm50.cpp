#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double mini;
double hlf;
vector<int> thing;

void recer(int index,int mysum){
    if(index>=thing.size())
        return;
    if(fabs(thing[index]+mysum-hlf)<mini)
        mini=fabs(thing[index]+mysum-hlf);
    recer(index+1,mysum+thing[index]);
    recer(index+1,mysum);
return ;
}

int main(){
int in;
int k;
double sum;
cin>>in;
mini=20*1000;
for(int j=0;j<in;j++){
cin>>k;
thing.push_back(k);
}
for(auto it=thing.begin();it!=thing.end();it++){
sum+=*it;
}
hlf=sum/2;
mini=hlf;
recer(0,0);
cout<<2*mini<<endl;

return 0;
}
