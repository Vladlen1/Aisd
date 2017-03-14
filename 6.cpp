#include <iostream>
#include <vector>
#include <iterator>

using namespace std; 


const long long inf = 1000000000000000000;
vector<vector<pair<int, long long> > > edges;
vector<long long> distance_arr;
vector<bool> use;
int n , m, a, b, c, x, y;

void dijkstra(int v){
    long long min_distance = 0;
    int cut = 0;
    pair <int, long long> data;
    for (int j = 0; j < n; j++){
        min_distance = inf;
        for(int i = 0; i < n; i++){
            if (min_distance > distance_arr[i] && use[i] == false){
                cut = i;
                min_distance = distance_arr[cut];
            }
    }
    use[cut] = true;
    int number_count = edges[cut].size();
    for (int i = 0; i < number_count; i++){
        data = edges[cut][i];
        if(distance_arr[data.first] > (distance_arr[cut] + data.second)){
            distance_arr[data.first] = distance_arr[cut] + data.second;
        }
    }
  }
}

int main(){  
    cin >> n >> m;
    vector<pair<int, long long> > g;
    for (int i = 0; i < n; i++){
        edges.push_back(g);
        distance_arr.push_back(inf); 
        use.push_back(false);
    }
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        edges[a - 1].push_back(pair<int, long long>(b - 1, c));
        edges[b - 1].push_back(pair<int, long long>(a - 1, c));

    }
    cin >> x >> y;
    distance_arr[x - 1] = 0;
    dijkstra(x - 1);
    cout << distance_arr[y - 1];
  return 0;
}