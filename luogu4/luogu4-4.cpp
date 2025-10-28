#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int *tree=new int[a+1]{0};
    int start,end;
    for(int i=0;i<b;i++){
        cin>>start>>end;
        for(int j=start;j<=end;j++){
            tree[j]=1;
        }
    }
    for(int i=0;i<=a;i++){
        if(tree[i]==0){
            cnt++;
        }
    }
    
    cout<<cnt;
    return 0;
}