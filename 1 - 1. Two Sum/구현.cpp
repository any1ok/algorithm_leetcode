
vector<int> twoSum(vector<int>& nums, int target) {
	int len = nums.size();
	vector<int> res;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (target == nums[i] + nums[j]) {
				res.push_back(i);
				res.push_back(j);
				return res; // 다돌면서 검사하다가 더하다가 target 과 값이 동일하면 위치값 i j  넣고 리턴
			}
		}
	} 
	return res;
}