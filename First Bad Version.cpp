// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0;
        int mid = n/2;
        int e = n;
        while(e-s !=0){
            if(!isBadVersion(mid)){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = (e-s)/2+s;
        }
        return s;
        
        
    }
};