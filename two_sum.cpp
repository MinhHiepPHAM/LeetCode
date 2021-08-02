class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			vector<int> a; // array of the indices of two numbers such that they add up to target
			bool found = true;
			for(int i = 0; i < nums.size() && found; i++) {
				int second = target - nums[i];
				for (int j = i+1; j < nums.size(); j++) {
					if(second == nums[j]) {
						a.push_back(i);
						a.push_back(j);
						found = 0;
						break;
					}
				}
			}
			return a;
		}
};
