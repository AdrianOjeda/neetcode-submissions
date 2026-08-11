class Solution {
public:
    int trap(vector<int>& height) {

        if(height.empty()) return 0;

        vector<int> maxLeft, maxRight, resultVector;
        int result = 0;
        

        int currentMaxLeft = 0;
        for(int i =0 ; i<height.size(); i++){
            if (i==0) maxLeft.push_back(0);
            
            else{
                currentMaxLeft = max(currentMaxLeft, height[i-1]); 
                maxLeft.push_back(currentMaxLeft);
                
            }
            
        }

        int currentMaxRight = 0;
        for(int i = height.size() - 1; i >= 0; i--){
            if(i ==height.size()-1) maxRight.push_back(0);
            else{
                currentMaxRight = max(currentMaxRight, height[i+1]);
                maxRight.push_back(currentMaxRight);
                
            }
            
        }
        reverse(maxRight.begin(), maxRight.end());

        for(int i =0; i< height.size(); i++){
            int water = min(maxLeft[i], maxRight[i]) - height[i];
            
            if(water>0) resultVector.push_back(water);
        }
        cout<<endl;
        for(int element: resultVector){
            result +=element;
        }
        
        return result;
    }
};
