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

    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    if(s1>s2){
        cout << 1 << '\n';
    }
    if(s1<s2){
        cout << -1 << '\n';
    }
    if(s1==s2){
        cout << 0 << '\n';
    }

}


