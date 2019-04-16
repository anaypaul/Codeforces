#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
void addEdge(vector<int> adj[], int src, int dest){
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void printGraph(vector<int> adj[], int V){
    for(int i =1;i<V+1;i++){
        cout<<i<<"->";
        for(int j = 0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"->";
        }
        cout<<"null"<<endl;
    }
}
int bfs(vector<int> adj[], int V, int start, vector<int> hasCat, int m){
    int answer = 0;
    vector<int> visited(V+1, false);
    queue<pair<int, int> > q;
    q.push(make_pair(1, hasCat[start]));
    while(!q.empty()){
        int ss = q.size();
        while(ss--){
            pair<int,int> p = q.front();
            q.pop();
            visited[p.first] = true;
            if(p.second > m){
                continue;
            }
            bool isLeaf = true;
            for(int j = 0;j<adj[p.first].size();j++){
                int node = adj[p.first][j];
                if(visited[node] == true){
                    continue;
                }
                if(visited[node] == false){
                    if(hasCat[node]){
                        q.push(make_pair(node, p.second + 1));
                    }else{
                        q.push(make_pair(node, 0));
                    }
                    isLeaf = false;
                }
            }
            if(isLeaf){
                answer++;
            }
        }
    }
    return answer;

}
int main(){
    int vertices;
    int maxCats;
    cin>>vertices>>maxCats;
    vector<int> hasCat(vertices+1, 0);
    for(int i = 1;i<=vertices;i++){
        int x;
        cin>>x;
        if(x==1){
            hasCat[i] = 1;
        }
    }    
    vector<int> *adj = new vector<int>[vertices+1];
    for(int i = 0;i<vertices-1;i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj, x, y);
    }
    int ans = bfs(adj, vertices, 1, hasCat, maxCats);
    cout<<ans<<endl;
    return 0;
}