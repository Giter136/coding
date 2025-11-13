#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void free(vector<vector<int>> *a,int x,int y,int n)
{   

    if(n==1){
        (*a)[x][y]=0;
        return ;
    }
    else{
        n--;
        for(int i=x;i<x+(int)pow(2,n);i++){
            for(int j=y;j<y+(int)pow(2,n);j++){
                (*a)[i][j]=0;
            }
        }
        free(a,x+(int)pow(2,n),y,n);
        free(a,x,y+(int)pow(2,n),n);
        free(a,x+(int)pow(2,n),y+(int)pow(2,n),n);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int haha=n;
    vector<vector<int>> slave((int)pow(2,n),vector<int>((int)pow(2,n),1));
    free(&slave,0,0,n);
    for(int i=0;i<(int)pow(2,haha);i++){
        for(int j=0;j<(int)pow(2,haha);j++){
            cout<<slave[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}