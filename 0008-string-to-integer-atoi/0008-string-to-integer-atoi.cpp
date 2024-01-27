class Solution {
public:

int intii(int asc) {
    return (asc - '0');
}

int myAtoi(string s) {
    int c = 0;
    long long temp = 0;
    bool flag = false;

    while (c < s.length() && isspace(s[c])) {
        c++;
    }

    if (s[c] == '-' || s[c] == '+') {
        flag = (s[c] == '-');
        c++;
    }

    while (c < s.length() && isdigit(s[c])) {
        if (temp > (LLONG_MAX - intii(s[c])) / 10) {
            return (flag) ? INT_MIN : INT_MAX;
        }

        temp = temp * 10 + intii(s[c]);
        c++;
    }

    if (flag) {
        temp *= -1;
    }

    if (temp < INT_MIN) {
        return INT_MIN;
    } else if (temp > INT_MAX) {
        return INT_MAX;
    }

    return static_cast<int>(temp);
}

};