class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     int n=nums.size();
     unordered_map<int,int>counts;
     for (int i=0;i<n;i++){
        counts[nums[i]]++;
     }   
     for (int i=0;i<n;i++){
        if (counts[nums[i]]++>1){
            return nums[i];
        }
     }
     return {};
    }
};
