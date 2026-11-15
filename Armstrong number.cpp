#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=n;
    int digits=0, sum=0;
    while(temp>0){
        temp=temp/10;
        digits++;
    }
    cout<<digits<<endl;
    temp=n;
    while(temp>0){
        sum= sum+ pow((temp%10),digits);
        cout<<sum<<endl;
        temp=temp/10;
    }
    if(n==sum)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
