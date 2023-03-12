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
    
    int n,a=0,d=0;
    string s;
    cin >> n >> s;
    while(n--){
        if(s[n] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }
    if (a>d){
        cout << "Anton\n";
    } 
    else if (d>a) {
        cout << "Danik\n";
    }
    else{
        cout << "Friendship\n";
    }
}


