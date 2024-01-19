#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;  cin >> n;
  vector<int>adj[n];

  for(int i = 0 ; i < n ; i++) {
    int a , b ; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  queue<int>q;
  q.push(0);
  vector<bool>vis;
  vector<int>bfs;
  while (!q.empty())  
  {
    int node = q.front();
    vis[node] = 1;
    q.pop();
    for(int i : adj[node]){
      if(!vis[i]){
        q.push(i);
      }
    }
  }
  

  
}