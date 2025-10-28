#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    vector<int> a;
    cin>>i;
    a.push_back(i);
    while(a.back()!=0){
        cin>>i;
        a.push_back(i);
    }
    for(auto k=a.end()-2;k>=a.begin();k--){
        cout<<*k<<" ";
    }
    return 0;
}