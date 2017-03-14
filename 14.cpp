#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){

	string number;
	cin >> number;
		if (next_permutation(number.begin(),number.end())){
			cout << number << endl;
		} 
		else { 
			cout << -1 << endl;
		}
	return 0;
}