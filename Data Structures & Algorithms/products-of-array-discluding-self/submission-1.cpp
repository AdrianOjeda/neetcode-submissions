class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result, prefix;
        vector<int> postfix(nums.size(), 1);

        int prefixProduct =1, postfixProduct = 1;

        for(int i =0; i<nums.size(); i++){
            prefixProduct *= nums[i];
            prefix.push_back(prefixProduct);

        }
        for(int i = nums.size()-1; i>=0; i--){
            postfixProduct *= nums[i];
            postfix[i]= postfixProduct;
        }
        
         

        for(int i =0; i<nums.size(); i++){
            if(i==0){
                result.push_back(postfix[i+1]);
            }else if(i==nums.size()-1){
                result.push_back(prefix[i-1]);
            }else{

                result.push_back(prefix[i-1]* postfix[i+1]);
            }
            
        }

        return result;

    }
};
