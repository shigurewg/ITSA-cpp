#include<iostream>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
if(a!=0)
    if(b==0)
        cout<<"x-axis"<<endl;
    else
        if(a>0)
            if(b>0)
                cout<<"1st Quadrant"<<endl;
            else
                cout<<"4th Quadrant"<<endl;
        else
            if(b>0)
                cout<<"2nd Quadrant"<<endl;
            else
                cout<<"3rd Quadrant"<<endl;
else
{
    if (b==0)
        cout<<"Origin"<<endl;
    else
        cout<<"y-axis"<<endl;
}

return 0;
}