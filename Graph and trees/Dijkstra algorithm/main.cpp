#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> g[N];

void dijkstra(int source)
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);
    
    set<pair<int, int>> st;  // first = weight, second = node
    st.insert({0, source});
    dist[source] = 0;

    while(st.size() > 0){
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if(vis[v] == 1)
        continue;
        vis[v] = 1;
        for(auto child : g[v]){
            int child_v = child.first;
            int wt = child.second;
            if(dist[v] + wt < dist[child_v]){
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    for(auto it : dist){
        cout<<dist<<" "
    }
    cout<<nl;
}


int main()
{
    fast

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x, y, wt;
        cin>>x>>y>>wt;
        g[x].push_back({y, wt});
    }
    
}

// O(v + Elog(V))