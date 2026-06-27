#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<6;i++){
        for(int j=i;j<5;j++){
            cout<<"  ";
        }
        for(int h=1;h<=i;h++){
            cout<<"* ";
        }
        for(int j=i;j<5;j++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
}