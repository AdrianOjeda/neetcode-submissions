class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long total = 0;
        
        
        int right = *max_element(piles.begin(), piles.end());
        
        int left = 1;
        int res = right;

        while(left<=right){
            int mid = (right + left) /2;
            long long total = 0;
            for(auto pile : piles){
                total +=ceil(static_cast<double>(pile) / mid);
            }
            if (total <= h) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return res;

    }
};


