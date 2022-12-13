#include <bits/stdc++.h>
using namespace std;
/*
int main(){
	int n,k,x,y;
	cin >> n >> k;
	for (int i=0;i<k;i++){
		cin >> x;
		if (x==0){
			cout << 0 << '\n';
			exit(0);
		}
	}
	while(cin >> y){
		if(y==x and y!=0){
			k++;q
		}
	}
	cout << k << '\n';

}
*/
int main(){
	int n,k,x,y;
	cin >> n >> k;
	int o = k;
	for(int i{0};i<k;++i){
		cin >> x;
		if (x==0){
			cout << i << '\n';
			exit(0);
		}
	}
	while(cin >> y){
		if (y==x){
			o++;
		}
	}
	cout << o << '\n';
}