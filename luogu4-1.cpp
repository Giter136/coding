#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[i]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
    return 0;
}