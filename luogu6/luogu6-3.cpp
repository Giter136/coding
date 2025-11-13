#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int cnt=0;
    vector<int> year;
    for (int i=x;i<=y;i++){
        if(i%100==0){
            if(i%400==0){
                year.push_back(i);
                cnt++;
            }
        }
        else{
            if(i%4==0){
                year.push_back(i);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    for(auto a:year){
        cout<<a<<" ";
    }
    return 0;
}