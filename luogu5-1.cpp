#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        int b=n;
        while(a[i]+b>'z'){
            b-=26;
        }
        a[i]+=b;
    }
    cout<<a;
    return 0;
    
}