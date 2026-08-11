class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0, right = heights.size()-1;
        int maxArea = 0;

       for(int i = 0; i< heights.size(); i++){
            for(int j= 0; j<heights.size(); j++){
                if(i != j){
                    int area = abs(i - j)* min(heights[i], heights[j]);
                    maxArea = max(maxArea, area);
                }
            }
       }
        return maxArea;
    }
};