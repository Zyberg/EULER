#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 100;
    long long a = pow(n*(n+1)/2, 2) - n*(n+1)*(2*n + 1)/6;

    cout << a;

    return 0;
}
