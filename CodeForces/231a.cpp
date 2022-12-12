#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	int o {0};
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a >> b >> c;
		if (a+b+c>1){
			++o;
		}
	}
	cout << o << '\n';
}