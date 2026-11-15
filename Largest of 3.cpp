#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    int n2;
    cin>>n2;
    int n3;
    cin>>n3;
    if(n1>n2 && n1>n3)
        cout<<"Largest:"<<n1;
    else if(n2>n1 && n2>n3)
        cout<<"Largest:"<<n2;
    else
        cout<<"Largest:"<<n3;
    return 0;
}
