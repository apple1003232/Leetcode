class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();
        digits[n-1] += 1;
        vector<int>::iterator it = digits.end();
        it --;
        while(it != digits.begin() && (*it)==10){
            (*it) = 0;
            it --;
            (*it) += 1;
        }
        it = digits.begin();
        if ((*it)==10){
            (*it) = 0;
            digits.insert(it,1);
        }
       
       
        
        return digits;
    }
};