#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		long long res = x + 2 * y;
		string ans = "NO";
		/*
			to be able to divide it equally:
			
			let res = x + 2 * y
			
			case 1:
				x should be greater than 0 and res is even
			explanation: 
				if x = 0 and res = 3, then the the total value would be even
				since 0 + 2 * 3 = 6, but we cannot divide the y coins to two people
			
			case 2:
				res and y should be even (either x is > 0 or res is odd in case 1)
			explanation:
				(1)as stated in the problem statement the total value should divided
					equally to two people so naturally, res should be even
				(2)for y, it should be even as well so we can divide it into two
				
				(1) case 2.1: x is greater than 0 and res is odd
						let x = 1, y = 10
						res = x + 2 * y = 1 + 2 * 10 = 1 + 20 = 21
						since res is odd, therefore it is not possible to divide
				
				(2) case 2.2: x is equal to 0 and res is even
						let x = 0, y = 3
						res = x + 2 * y = 0 + 2 * 3 = 6
						since y is odd, there it is not possible to divide
		*/
		if (x > 0 && res % 2 == 0) {
			ans = "YES";
		} else if (res % 2 == 0 && y % 2 == 0) {
			ans = "YES";
		}
		cout << ans << '\n';
	}
	return 0;
}
