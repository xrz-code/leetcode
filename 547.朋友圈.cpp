/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 朋友�?
 */
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int ans = 0;
        if(M.size() == 0)
            return ans;
        int n = M.size();
        vector<bool> vis(n, false);
        for(int i = 0; i < n; ++ i){
            if(!vis[i]){
                dfs(i, n, vis, M);
                ++ ans;
            }
        }
        return ans;
    }
private:
    void dfs(int u, int n, vector<bool> &vis, vector<vector<int>>& M){
        vis[u] = 1;
        for(int i = 0; i < n; ++ i){
            if(M[u][i] == 1 && !vis[i]){
                dfs(i, n, vis, M);
            }
        }
    }
};
    
