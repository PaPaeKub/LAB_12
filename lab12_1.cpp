#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci(int n);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    long long int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
