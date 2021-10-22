// 진짜 다 나눠서 풀었다 역대 쓰레기 코드가 아닐까
string longestPalindrome(string s) {
	int len = s.length();

	int res = 1;
	int i1 = -1;
	int i2 = 1;
	string str = "";
	for (int i = 0; i < len; i++) {
		int prev = i - 1;
		int next = i + 1;

		int length = 1;

		while (next < len && prev >= 0) { // 앞뒤 다검사함 cac 하면 length +2 됨
			if (s[next] != s[prev])
				break;
			next++;
			prev--;
			length += 2;
		}

		if (res < length) {
			i1 = prev;
			i2 = next;
			res = length;
		}
		prev = i - 1;
		next = i + 1;
		length = 1;
		if (next < len) {
			if (s[i] == s[next]) {// 만약 baab 와 같이 다음것도 같은경우 나눈거임
				length += 1;
				next++;

				while (next < len && prev >= 0) { // 그리고 똑같은짓 반복
					if (s[next] != s[prev])
						break;
					next++;
					prev--;
					length += 2;
				}
			}
		}
		if (res < length) {
			i1 = prev;
			i2 = next;
			res = length;
		}


	}
	i1++;
	i2--;
	for (; i1 <= i2; i1++) {
		str += s[i1];
	}
	return str;
}