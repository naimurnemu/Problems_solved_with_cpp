#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool vis[10005];   
 
    void DFSUtil(int node, vector<int> adj[], vector<int> &result) {
        vis[node] = true;          
        result.push_back(node);      
        
        for(int child : adj[node]) {  
            if(!vis[child]) {       
                DFSUtil(child, adj, result);   
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> result;   
        fill(vis, vis + V, false);  

         
        for(int i = 0; i < V; i++) {  
            if(!vis[i]) {            
                DFSUtil(i, adj, result);   
            }
        }
        return result;   
    }
};