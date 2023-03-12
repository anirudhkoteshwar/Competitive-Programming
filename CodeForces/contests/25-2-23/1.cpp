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
    
    int n;
    cin >> n;
    while(n--){
   
        int l;
        cin >> l;
        vi k;
        for (int i = 0; i<l;i++){
            int j;
            cin >> j;
            k.PB(j);
        }
        int res = k[0];
        for(int i=1;i<sizeof(k);i++){
            res = __gcd(res,k[i]);
        }
        if (res > sizeof(k)){
            cout << "No" << '\n';
            continue;
        }
        else{
            cout << "Yes" << '\n';
        }

    }
}


