#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum1=0,cnt1=0;
    int sum2=0,cnt2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum1+=i;
            cnt1++;
        }
        else{
            sum2+=i;
            cnt2++;
        }
    }
    cout<<fixed<<setprecision(1)<<sum1*1.0/cnt1<<" "<<sum2*1.0/cnt2<<endl;
    return 0;
}