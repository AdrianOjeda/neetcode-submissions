class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0, right = heights.size()-1;

        int maxHeight = heights[0], maxHeightIndex = 0;

        for(int i = 0; i<heights.size(); i++){
            if(heights[i]> maxHeight){
                maxHeight = heights[i];
                maxHeightIndex = i;
            }
                 
        }
      

        int currentArea = 0, maxArea = -1;
        int leftIndex = 0,rightIndex = 0;
        cout<<"MaxHeight "<<maxHeight<<" index "<<maxHeightIndex<<endl;


        for(int i = maxHeightIndex-1; i>=0; i--){
            currentArea = heights[i] * (maxHeightIndex - i);
            cout<<"Current area "<<currentArea<<endl;
            if(currentArea > maxArea){
                maxArea = currentArea;
                leftIndex = i;
                
            }
        }    
        cout<<"Max left area "<<maxArea<<endl;
        int leftArea = maxArea;
        maxArea = 0;


        for(int i = maxHeightIndex+1; i < heights.size(); i++){
            currentArea = heights[i] * (i - maxHeightIndex);
            cout<<"Hola llegue"<<endl;
            cout<<"Current area "<<currentArea<<endl;
            if(currentArea > maxArea){
                maxArea = currentArea;
                rightIndex = i;
            }
        }

        maxArea = max(leftArea, maxArea);
        int minHeight = min(heights[leftIndex], heights[rightIndex]);
        cout<<"Min height "<<minHeight<<endl;
        cout<<"R I "<<rightIndex<<" L I "<<leftIndex<<endl;
        cout<<"This shi "<<(minHeight * (rightIndex - leftIndex))<<endl;
        maxArea= max((minHeight * (rightIndex - leftIndex)), maxArea);

        return maxArea;
    }
};