
vector<int> twoSum(vector<int>& nums, int target) {
	int len = nums.size();
	vector<int> res;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (target == nums[i] + nums[j]) {
				res.push_back(i);
				res.push_back(j);
				return res; // �ٵ��鼭 �˻��ϴٰ� ���ϴٰ� target �� ���� �����ϸ� ��ġ�� i j  �ְ� ����
			}
		}
	} 
	return res;
}