#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dx[] = {-1,1,0,0}; 
int dy[] = {0,0,-1,1};
queue<pair<int, int>> q;
void solution()
{
   int h, w;
   cin >> h >> w; 

   vector<string> grid(h); 
   ll hitam = 0; 
   for(int i=0;i<h;i++)
   {
    cin >> grid[i]; 
    for(int j=0;j<w;j++)
    {
        if(grid[i][j] == '#')
        {
            hitam++;
        }
    }
   }  

   for(int i=0;i<h;i++)
   {
    for(int j=0;j<w;j++)
    {
        if(grid[i][j] == '.')
        {
            int tetangga = 0; 
            for(int k=0;k<4;k++)
            {
                int ti = i + dx[k]; 
                int tj = j + dy[k]; 

                if (ti >= 0 and ti < h and tj >= 0 and tj < w and grid[ti][tj] == '#')
                {
                    tetangga++;
                }
            } 
            if(tetangga == 1) q.push({i,j});
        }
    }
   } 

   while(!q.empty())
   {
    int sz = q.size(); 
    set<pair<int, int>> next; 

    for(int i=0;i<sz;i++)
    {
        pair<int, int> cell = q.front(); 
        q.pop(); 
        int x = cell.first; 
        int y = cell.second; 

        if(grid[x][y] == '#') continue;

        grid[x][y] = '#'; 
        hitam++; 

        for(int k=0;k<4;k++)
        {
            int nx = x + dx[k]; 
            int ny = y + dy[k]; 
            if(nx >= 0 and nx < h and ny >= 0 and ny < w and grid[nx][ny] == '.')
            {
                next.insert({nx,ny});
            }
        }
    }
    for(auto& c : next)
    {
     int x = c.first; 
     int y = c.second; 
     
     int th = 0; 
     for(int k=0;k<4;k++)
     {
        int nx = x + dx[k]; 
        int ny = y + dy[k]; 
        if(nx >= 0 and nx < h and ny >= 0 and ny < w and grid[nx][ny] == '#')
        {
            th++;
        }
     } 
     if(th == 1)
     {
        q.push({x,y});
     }
    }
} 
cout << hitam << "\n";


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