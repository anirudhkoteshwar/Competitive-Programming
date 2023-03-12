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

    double n;
    cin >> n;
    cout << ceil(n/5) << '\n';
}

/*
Solution:
It's optimal to do the biggest possible step everytime. So elephant should do several steps by distance 5 and one or zero step by smaller distance. Answer equals to ceiling(x/5)

    #include <iostream>
     
    using namespace std;
     
    int main() {
        int x;
        cin >> x;
        cout << (x + 4) / 5 << '\n';
    }
*/
