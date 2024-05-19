#include <iostream>
using namespace std;
void count(){
    for(int i=0;i<100;i++){
        cout<<i;
    }
}
int SI(int p,int t,int r){
    int sim=(p*t*r)/100;
  return sim;
}
int prime(){
    for(int i=0;i<100;i++){
       if(i%2 != 0){
        cout<<i;
       }  
    }
    return 0;
}
int vote(int age){
    if(age>18){
        cout<<"elgibel to vote";
    }
    else{
 cout<<"not elgible to vote";
    }
    return 0;
}
int main(){
//count();
//   int ans= SI(10,20,12);
//   cout<<ans;
//prime();
//
 //vote(22);


}