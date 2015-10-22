class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
            vector<string> r;
    
    vector<int>::iterator it =nums.begin();
    int f,b,n;
    while(it != nums.end()){
        
        
        f = *it;
        do{
            b = *it;
            ++it;
            if(it == nums.end())
                break;
            n = *it;
        }while(b == n-1);
        string s;
        if(f != b)
            s = std::to_string(f)+"->"+std::to_string(b);
        else
            s = std::to_string(f);
        r.push_back(s);
        
    }
    return r;

        
    }
};