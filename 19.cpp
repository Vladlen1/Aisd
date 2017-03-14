#include <iostream>
using namespace std;

int main(){
    int n;
	cin >> n;
	int arr[n];
    int res1 = 1021;
    int res2 = 1031;
    int res3 = 1033;
    bool one = 0;
    bool two = 0;
    bool tri = 0;
    bool four = 0;
    bool five = 0;
    bool six = 0;
    bool seven = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        if (arr[i] == res1){
            one = 1;
        }
         if (arr[i] == res2){
            two = 1;
        }
         if (arr[i] == res3){
            tri = 1;
        }
        if (arr[i] == res1 * res2){
            four = 1;
        }
        if (arr[i] == res1 * res3){
            five = 1;
        }
        if(arr[i] == res3 * res2){
            six = 1;
        }
        if(arr[i] == res1 * res2 * res3){
            seven = 1;
        }
    }
       
        if( seven == 1 || (four == 1 && tri == 1) ||
                 (one == 1 && six == 1) || (five == 1 && two == 1) ||
                (one == 1 && two == 1 && tri ==1)){
                    cout << "YES"<< endl;
                }else{
                    cout << "NO"<< endl;
                }

        
    return 0;
}