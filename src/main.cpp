#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		ll a, b;
		cin >> a >> b;

		const auto& n = a / b;

		cout << n * n << '\n';
	}

	return 0;
}