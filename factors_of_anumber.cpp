#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter n number: ";
    cin>>n;
    cout<<"factor is: "<<endl;
    for(i = 1;i <=n; i++){
        if(n%i==0){
            cout<<i<<endl;
           
        }
    }
    return 0;
}
