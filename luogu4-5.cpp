#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin>>n;
    vector<int> score(n);
    vector<vector<int>> arr(n,vector<int>(3,0));
    for(int i=0;i<n;i++){
        int sum=0;
        int j;
        for(j=0;j<3;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        score[i]=sum;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i][0]-arr[j][0])<=5&&abs(arr[i][1]-arr[j][1])<=5&&abs(arr[i][2]-arr[j][2])<=5&&abs(score[i]-score[j])<=10){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}