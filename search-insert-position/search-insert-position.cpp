class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int left = -1;
        int right = nums.size();
        
        while(right - left > 1){
            
            int middle = (right + left)/2;
            
            if(nums.at(middle) ==  target){
                return middle;
            }
            else if(nums.at(middle) < target){
                left = middle;
            }
            else{
                right =  middle;
            }
            
        }
        
        return right;
        
        
    }
    
};