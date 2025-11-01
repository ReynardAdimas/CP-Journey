#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,-1,1}; 
int dy[4] = {-1, -1, 1, 1};

void solution()
{
   int a,b; 
   cin >> a >> b; 
   int kingXpos, kingYpos, queenXpos, queenYpos; 
   cin >>  kingXpos >> kingYpos; 
   cin >> queenXpos >> queenYpos; 

   set<pair<int, int>> kenaKing, kenaRatu; 
   
   for(int i=0;i<4;i++)
   {
    kenaKing.insert({kingXpos + dx[i] * a, kingYpos + dy[i] * b}); 
    kenaKing.insert({kingXpos + dx[i] * b, kingYpos + dy[i] * a}); 

    kenaRatu.insert({queenXpos + dx[i] * a, queenYpos + dy[i] * b}); 
    kenaRatu.insert({queenXpos + dx[i] * b, queenYpos + dy[i] * a});
   }
   int ans =0; 
   for(auto x:kenaKing)
   {
    if(kenaRatu.find(x) != kenaRatu.end())
    {
        ans++;
    }
   } 
   cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}