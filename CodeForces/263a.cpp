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

    int x;
    int r=0;
    int c=0;
    while(cin >> x){
        if(x==1){
            break;
        }
        c++;
        if(c%5==0){
            r++;
            c=0;
        }
}
    cout << abs(3-(r+1)) + abs(3-(c+1)) << '\n';
}


