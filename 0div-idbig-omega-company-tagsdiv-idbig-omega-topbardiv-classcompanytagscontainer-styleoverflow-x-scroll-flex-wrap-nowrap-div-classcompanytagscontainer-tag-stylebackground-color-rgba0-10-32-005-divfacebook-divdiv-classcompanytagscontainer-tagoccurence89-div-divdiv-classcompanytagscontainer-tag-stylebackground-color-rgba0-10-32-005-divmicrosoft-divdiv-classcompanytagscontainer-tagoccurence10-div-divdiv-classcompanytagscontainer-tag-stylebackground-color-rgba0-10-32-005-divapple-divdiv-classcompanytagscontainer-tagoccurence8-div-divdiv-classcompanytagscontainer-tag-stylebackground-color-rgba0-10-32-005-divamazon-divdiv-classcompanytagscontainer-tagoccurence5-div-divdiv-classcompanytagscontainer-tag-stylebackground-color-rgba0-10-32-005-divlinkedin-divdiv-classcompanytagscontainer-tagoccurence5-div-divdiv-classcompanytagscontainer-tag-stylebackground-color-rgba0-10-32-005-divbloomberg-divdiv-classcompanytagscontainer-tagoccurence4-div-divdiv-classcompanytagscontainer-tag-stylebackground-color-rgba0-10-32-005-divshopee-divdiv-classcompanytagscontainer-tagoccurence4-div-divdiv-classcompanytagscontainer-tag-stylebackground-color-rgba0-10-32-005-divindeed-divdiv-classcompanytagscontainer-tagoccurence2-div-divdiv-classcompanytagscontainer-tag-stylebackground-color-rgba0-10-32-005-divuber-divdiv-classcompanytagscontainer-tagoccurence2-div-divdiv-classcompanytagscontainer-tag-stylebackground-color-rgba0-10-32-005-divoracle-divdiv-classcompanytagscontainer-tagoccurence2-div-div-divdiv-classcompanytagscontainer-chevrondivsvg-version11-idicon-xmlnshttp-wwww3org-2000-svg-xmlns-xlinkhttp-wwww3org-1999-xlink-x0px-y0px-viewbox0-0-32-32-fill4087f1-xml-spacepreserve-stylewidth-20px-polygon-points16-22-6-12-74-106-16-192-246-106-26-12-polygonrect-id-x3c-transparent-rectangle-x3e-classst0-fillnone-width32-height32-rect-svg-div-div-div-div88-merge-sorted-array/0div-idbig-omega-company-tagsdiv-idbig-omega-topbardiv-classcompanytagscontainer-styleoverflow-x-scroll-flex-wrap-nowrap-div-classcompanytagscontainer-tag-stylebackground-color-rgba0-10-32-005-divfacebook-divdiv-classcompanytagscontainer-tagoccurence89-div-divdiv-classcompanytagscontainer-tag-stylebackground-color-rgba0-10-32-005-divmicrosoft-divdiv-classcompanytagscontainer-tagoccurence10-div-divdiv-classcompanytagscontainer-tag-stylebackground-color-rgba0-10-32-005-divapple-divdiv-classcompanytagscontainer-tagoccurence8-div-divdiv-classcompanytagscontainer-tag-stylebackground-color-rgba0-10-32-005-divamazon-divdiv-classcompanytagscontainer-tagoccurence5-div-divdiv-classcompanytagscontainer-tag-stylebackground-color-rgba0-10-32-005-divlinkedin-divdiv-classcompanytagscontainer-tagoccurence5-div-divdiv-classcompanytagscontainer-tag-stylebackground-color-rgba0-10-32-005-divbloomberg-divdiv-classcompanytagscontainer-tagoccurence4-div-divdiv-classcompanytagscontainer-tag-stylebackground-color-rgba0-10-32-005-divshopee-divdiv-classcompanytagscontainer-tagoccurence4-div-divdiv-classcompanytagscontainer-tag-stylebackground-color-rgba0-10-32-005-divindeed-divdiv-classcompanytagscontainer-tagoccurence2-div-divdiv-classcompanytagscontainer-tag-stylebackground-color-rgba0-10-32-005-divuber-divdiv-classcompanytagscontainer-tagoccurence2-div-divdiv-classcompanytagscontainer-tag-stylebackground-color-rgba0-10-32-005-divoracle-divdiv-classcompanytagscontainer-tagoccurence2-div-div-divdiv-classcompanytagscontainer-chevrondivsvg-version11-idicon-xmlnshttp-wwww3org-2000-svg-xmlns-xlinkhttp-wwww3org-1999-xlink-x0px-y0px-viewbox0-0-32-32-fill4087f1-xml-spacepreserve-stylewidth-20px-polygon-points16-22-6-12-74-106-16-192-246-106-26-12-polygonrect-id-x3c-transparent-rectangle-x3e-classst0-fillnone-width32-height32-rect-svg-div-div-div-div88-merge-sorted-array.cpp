class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=m+n-1;
        m--;
        n--;
        while(m>=0 & n>=0){
            if(nums1[m]>=nums2[n]){
                nums1[idx]=nums1[m];
                idx--;
                m--;
            }
            else{
                nums1[idx]=nums2[n];
                n--;
                idx--;
            }
        }
        while(n>=0){
            nums1[idx]=nums2[n];
            n--;
            idx--;
        }
        while(m>=0){
            nums1[idx]=nums1[m];
            m--;
            idx--;
        }
    }
};