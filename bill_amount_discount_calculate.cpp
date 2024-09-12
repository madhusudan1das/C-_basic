#include<bits/stdc++.h>
using namespace std;
int main(){
    float billamount;
    float discount=0.0;
    cout<<"enter billAmount: ";
    cin>>billamount;
    if(billamount>=500)
        discount=billamount*20/100;
    else if(billamount>=100 && billamount<500)
        discount=billamount*10/100;
        cout<<"Bill Amount is:"<<billamount<<endl;
        cout<<"Discount is :"<<discount<<endl;
        cout<<"Discounted Amount is:"<<billamount-discount<<endl;
return 0;

}
