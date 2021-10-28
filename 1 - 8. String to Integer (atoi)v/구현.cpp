int myAtoi(string s) {
    long long i = 0, sign = 1, n = 0;
    if (s.length() == 0) {
        return 0;
    }
    while (isspace(s[i])) { // 공백넘김
        ++i;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') { // 음양 보기
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') { // 숫자아님 다넘어감
        n = n * 10 + (s[i++] - '0');
        if (n > 3147483648)
            break;
    }
    long long res = sign * n;
    if (res < -2147483648) // 최댓값 제끼기
        res = -2147483648;
    if (res > 2147483647)
        res = 2147483647;
    return res;
}