#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    if(number%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
    return 0;
}