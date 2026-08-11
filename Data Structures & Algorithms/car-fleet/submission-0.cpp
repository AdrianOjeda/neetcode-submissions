class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<double, double>> positionSpeed(position.size());

        for(int i =0; i<positionSpeed.size(); i++){
            positionSpeed[i] = {position[i], speed[i]};
        }

        sort(positionSpeed.begin(), positionSpeed.end(),[](const pair<double, double>& a, const pair<double, double>& b) {
            return b.first < a.first;
        });

        
        
        vector<double> etas(positionSpeed.size());
       
        int fleets = 0;
        for( int i = 0; i<positionSpeed.size(); i++){
            
            etas[i] = (target - positionSpeed[i].first)/positionSpeed[i].second;
            if (i == 0 || etas[i] > etas[i-1]) {
                fleets++;
            } else {
                etas[i] = etas[i-1];  
            }


        }
        return fleets;


        
    }
};
