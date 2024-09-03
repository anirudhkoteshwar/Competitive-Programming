class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for(int i : nums){
            if(u.count(i)){
                return true;
            }
            else {
                u.insert(i);
            }
        }
        return false;
    }
};
