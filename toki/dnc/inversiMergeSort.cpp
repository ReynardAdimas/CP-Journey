#include<bits/stdc++.h>
using namespace std;

long long merge(vector<int> &data, int p, int q, int r)
{
    long long count = 0; 
    int kiri = q-p+1; 
    int kanan = r-q; 
    vector<int> l(kiri); 
    vector<int> ri(kanan); 
    for(int i=0;i<kiri;i++) l[i] = data[p+i]; 
    for(int i=0;i<kanan;i++) ri[i] = data[q+i+1]; 
    int i=0; 
    int j=0; 
    int k = p; 
    while(i<kiri && j<kanan)
    {
        if(l[i] <= ri[j]) 
        {
            data[k] = l[i]; 
            i++;
        } 
        else 
        {
            data[k] = ri[j]; 
            j++; 
            count += kiri-i;
        }
        k++;
    }
    while(i < kiri)
    {
        data[k] = l[i];
        i++;
        k++;
    }
    while(j < kanan)
    {
        data[k] = ri[j];
        j++;
        k++;
    }
    return count;
}

long long merge_sort(vector<int> &data, int p, int r)
{
    long long hasil = 0; 
    if( p >= r) return 0; 
    int q = (p+r)/2; 
    hasil+= merge_sort(data, p,q);
    hasil+= merge_sort(data,q+1,r); 
    hasil += merge(data, p, q, r); 
    return hasil;
}

void solution()
{
   int n; 
   cin >> n; 
   vector<int> a(n); 
   for(int i=0;i<n;i++) cin >> a[i]; 
   cout << merge_sort(a, 0, n-1) << endl;
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