#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> i;
    i.push_back(a);
    while(a!=1){
        if(a%2==1){
            a=a*3+1;
            i.push_back(a);
        }
        else{
            a/=2;
            i.push_back(a);
        }
    }
    for(auto k=i.end()-1;k>=i.begin();k--){
        cout<<*k<<" ";
    }
    return 0;
}