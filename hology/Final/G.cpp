#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> vis(n+1, 0);
    vector<int> pukul(n+1, 0);

    for (int i = 0; i < n-1; i++)
    {
        if(vis[i]) continue;
        if(i == 0){
            if(s[i] == 'L' && s[n-1] == 'R'){
                vis[n-1] = 1;
                vis[i] = 1;
            }else if(s[i] == 'R' && s[i+1] == 'L'){
                vis[n-1] = 1;
                vis[i] = 1;
            }
        }
        else if(s[i] == 'R' && s[i+1] == 'L'){
            vis[i+1] = 1;
            vis[i] = 1;
        }
    }
    
    int ans = 0;
    char temp = 'A';
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(i == 0){
            if(!vis[i] && !vis[n-1]){
                if(s[i] == s[n-1]){
                    ans++;
                    vis[n-1] = 1;
                    vis[i] = 1;
                }
            }
        }else if(!vis[i] && !vis[i+1]){
            if(s[i] == s[i+1]){
                if(temp == 'A'){
                    temp = s[i];
                    cnt++;
                }
                cnt++;
            }else{
                ans += ((cnt-1)/2);
                cnt = 0;
                temp = 'A';
            }
        }else{
                ans += ((cnt-1)/2);;
                cnt = 0;
                temp = 'A';
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
    // t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}