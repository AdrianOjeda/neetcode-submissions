class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if(nums1.size() == 0){
            if(nums2.size()%2 ==0){
                int medianPos = (nums2.size()-1)/2;
                float median = (nums2[medianPos] + nums2[medianPos+1]);
                return median/2;
            }else{
                return nums2[(nums2.size()-1)/2];
            }

        }
        if(nums2.size() == 0){
            if(nums1.size()%2 ==0){
                int medianPos = (nums1.size()-1)/2;
                float median = (nums1[medianPos] + nums1[medianPos+1]);
                return median/2;
            }else{
                return nums1[(nums1.size()-1)/2];
            }

        }

        
        vector<int> mergedArray;

        int nums1Pointer = 0, nums2Pointer =0;

        for(int i =0; i< nums1.size()+nums2.size(); i++){
            if(nums1Pointer< nums1.size() and nums2Pointer<nums2.size()){
                if(nums1[nums1Pointer] <= nums2[nums2Pointer]){
                    mergedArray.push_back(nums1[nums1Pointer]);
                    nums1Pointer++;
                }else{
                    mergedArray.push_back(nums2[nums2Pointer]);
                    nums2Pointer++;
                }
            }else if(nums1Pointer < nums1.size() and nums2Pointer >= nums2.size()){
                mergedArray.push_back(nums1[nums1Pointer]);
                nums1Pointer++;

            }else{
                mergedArray.push_back(nums2[nums2Pointer]);
                nums2Pointer++;
            }
        }

        for(int i =0; i<mergedArray.size(); i++){
            cout<<mergedArray[i]<<" ";

        }
        if(mergedArray.size()%2 ==0){
            int medianPos = (mergedArray.size()-1)/2;
            float median = (mergedArray[medianPos] + mergedArray[medianPos+1]);
            cout<<"median "<<median/2<<endl;
            return median/2;
        }else{
            return mergedArray[(mergedArray.size()-1)/2];
        }

        return 0;
        
    }
};
