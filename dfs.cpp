#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>a[] ,vector<bool>&vis , int i ){
  vis[i] = true;
  for(int j : a[i]){
    if(!vis[j]){
      dfs(a , vis , j);
    }
  }
}
int main(){
  int n ; cin >> n;
  vector<int>a[n];
  for(int i = 0 ; i < n ; i++){
    int x , y ; cin >> x >> y ;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  vector<bool>vis(n + 1 , 0);
  dfs(a , vis , 0);
}