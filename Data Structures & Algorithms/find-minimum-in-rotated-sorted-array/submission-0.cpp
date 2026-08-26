class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int res=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[n-1]){//means wo part1 mn belong krta hai:- suppose array=3 4 5 6 1 2 so orginal would be 1 2 3 4 5 6, i.e part1=3 4 5 6 ko utha k aagay lga diya h means array rotated 4 times. and part2=1,2;
            low=mid+1;
            }
            else{
                res=min(res,nums[mid]);
                high=mid-1;
            }
        }
        return res;
    }
};
