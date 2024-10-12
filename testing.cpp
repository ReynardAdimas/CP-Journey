#include<iostream>
using namespace std; 

int main()
{
    int n, cntIrham=0, cntLevi=1; 
    cin >> n; 
    for(int i=0;i<n;i++)
    {
        cout << "Dimas" << endl;
        if(i>2)
        {
            cout << "Irham" << endl;
            cntIrham++; 
            if(cntIrham%2==0)
            {
                cout << "Levi" << endl;
                cntLevi*=2;
            }
            else if(cntLevi!=1)
            {
                cout << "Auladi" << endl;
            }
        } 

    }
}