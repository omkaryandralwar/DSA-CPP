#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=i;j<4;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<2+j<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<1+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}