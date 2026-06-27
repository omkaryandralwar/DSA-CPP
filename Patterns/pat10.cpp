#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        if(i%2 == 0 || i == 0){
            for(int j=0;j<=i;j++){
                if(j%2 == 0 || j == 0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
        }
        else{
             for(int j=0;j<=i;j++){
                if(j%2 == 0 || j == 0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<'\n';
    } 
    return 0;
}