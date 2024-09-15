#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1724, remainder;
    while(n>0){
        remainder = n%10;
        n=n/10;
        cout<<remainder;
    }
    
}