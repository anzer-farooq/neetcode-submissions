class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
        int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            //part 1 mn agr ho
            if(nums[mid]>nums[n-1]){
                if(nums[mid]<target){
                    low=mid+1; 
                }
                else{
                    if(nums[0]>target){
                        low=mid+1;//go right
                    }
                    else{
                        high=mid-1;//left
                    }
                }
            }
            //our guess is in part2
            else{
                if(nums[mid]>target){
                    high=mid-1;
                }
                else{
                    if(nums[n-1]>=target){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
            }
        }
        return -1;
    }
};
