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
    int x=0;
    cin >> s;
    for(size_t i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            x++;
        }
    }
    if(x<=floor(s.size()/2)){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout << s << '\n';
        return 0;
    }
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s << '\n';

}


