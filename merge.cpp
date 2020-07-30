class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector <int> bro ;
            int i = 0;
            int j = 0;
            while(i<m&&j<n){
                
                if(nums1[i]<=nums2[j]){
                    bro.push_back(nums1[i]);
                    i++;
                }
                else{
                    bro.push_back(nums2[j]);
                    j++;
                }
            }
            while(i<m){
                bro.push_back(nums1[i]);
                i++;
            }
              while(j<n){
                bro.push_back(nums2[j]);
                j++;
            }
        
           for(int g = 0;g<m+n;g++){
               nums1[g] = bro[g];
           }
        }
    
};