#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long arr[n];
	long long res;

	for (long long i = 0; i < n; i++) {
	cin >> arr[i];
	}

	sort (arr, arr + n);
	if ((arr[0]*arr[1]) > (arr[n-2]*arr[n-1])){
		res = arr[0] * arr[1];
		cout << res <<endl;
	} else{
		res = arr[n-2] * arr[n-1];
		cout << res <<endl;
	}

	return 0;
}