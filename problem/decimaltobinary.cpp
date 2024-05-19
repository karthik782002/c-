#include<iostream>
#include<math.h>
using namespace std;
int decToBin(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = (n % 2);
        binaryno=bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
}
int main(){
    int n;
    cin>>n;
    int binary = decToBin(n);
    cout<<binary;
}