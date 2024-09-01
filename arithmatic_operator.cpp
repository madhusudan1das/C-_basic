#include<iostream>
using namespace std;

int main(){
int num1,num2;
   

    cout<<"enter the num1: ";
    cin>>num1;
    cout<<"enter the num2: ";
    cin>>num2; 
    float add=(float)num1+num2;
    float subt=(float)num1-num2;
    float multi=(float)num1*num2;
    float divi=(double)num1/num2;
    float modu=num1%num2;
    cout<<" addition: "<<add<<endl;
    cout<<" subtraction: "<<subt <<endl;
    cout<<" multiplication : "<<multi<<endl;
    cout<<" division: "<<divi <<endl;
    cout<<" modulo: "<<modu <<endl;
    return 0;


}