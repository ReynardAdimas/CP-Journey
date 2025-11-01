 #include<bits/stdc++.h>
 using namespace std;
 
 void solution()
 {
    int n, pos=1;
    double ans = DBL_MAX; 
    cin >> n; 
    for(int i=1;i<=n;i++)
    {
        int v,d; 
        cin >> v >> d;
        double t = (double)d/v; 
        if(ans > t)
        {
            ans = t;
            pos = i;
        }
    } 
    cout << pos << "\n";
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