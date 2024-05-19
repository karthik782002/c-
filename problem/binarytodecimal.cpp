#include<iostream>
#include <math.h>

using namespace std;
int binTodec(int n){
    int decimal=0;
    int i =0;
    while(n){
        int bit = n&1;
        decimal = bit*pow(2, i++)+decimal;
        n=n/10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    int dec = binTodec(n);
    cout<<dec;
}