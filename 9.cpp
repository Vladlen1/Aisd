#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long arr[n];
	long long res = 0;
	long long max = 0;
	for (long long i = 0; i < n; i++) {
	cin >> arr[i];
	if (arr[i] > max){
		max = arr[i];
	}
	}
	for (long long i = 0; i < n - 1; i++){
		
		if (arr[i] > arr[i+1]){
			res += arr[i] - arr[i + 1]; 
		}
	}
	res = res + (max - arr[0]);	
	cout << res << endl;
}