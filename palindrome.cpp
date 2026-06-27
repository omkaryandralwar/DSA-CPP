#include<iostream>
using namespace std;

int rev_no(int n){
    int rev_no = 0;
    while(n>0){
        int last_dig = n%10;
        rev_no = rev_no*10 + last_dig ;
        n=n/10;
    }
    return rev_no;
}

bool ISpalindrome(int n){
    int m=rev_no(n);
    return m == n;
}

int main(){
    int a;
    cout<<"ENTER THE NUMBER = ";
    cin>>a;
    cout<<ISpalindrome(a);
    return 0;
}