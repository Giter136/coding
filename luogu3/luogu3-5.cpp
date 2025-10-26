#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int a=i;
        while(a>0){
            if(a%10==x){
                cnt++;
            }
            a/=10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}