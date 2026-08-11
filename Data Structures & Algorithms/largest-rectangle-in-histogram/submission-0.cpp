class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        for(int i =0; i<heights.size(); i++){
            int left = i-1;
            int right = i+1;
            int count = 0;

            while(left>=0 and heights[left] >= heights[i]){
                count++;
                left--;
            }
            while(right < heights.size() and heights[right]>= heights[i]){
                count++;
                right++;
            }
            count++;
            cout<<"height "<<heights[i]<<" area "<<heights[i]*count<<endl;
            maxArea = max(maxArea, heights[i]*count);
        }

        return maxArea;
        
    }
};
