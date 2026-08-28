class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        int row=-1;
        while(low<=high){
            int guessedRow=(low+high)/2;
            if(matrix[guessedRow][0]<=target){
                row=guessedRow;
                low=guessedRow+1;
            }
            else{
                high=guessedRow-1;
            }
        }
        if(row == -1){
            return false;
        }
        int l=0;
        int h=matrix[0].size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
    return false;
    }
};
