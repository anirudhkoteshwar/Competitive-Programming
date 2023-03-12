#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            x++;
        }
    }
    cout << x << '\n';
}


