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
    int i=0;
    cin >> n;
    while (n){
        if (n%10==4 || n%10==7){
            i++;
        }
        n/=10;
    }
    if(i==4 || i== 7){
        cout << "YES" << '\n';
        return 0;
    }
    cout << "NO" << '\n';
    return 0;
}


