class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int evenCount = 0;
        for(auto i = nums.begin();i<nums.end();i++){
            int n = *i;
            int d = 0;
            while(n){
                n = n/10;
                d++;
            }
            cout<<d<<'\n';
            if(d%2==0){
                evenCount++;
            }
        }
        return evenCount;
           
    }
};