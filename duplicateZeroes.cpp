//Program to duplicate zeroes in an array
// Eg input [8,4,0,5] -> Output required : [8,4,0,0]

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     
        for(auto i=arr.begin();i<arr.end();i++){
            if(*i==0&&i!=arr.end()-1){
                for(auto j = arr.end()-1;j>i+1;j--){
                    *(j)=*(j-1);
                }
                *(i+1) = 0;
                i++;
                
                
                
            }
        }
        
        
    }
};