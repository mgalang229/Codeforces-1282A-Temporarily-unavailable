#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, c, r;
		cin >> a >> b >> c >> r;
		if (a > b) {
			// if 'a' is greater than 'b', then swap them
			swap(a, b);
		}
		// find the point to the left of the origin
		long long left_extension = c - r;
		// find the point to the right of the origin
		long long right_extension = c + r;
		long long start_a = 0;
		// check if point 'a' is already within the network coverage area
		if (a >= left_extension && a <= right_extension) {
			// if yes, then do nothing
		} else {
			// otherwise, find the distance of 'a' and the nearest point of network coverage area
			start_a = min(abs(a - left_extension), abs(a - right_extension));
		}
		long long start_b = 0;
		// check if point 'b' is already within the network coverage area
		if (b >= left_extension && b <= right_extension) {
			// if yes, then do nothing
		} else {
			// otherwise, find the distance of 'b' and the nearest point of network coverage area
			start_b = min(abs(b - left_extension), abs(b - right_extension));
		}
		// check if the 'c' is within the range of ['a', 'b']
		// if yes, then the minimum value will come from the first argument
		// otherwise, from the second argument
		cout << min(start_a + start_b, b - a) << '\n';
	}
	return 0;
}
