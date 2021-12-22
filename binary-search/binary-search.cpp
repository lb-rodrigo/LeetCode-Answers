class Solution {
public:
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums, target, 0, nums.size()-1);
    }
    
    int BinarySearch(vector<int>& nums, int target, int left, int right){
        if(left > right){
            return -1;
        }
        int middle = (left+right)/2;
        
        if(nums.at(middle) == target){
            return middle;
        }
        else if(nums.at(middle) > target){
            return BinarySearch(nums, target, left, middle - 1);
        }
        else if(nums.at(middle) < target){
            return BinarySearch(nums, target, middle +1, right);
        }
        else{
            return -1;
        }
    }
};