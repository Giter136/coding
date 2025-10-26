#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int line=n;
    int putout=1; 
    for(int a=0;a<n;a++){
        for(int i=0;i<line;i++){
            if(putout<10){
                cout<<"0";
            }
            cout<<putout;
            putout++;
        }
        cout<<endl;
        line--;
    }
    

}