#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a b c value: "<<endl;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"same value are please enter another"<<endl;
       }else if(a>b && a>c){
        cout<<"a is greatter"<<endl;
    }else if(b>c){
        cout<<"b is greater"<<endl;
    }else{
        cout<<"c is greater"<<endl;
    }
    
    return 0;
}