#include <iostream>

using namespace std;

int n, m, u, v, l, a, b;


long long arr[101][101];
long answer_arr[101][101];
long long temp_arr[101][101];
const int my = 1000000007;

int reduction(long long number){
	number %= my;
	return number;
}

void arr_pow(int l) {
	if (l == 1) return;
	if (l % 2 == 0) {
		arr_pow(l/2); 
		for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
					temp_arr[i][j] = reduction(temp_arr[i][j] + reduction((long long)answer_arr[i][k] * (long long)answer_arr[k][j]));
                }
            }
		}
	} else {
		arr_pow(l-1);
		for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
					temp_arr[i][j] = reduction(temp_arr[i][j] + reduction((long long)answer_arr[i][k] * (long long)arr[k][j]));
                }
            }
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			answer_arr[i][j] = temp_arr[i][j];
			temp_arr[i][j] = 0;
		}
	}

}

int main() {
	cin >> n >> m;
	cin >> u >> v >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a - 1][b - 1] += 1;
		arr[b - 1][a - 1] += 1;
	}

	if (l == 0) {
		if (u == v) cout << 1; 
			else cout << 0;
	} else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				answer_arr[i][j] = arr[i][j];
			}
		}
		arr_pow(l);
		cout << answer_arr[u - 1][v - 1];
	}
	return 0;
}