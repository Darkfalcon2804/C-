//////small alphabet soid square?? if we print j+96 we get abcde\nabcde and we print i+96 we get aaaaa\nbbbbbb
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<<(char)(i+96);
        }
        cout<<endl;
    }
}