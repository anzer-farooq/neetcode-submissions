class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    int findhours(vector<int>& piles, int guess){
        int h=0;
        for(int i=0;i<piles.size();i++){
            h=h+(piles[i]/guess);
            if(piles[i]%guess!=0){
                h++;
            }
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmax(piles);
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int hours=findhours(piles,mid);
            if(hours>h){
                low=mid+1;
            }
            else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};
