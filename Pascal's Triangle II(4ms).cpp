class Solution {
public:
    vector<int> getRow(int rowIndex) {
            vector<vector<int>> res;
    vector<int> ele;
    ele.push_back(1);
    res.push_back(ele);
    if(rowIndex == 0) return ele;
    
    vector<int> ele2;
    ele2.push_back(1);
    ele2.push_back(1);
    res.push_back(ele2);
    if (rowIndex == 1) return ele2;
    
    
    while (res.size() != rowIndex+1) {
        vector<int> temp = *(res.end()-1);
        vector<int> nele;
        nele.push_back(1);
        for (vector<int>::iterator it = temp.begin(); it != temp.end(); ++it) {
            int n1 = *it;
            ++it;
            if(it == temp.end())
                break;
            int n2 = *it;
            nele.push_back(n1+n2);
            --it;
        }
        nele.push_back(1);
        res.push_back(nele);
    }
    
    
    return *(res.end()-1);

    }
};