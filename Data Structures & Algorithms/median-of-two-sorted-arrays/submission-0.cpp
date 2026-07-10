class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> merged;
        int i=0;
        int j =0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }else{
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n){
            merged.push_back(nums1[i]);
            i++;
        }

        while(j<m){
            merged.push_back(nums2[j]);
            j++;
        }
        

        int n1 = merged.size();
        if(n1 % 2 == 1){
            return merged[n1/2];
        }else{
            return(merged[n1/2-1]+merged[n1/2])/2.0;
        }
        
    }
};
