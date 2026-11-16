#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int res=1;
    while(b>0){
        res= a*res;
        b--;
    }
    cout<<res;
    return 0;
}
