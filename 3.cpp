#include <iostream>
#include <cstring>
using namespace std;

int max_polindrom(string str, int finish){
	int res = 0;
	int start = 0;
	while(start <= finish){
		if(str[start] == str[finish]){
			res = 1;
		}else{
			res = 0;
			break;
		}
	start++;
	finish--;
	}

	return res;
}
int repeat_symbol(string str){
	int repeat = 0;
	if ((max_polindrom(str, str.length()-1) == 1 && max_polindrom(str, str.length()-2) == 1) || str.length() == 1){
		repeat = 1;
	}

	return repeat;
}

int main(){
	string str;
	cin >> str;
	if(repeat_symbol(str) == 1){
		cout << -1;
	}else if(max_polindrom(str, str.length() - 1) == 0){
		cout << str.length();
	}else{
		cout << str.length() - 1;
	}
	return 0;
}