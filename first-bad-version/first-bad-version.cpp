// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        return Version_Helper(n, 1, n);
    }
    
    int Version_Helper(int n, int left, int right){
        
        int middle= (left/2) + (right/2);
        
        if(left == right){return right;}
        
        if(isBadVersion(middle)){
            return Version_Helper(n, left, middle);
        }
        else{
            return Version_Helper(n, middle +1, right);
        }
    }
    
};