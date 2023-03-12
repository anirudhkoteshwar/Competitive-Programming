#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

void subt(int& a){
    if(a%10==0){
        a=static_cast<int>(a/10);
    }
    else{
        a-=1;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

   int n,k;
   cin >> n >> k;

   while(k--){
        subt(n);
   }
   cout << n << '\n';
}


