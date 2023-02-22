#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;
	auto ans = int{ 0 };
	for (const auto& x : s) {
		++ans;
		if (':' == x) {
			++ans;
		}

		if ('_' == x) {
			ans += 5;
		}
	}

	cout << ans;

	return 0;
}