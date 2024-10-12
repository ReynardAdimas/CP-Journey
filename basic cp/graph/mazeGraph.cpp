#include<bits/stdc++.h>
using namespace std; 

// shortest path maze

int N,M; 
string grid[100];
int dist[100][100];
int startX, startY, finishX, finishY;
queue<pair<int,int>> BFS;

bool between(int x, int l, int r)
{
    return l<= x && x <= r;
}


bool inside(int x, int y)
{
    return between(x, 0, N-1 ) && between(y, 0, M-1);
}



int dx[] = {-1,0,1,0}; 
int dy[] = {0, 1, 0 , -1};
// buat nyimpen arah node 
// (-1,0) kiri, (0,1) bawah, (1,0) kanan, (0,-1) bawah
int main()
{
    cin >> N >> M; 
    for(int i=0;i<N;i++) cin >> grid[i]; 
    cin >> startX >> startY >> finishX >> finishY; 
    memset(dist, -1, sizeof dist);
    dist[startX][startY] = 0;
    BFS.push({startX, startY}); 
    while(!BFS.empty())
    {
       auto cur = BFS.front(); 
       BFS.pop(); 
        for(int i=0;i<4;i++)
        {
            auto next = cur; 
            next.first += dx[i]; 
            next.second += dy[i];
            if(!inside(next.first, next.second)) continue; // handle dx,dy ada di grid
            if(grid[next.first][next.second] == '#') continue; // handle kalau ketemu tembok 
            if(dist[next.first][next.second] != -1) continue; // handle kalo sudah pernah dikunjungi
            dist[next.first][next.second] = dist[cur.first][cur.second]+1; 
            BFS.push(next);
        }
    }
    cout << dist[finishX][finishY] << endl;
} 

/*
5 5 
.#...
.#.#. 
.#.#. 
...#. 
...#. 
0 0 4 4 
*/