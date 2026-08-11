class Solution {
public:
    int trap(vector<int>& height) {

        if(height.empty()) return 0;

        vector<int> maxLeft, maxRight, resultVector;
        int result = 0;
        int currentMaxLeft = 0, currentMaxRight = 0;

        for(int i =0 ; i<height.size(); i++){
            if (i==0) maxLeft.push_back(0);
            
            else{
                int left = *max_element(height.begin(), height.begin()+i);
                maxLeft.push_back(left);
                cout<<"maxLeft "<<left<<endl;
            }
            
        }

        for(int i = 0; i<height.size(); i++){
            if(i ==height.size()-1) maxRight.push_back(0);
            else{
                int right = *max_element(height.begin()+1+i, height.end() );
                maxRight.push_back(right);
                cout<<"maxRight "<<right<<endl;
            }
            
        }

        for(int i =0; i< height.size(); i++){
            int water = min(maxLeft[i], maxRight[i]) - height[i];
            cout<<min(maxLeft[i], maxRight[i])<<" ";
            if(water>0) resultVector.push_back(water);
        }
        cout<<endl;
        for(int element: resultVector){
            result +=element;
        }
        
        return result;
    }
};
