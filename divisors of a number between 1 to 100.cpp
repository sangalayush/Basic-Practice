#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=2;i<100;i++){
        if(i>n)
            break;
        else if(n%i==0)
            cout<<i<<endl;
    }
    return 0;
}
