#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,count=0;
    cout<<"enter n number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime "<<endl;
    }
    return 0;
}
