class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()){
            if(*it == val)
                {nums.erase(it);
                    it = nums.begin()+count;
                    continue;
                }
                count++;
                ++it;
        }
        return nums.size();
    }
    
};