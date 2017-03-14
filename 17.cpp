#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 6;
	int arr[n];

	for (int i = 0; i < n; i++) {
	cin >> arr[i];
	}

	if (abs(arr[2] - arr[4]) == abs(arr[3] - arr[5])){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}

	return 0;
}