#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int k=i;k<4;k++){
            cout<<"  ";
        }
        for(int l=i;l<4;l++){
            cout<<"  ";
        }
        for(int m=1;m<=i;m++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int a=1;a<5;a++){
        for(int b=a;b<5;b++){
            cout<<"* ";
        }
        for(int c=1;c<a;c++){
            cout<<"  ";
        }
        for(int d=1;d<a;d++){
            cout<<"  ";
        }
        for(int e=a;e<5;e++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}