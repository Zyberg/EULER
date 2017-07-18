#include <iostream>

using namespace std;

typedef long long int ll;

int gcd(int a, int b){
    if (b==0)
        return a;
    return gcd(b, a%b);
}

ll lcm(int arr[], int n){
    ll ans = arr[0];

    for (int i=1; i<n; i++)
        ans = arr[i]*ans/gcd(arr[i], ans);

    return ans;
}

int main(){
    int A[20], n = 20;

    for (int i = 0; i < n; i++){
        A[i] = i+1;
    }

    cout << lcm(A, n);
    return 0;
}
