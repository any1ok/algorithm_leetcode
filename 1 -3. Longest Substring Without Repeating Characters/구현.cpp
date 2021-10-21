int lengthOfLongestSubstring(string s) {
	int chars[128];
	for (int i = 0; i < 128; i++) {
		chars[i] = 0;
	}

	int left = 0;
	int res = 0;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		chars[s[i]]++; // 나온 아스키 코드 값을 늘리다
		while (chars[s[i]] > 1) { //중복된값이 나오면
			chars[s[left]]--; // 중복한 값이 나올때까지 왼쪽부터 오른쪽으로 온다
			left++;
		}
		res = max(res, i - left + 1); // 현재 값중 큰값
	}
	return res;
}
