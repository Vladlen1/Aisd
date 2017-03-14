#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b; 
int components = 0; 
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

void find(){
  for (int i = 0; i < n; i++){
    color[i] = false;
  }
  for (int i = 0; i < n; i ++){
    if(!color[i]){
    
      dfs(i);
      components +=1;
    }
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
   find();

    cout << components -1 << endl;
    
    return 0;
}