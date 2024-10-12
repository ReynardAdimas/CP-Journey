#include<bits/stdc++.h>
using namespace std; 
map<string, string> tabel1; 
map<string, string> tabel2;
int main()
{
    tabel1["AB"] = "AA";
    tabel1["DC"] = "AB"; 
    tabel1["CC"] = "AC"; 
    tabel1["CB"] = "AD"; 
    tabel1["CA"] = "BA"; 
    tabel1["DA"] = "BB"; 
    tabel1["CD"] = "BC"; 
    tabel1["DD"] = "BD"; 
    tabel1["BC"] = "CA"; 
    tabel1["AA"] = "CB"; 
    tabel1["BA"] = "CC"; 
    tabel1["DB"] = "CD"; 
    tabel1["BD"] = "DA"; 
    tabel1["AD"] = "DB"; 
    tabel1["BB"] = "DC"; 
    tabel1["AC"] = "DD";

    tabel2["CD"] = "AA";
    tabel2["BB"] = "AB"; 
    tabel2["AC"] = "AC"; 
    tabel2["CC"] = "AD"; 
    tabel2["CB"] = "BA"; 
    tabel2["DB"] = "BB";
    tabel2["AD"] = "BC"; 
    tabel2["DD"] = "BD"; 
    tabel2["DA"] = "CA"; 
    tabel2["DD"] = "CB";
    tabel2["BC"] = "CC";
    tabel2["BD"] = "CD";
    tabel2["AA"] = "DA";
    tabel2["BA"] = "DB";
    tabel2["CA"] = "DC";
    tabel2["AB"] = "DD";

    string s,hasil=""; 
    cin >> s; 
    for(int i=0;i<s.length();i+=2)
    {
        string r; 
        r = s.substr(i,2); 
        for(const auto& pair : tabel2)
        {
            if(pair.first == r)
            {
                r = pair.second;
                break;
            }
        }
        for(const auto& pair : tabel1)
        {
            if(pair.first==r)
            {
                r=pair.second;
                break;
            }
        }
        hasil+=r;
    }
    cout << hasil << endl;
}