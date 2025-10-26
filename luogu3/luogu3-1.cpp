#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a){
        cin>>i;
    }
    int min=a.at(0);
    for(int j:a){
        if(j<min){
            min=j;
        }
    }
    cout<<min<<endl;
    return 0;
}