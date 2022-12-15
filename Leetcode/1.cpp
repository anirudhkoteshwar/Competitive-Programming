#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vi li {};
        for (i=0;i<nums.size();i++){
            for (j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    return pi(i,j);
                    l.PB(i);
                    l.PB(j);
                    return l;
                }
            }
        }
        return l;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


}


