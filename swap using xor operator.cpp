#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout<<"Before swap:\n"<<"a:"<<a<<" "<<"b:"<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swap\n"<<"a:"<<a<<" "<<"b:"<<b;
    return 0;
}
