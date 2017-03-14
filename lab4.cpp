#include <iostream>
#include <vector>
using namespace std;

vector <long long> arr;
long long inv = 0;

void merge(vector<long long> &arr, long long left, long long center, long long right){
    vector <long long> mas(right - left + 1);
    long long position_1 = left;
    long long position_2 = center + 1;
    long long position_mas = 0;

    while(position_1 <= center && position_2 <= right){
        if (arr[position_1] <= arr[position_2]){
            mas[position_mas++] = arr[position_1++]; 
        }else{
            mas[position_mas++] = arr[position_2++];
            inv += center - position_1 + 1;
        }
    } 
    while (position_1 <= center){
        mas[position_mas++] = arr[position_1++];
    }
    while (position_2 <= right){
        mas[position_mas++] = arr[position_2++];
    }
    copy(mas.begin(), mas.end(), arr.begin() + left);
}
void merge_sort(vector<long long> &arr, long long left, long long right){
    if(left == right){
        return ;
    }
    long long center = (left + right) / 2;
    merge_sort(arr, left, center);
    merge_sort(arr, center + 1, right);
    merge(arr, left, center, right);
} 



int main(){
    long long n;
    cin >> n;
    arr.resize(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout << inv << endl;

    return 0;
}