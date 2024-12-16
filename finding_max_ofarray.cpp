#include<iostream>
int main(){
    int a[9]={4, 5, 3, 9, 4, 10, 4, 84, 8};
    int n=9,max=0;
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
       
    } 
    std::cout<<max<<std::endl;
    return 0;
}





/*


#include<iostream>
using namespace std;

int main() {
    int a[] = {4, 5, 3, 9, 4, 10, 4, 84, 8};
    int n = sizeof(a) / sizeof(a[0]);  // Calculate the number of elements in the array
    int max = a[0];  // Initialize max to the first element of the array

    for(int i = 1; i < n; i++) {  // Iterate from the second element to the last element
        if(a[i] > max) {
            max = a[i];
        }
    }

    cout << max << endl;  // Output the maximum value
    return 0;
}

*/