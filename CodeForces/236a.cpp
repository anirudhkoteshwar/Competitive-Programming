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

    string s;
    set<char> l;
    cin >> s;
    for(auto i : s){
        l.insert(i);
    }
    if(l.size()%2){
        cout << "IGNORE HIM!" << '\n';
        return 0;
    }
    cout << "CHAT WITH HER!" << '\n';
    return 0;
    
}


