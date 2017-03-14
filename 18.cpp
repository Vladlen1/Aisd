#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b; 
int check = 0; 
vector<int> *arr; 
vector<bool> color; 
    
void dfs(int v) { 
    if (color[v]) { 
        return;
    }
    color[v] = true; 
    for (int i = 0; i < arr[v].size(); i++) {
        int w = arr[v][i];
        dfs(w); 
    }
}   

int main()
{
   cin >> n >> m;
   arr = new vector<int>[n];
   for(int i = 0; i < m; i++){
   		cin >> a >> b;
   		a--;
   		b--;
   		arr[a].push_back(b);
   		arr[b].push_back(a);
   }
   color.assign(n,false);
   dfs(0);
   for(int i = 0; i <n; i++){
   	cout << color[i];
   	if(color[i]==1){
   		check +=1;
   	}
   }
   if(check == n){
   	cout<<m - (n - 1) << endl;
   }else{
   	cout << -1 << endl;
   }

    return 0;
}