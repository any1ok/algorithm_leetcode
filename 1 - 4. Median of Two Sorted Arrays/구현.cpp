double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	vector<int> temp;
	int i = 0;
	int j = 0;
	int num1_len = nums1.size();
	int num2_len = nums2.size();

	while (i < num1_len && j < num2_len) {
		if (nums1[i] < nums2[j]) {
			temp.push_back(nums1[i]);
			i++;
		}
		else {
			temp.push_back(nums2[j]);
			j++;
		}
	}
	while (i < num1_len) {
		temp.push_back(nums1[i]);
		i++;
	}
	while (j < num2_len) {
		temp.push_back(nums2[j]);
		j++;
	} // 요기까진 정렬된 두 배열을 정렬된 한배열로 묶었을 뿐


	int len = num1_len + num2_len;
	double res;
	if (len % 2)
		res = (double)temp[len / 2];
	else
		res = ((double)temp[len / 2] + (double)temp[len / 2 - 1]) / (double)2; // 그냥 중간값 뽑음?
	return res;
	// 이게왜 하드?
}