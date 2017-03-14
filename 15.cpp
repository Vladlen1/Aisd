#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string str;
	cin >> str;
	int arr[1000001] = {0};
	int num;
	int check = 0;
	int l;
	int r;
	cin >> num;
	for (int i = 0; i < num ; i++){
		cin >> l >> r;
		if(r < l){
			int re = r;
			r = l;
			l = re; 
		}
		arr[r] +=1;
		arr[l-1] +=1;
	}
	for(int i = 0; i < str.length(); i++){
		check += arr[i];
		if (check % 2 != 0){
			if((str[i] <= 90)){
				str[i] = str[i] + 32;
			}else{
				str[i] = str[i] - 32;

			}
			} 

		}
		cout << str;
	return 0;
}