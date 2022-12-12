#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	cin >> a >> b;
	int lena = a.size();
	int lenb = b.size();
	string c = a+b;
	char d = b[0];
	b[0] = a[0];
	a[0] = d;
	cout << lena << " " << lenb << '\n' << c << '\n' << a << " " << b << endl;
	return 0;
}
