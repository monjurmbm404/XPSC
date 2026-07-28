// https://marisaoj.com/problem/419

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (max(a, c) <= min(b, d))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}