#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 10;

vector<int> prime;
bool isPrime[N];

void sieve() {
    fill(isPrime, isPrime + N, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i < N; i++) {
        if (isPrime[i])
            prime.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << 1LL * prime[i] * prime[i + 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}