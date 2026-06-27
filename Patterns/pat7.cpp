#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=i;j<4;j++){
            cout<<"  ";
        }
        for(int h=1;h<=i;h++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
}