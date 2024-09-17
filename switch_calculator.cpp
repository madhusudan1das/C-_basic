#include<iostream>
using namespace std;
int main(){
char operation;
float num1,num2,result;
cout<<"choose operator:(+,-,/,*): ";
cin>>operation;
cout<<"enter num1 and num2: "<<endl;
cin>>num1>>num2;
switch(operation){
    case '+':
     result=num1+num2;
    cout<<" "<<result<<endl;
     break;
     case '-':
     result=num1-num2;
    cout<<" "<<result<<endl;
     break;
     case '/':
     result=num1/num2;
     cout<<" "<<result<<endl;
     break;
     case '*':
     result=num1*num2;
     cout<<" "<<result<<endl;
     break;
     default:
     cout<<"invalid input";
     break; 
}


return 0;
}