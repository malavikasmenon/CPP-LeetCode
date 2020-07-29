// FInd the largest number of consecutive ones in an array
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int largecount=0;
        for(auto i=nums.begin();i<nums.end();++i){
            auto j=i;
            count = 0;
            while(j<nums.end()&&(*j==1)){
                count++;
                ++j;
            }
            i = j;
            if(count>largecount){
                largecount = count;
            }
        }
        return largecount;
   
    }
};

int main(){
    vector <int> nums;
    int n;
    while(cin>>n){
        //cin>>n;
        nums.push_back(n);
    }
    /*for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<' ';
    }*/
    Solution s1;
    cout<<s1.findMaxConsecutiveOnes(nums);
    return 0;
}