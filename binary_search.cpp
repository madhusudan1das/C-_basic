#include<iostream>
#include<algorithm> // for sort
using namespace std;

int main(){
    int a[10]={2,4,6,9,10,30,12,50,34,19};
    sort(a, a+10); // sort the array

    int l=0,h=9,key,mid;
    cout<<"enter key: ";
    cin>>key;

    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){ // compare using ==
            cout<<"found at "<<mid;
            return 0;
        }else if(key<a[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<"not found";
    return 0;
}