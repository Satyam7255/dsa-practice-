#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
    }   
    return 1;
}
int main() {
    for(int i=2;i<30;i++){
         if (isPrime(i)){
            cout<<i<<" is prime"<<endl;
         }
         else{
            cout<<i<<" is not prime"<<endl;
         }   
    }
}
