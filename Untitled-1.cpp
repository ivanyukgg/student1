#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    float x;
    x = sqrt(2);
    for (int i = 2; i <= n; i++)
    {
        x = sqrt(2+x);
    }
    cout<<x<<endl;
    cout<<x<< "I'm ready"<<endl;
}
