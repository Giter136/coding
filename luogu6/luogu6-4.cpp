#include<iostream>
using namespace std;

long long factorial(long long a){
    if(a==1){
        return 1;
    }
    else{
        return factorial(a-1)*a;
    }
}

int main(){
    long long num;
    cin>>num;
    cout<<factorial(num);
    return 0;
}