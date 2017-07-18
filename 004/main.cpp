#include <iostream>

using namespace std;

int reverse_number(int n);

int main(){
    int now = 0, low = 0;

    for (int i = 100; i <= 999; i++){
        for (int j = 100; j <= 999; j++){
            now = i * j;
            cout << " ";
            if (now == reverse_number(now) && now > low){
                low = now;
            }
        }
    }

    cout << "\n\n" << low;

    return 0;
}

int reverse_number(int n){
    int a;

    while (n > 0){
        a += n%10;
        a *= 10;
        n /= 10;
    }

    return a/10;
}
