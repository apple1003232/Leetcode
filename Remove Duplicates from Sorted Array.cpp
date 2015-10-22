class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
        int cur = *it;
        vector<int>::iterator ite = it;
        ++ite;

        while (ite != nums.end()) {
            if (cur == *ite) {
                nums.erase(ite);
                ite = it+1;
                continue;
            }
            break;
        }
    }
    
    return (int)nums.size();


    }
};