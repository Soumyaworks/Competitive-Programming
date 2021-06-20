#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	cin >> q;
	for (; q > 0; q--) {
		long long n, x, t;
		cin >> n >> x >> t;
		long long a = min(t / x, n - 1);
		cout << a * n - a * (a + 1)/2 << '\n';
	}
}