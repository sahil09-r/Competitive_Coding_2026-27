class Solution {
public:
    int computingSum(vector<int>& nums, int d) {
        long long sum=0;
        for (int num:nums){
            sum += (num+d-1)/d;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = INT_MAX;
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (computingSum(nums, mid) <= threshold) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
        
    }
};