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

    int a,b,o=0;
    cin >> a >> b;
    for(int i=1;i<100;i++){
        if(pow(3,i)*a > pow(2,i)*b){
            o=i;
            break;
        }
    }
    cout << o << '\n';
}


