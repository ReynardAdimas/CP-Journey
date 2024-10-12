#include<bits/stdc++.h>
using namespace std; 

int n;
int total = 0; 
int terbesar = 0, terkecil = 0; 
int hitung = 0, cnt = 0; 
bool sama = true;
int jumlah;

int main()
{
    cin >> n; 
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin >> v[i]; 
        total+=v[i];
    }
    jumlah = total/n; 
    for(int i=0;i<n;i++)
    {
        if(v[i]!=jumlah)
        {
            sama = false; 
            break;
        }
    } 
    if(sama)
    {
        cout << "SESUAI" << endl;
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(v[i]>jumlah)
            {
                terbesar = v[i]; 
                hitung = i+1;
            }
            if(v[i]<jumlah)
            {
                terkecil = v[i]; 
                cnt = i+1;
            }
        } 
        int selisih = terbesar-terkecil; 
        int hasil = terbesar - jumlah; 
        if(selisih / 2 + terkecil == jumlah)
        {
            cout << hasil << " " << hitung << " " << cnt << endl;
        } 
        else 
        {
            cout << "TIDAK SESUAI" << endl;
        }
    }
}