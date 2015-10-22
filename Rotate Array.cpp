class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() < 2) {
        return;
    }
    while (k!=0) {
        vector<int> ::iterator it = nums.end();
        it--;
        nums.insert(nums.begin(),*it);
        nums.erase(nums.end()-1);
        k--;
    }

    }
};