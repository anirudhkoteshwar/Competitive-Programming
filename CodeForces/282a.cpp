#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int o = 0;
	cin >> n;2
	string s;
	char p = '+';
	char m = '-';
	while(cin >> s){
		if (s.find(p) != string::npos){
			o++;
		}
		else if (s.find(m) != string::npos){
			o--;
		}
	}
	cout << o << '\n';
}