string convert(string s, int numRows) {
    vector<string> v1;
    v1.resize(numRows);
    int len = s.length();
    bool flag = true;
    int j = 0;
    string res = "";
    if (numRows == 1) {// �϶� �� ���
        return s;
    }

    for (int i = 0; i < len; i++) { /// �׳� ��¥ ������׷� �ٳ���
        if (flag) {
            v1[j].push_back(s[i]); 
            j++;
            if (j == numRows - 1)
                flag = false;
        }
        else {
            v1[j].push_back(s[i]);
            j--;
            if (j == 0) {
                flag = true;
            }
        }
    }
    for (int i = 0; i < numRows; i++) { // ���ļ� ���
        res += v1[i];
    }
    return res;

}