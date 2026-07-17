class Solution {
   public:
    int secondLargestElement(vector<int>& nums) {
        if (nums.size() < 2) {
            return -1;
        }
        int largest = nums[0];
        int slargest = INT_MIN;
        bool found = false;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                slargest = largest;
                largest = nums[i];
                found = true;
            } else if (nums[i] > slargest && nums[i] < largest) {
                slargest = nums[i];
                found = true;
            }
        }
        if (found == false) {
            return -1;
        } else {
            return slargest;
        }
    };
};