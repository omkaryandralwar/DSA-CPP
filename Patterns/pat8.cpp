#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=i;j<4;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        for(int l=1;l<i;l++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int a=1;a<5;a++){
        for(int b=1;b<a;b++){
            cout<<"  ";
        }
        for(int c=a;c<5;c++){
            cout<<"* ";
        }
        for(int d=a;d<4;d++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}