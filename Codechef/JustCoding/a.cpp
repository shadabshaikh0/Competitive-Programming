#include <iostream>

using namespace std;

int main() {
    int x = 16;
    x= x/2;
    int sum;
    for( sum = 1;x>0;x=x/2 ){
        sum++;
    }
    cout<<sum<<"\n";
}