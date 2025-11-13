#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3;
    double c;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    c=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2))+sqrt(pow(abs(x1-x3),2)+pow(abs(y1-y3),2))+sqrt(pow(abs(x3-x2),2)+pow(abs(y3-y2),2));
    cout<<fixed<<setprecision(2)<<c;
    return 0;
}