    // LUOGU_RID: 158728044
    #include<iostream>
    using namespace std;
    int main(){
        int a[9],b[8];
        int asum=0; 
        int bsum=0;
        for(int i=0;i<9;i++)
        {
            cin >> a[i];
            asum+=a[i];
        } 
        for(int i=0;i<8;i++)
        {
            cin >> b[i];
            bsum+=b[i];
        }
        if(asum>bsum)
            cout<<asum-bsum+1;
        else if(asum<bsum)
            cout<<0;
        else
            cout<<1; 
    }