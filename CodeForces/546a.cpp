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

    ll a,b,c,x;
    cin >> a >> b >> c;
    x = floor((c*(a+(a*c)))/2);
    if (b>=x){
        cout << 0;
        return 0;
    }
    cout << x-b;
    
}


