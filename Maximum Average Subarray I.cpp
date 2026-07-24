class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double sum=0;
      int n=nums.size();
      for (int i=0;i<k;i++){
      sum+=nums[i];
      }
      double MaxSum=sum;
      for (int i=k;i<n;i++){
        sum+=nums[i]-nums[i-k];
        MaxSum=max(MaxSum,sum);
      }  
      return MaxSum/k;
          }
};
