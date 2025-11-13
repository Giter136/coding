#include<iostream>
using namespace std;

int peach(int day){
    if(day>1){
        return 2*(peach(day-1)+1);
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<peach(n);
    return 0;
}