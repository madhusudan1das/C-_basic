#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter two number: "<<endl;
    cin>>a>>b;
    if(b==0){
        cout<<"invalid denominator"<<endl;
    }
    else{
        c=a/b;
       cout<<c<<endl;
   }
   return 0;  
}


