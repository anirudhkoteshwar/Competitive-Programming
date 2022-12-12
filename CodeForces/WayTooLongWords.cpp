#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string x;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> x;
		if (x.length() > 10){
			cout << x[0];
			cout << x.length()-2;
			cout << x[x.length()-1] << '\n';
		}
		else{
			cout << x << '\n';
		}
	}
}