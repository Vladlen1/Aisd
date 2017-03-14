#include <iostream>
using namespace std;

int main(){
	long long number;

	cin >> number;
	if (number % 10 == 0 || number < 10){
		cout << "NO" << endl;
	}else{
		cout << number %10 << endl;
	}
	return 0;
}