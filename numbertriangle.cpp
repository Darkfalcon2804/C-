//////Q.WAP to print the given pattern or number triangle??
#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter number of rows of triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;}
}