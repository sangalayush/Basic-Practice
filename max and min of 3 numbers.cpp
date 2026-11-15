#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int max,min;
    max=a;
    min=a;
    if(b>max)
        max=b;
    else if(b<min)
        min=b;
    if(c>max)
        max=c;
    else if(c<min)
        min=c;
    cout<<max<<" "<<min;
    return 0;
}
