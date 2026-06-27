#include<iostream>
using namespace std;

int main(){
    int n, fact;
    fact = 1 ;
    cout << "Enter the no. = " ;
    cin >> n ;
    for(int i=n;i>1;i--){
        fact *= i;
    }
    cout<<"Factorial of " << n << " is " << fact ;
    return 0;
}
