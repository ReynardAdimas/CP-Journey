#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int pos=a[i];
		while(v.size() && v.back() == pos){
			pos++;
			v.pop_back();
		}
		v.push_back(pos);
	}
	cout<<v.size();
} 
