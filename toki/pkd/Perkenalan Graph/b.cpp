#include<bits/stdc++.h>
using namespace std; 

int c,r; 
vector<string> grid; 
vector<vector<bool>> visited; 
int dx[] = {1,-1,0,0}; // bawah atas kanan kiri 
int dy[] = {0,0,1,-1};

// flood fill
int dfs(int x, int y)
{
    if(x<0 || y<0 || x>=r || y>=c) return 0;
    if(visited[x][y]) return 0; 
    visited[x][y] = true;
    if(grid[x][y] == '#') return 0; 
    int area = 1; 
    for(int i=0;i<4;i++)
    {
        area += dfs(x+dx[i], y+dy[i]);
    }
    return area;
}
void solution()
{
   cin >> c >> r; 
   grid.resize(r); 
   pair<int, int> posK, posB; 
   for(int i=0;i<r;i++)
   {
    cin >> grid[i]; 
    for(int j=0;j<c;j++)
    {
        if(grid[i][j] == 'B') posB = {i,j}; // x,y
        else if(grid[i][j] == 'K') posK = {i,j};
    }
   } 

   visited.assign(r, vector<bool>(c,false));
   int areaB = dfs(posB.first, posB.second);

   visited.assign(r, vector<bool>(c, false)); 
   int areaK = dfs(posK.first, posK.second); 

   if(areaB > areaK)
   {
    cout << "B " << areaB-areaK << endl;
   }
   else if(areaK > areaB)
   {
    cout << "K " << areaK - areaB << endl;
   }
   else 
   {
    cout << "SERI" << endl;
   }
}   


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}