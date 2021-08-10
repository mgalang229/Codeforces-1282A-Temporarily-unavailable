#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, r;
		cin >> a >> b >> c >> r;
		// start point of the network coverage area
		int L = max(min(a, b), c - r);
		// end point of the network coverage area
		int R = min(max(a, b), c + r);
		// the total distance is the difference of the path
		// length (max(a, b) - min(a, b)) and the network coverage 
		// area length (max(0, R - L))
		cout << (max(a, b) - min(a, b)) - (max(0, R - L)) << '\n';
	}
	return 0;
}
