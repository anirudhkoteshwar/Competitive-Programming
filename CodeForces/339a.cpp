#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair


bool myCmp(string s1, string s2) {
if (s1.size() == s2.size()) {
return s1 < s2;
}
else {
return s1.size() < s2.size();
}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,t,d="+";
    vector<string> l {};
    getline(cin,s);
    stringstream x(s);
    while(getline(x,t,'+')){
        l.PB(t);
    }
    
    sort(l.begin(),l.end(),myCmp);

    for(size_t i=0;i<l.size()-1;i++){
        cout << l[i] << "+";
    }

    cout << l.back() << '\n';

}


