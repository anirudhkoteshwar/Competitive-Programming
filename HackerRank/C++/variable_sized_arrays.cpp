#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; //number of arrays that will be given
	int q; //number of queries
	cin >> n >> q; // take input
	int** l = new int*[n]; // l is array of pointers pointing to array of integers
	for (int i=0;i<n;i++){ 
		int k; 
		cin >> k; //number of elements in each array
		l[i]= new int[k]; //create sub arrays with those many elements

		for (int j=0;j<k;++j){
			cin >> l[i][j]; //set values of elements in those arrays
		}		
	}
	while (q-- > 0){ 
		int oi;
		int ii;
		cin >> oi >> ii; //take queries
		cout << l[oi][ii] << endl; //give output
	}
	return 0;
} 
