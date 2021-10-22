int lengthOfLongestSubstring(string s) {
	int chars[128];
	for (int i = 0; i < 128; i++) {
		chars[i] = 0;
	}

	int left = 0;
	int res = 0;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		chars[s[i]]++; // ���� �ƽ�Ű �ڵ� ���� �ø���
		while (chars[s[i]] > 1) { //�ߺ��Ȱ��� ������
			chars[s[left]]--; // �ߺ��� ���� ���ö����� ���ʺ��� ���������� �´�
			left++;
		}
		res = max(res, i - left + 1); // ���� ���� ū��
	}
	return res;
}
