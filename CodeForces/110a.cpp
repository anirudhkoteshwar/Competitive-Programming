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

    int64_t n;
    int x;
    cin >> n;
    while(n){
        x = n%10;
//        cout << "x: " << x << '\n';
        if(x!=7 && x!=4){
            cout << "NO" << '\n';
            return 0;
        }
        n/=10;
//        cout << "n : " << n << '\n';
    }
    cout << "YES" << '\n';

}


