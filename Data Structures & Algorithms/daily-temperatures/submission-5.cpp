class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        
        vector<int> result;



        for(int i =0; i < temperatures.size()-1; i++){
            int countDays = 1;
            int j = i+1;
            
            
            while(temperatures[j]<= temperatures[i] ){              
                j++;
                countDays++;
                if(j > temperatures.size()-1) countDays = 0;
                
            }
            
            
            result.push_back(countDays);

        }
        result.push_back(0);

        return result;

        
    }
};
