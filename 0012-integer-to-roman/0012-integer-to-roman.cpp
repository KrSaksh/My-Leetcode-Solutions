class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        int m = num / 1000;
        if (m)
            num %= (m * 1000);
        cout << "m = " << m << endl;

        int c = num / 100;
        if (c)
            num %= (c * 100);
        cout << "c = " << c << endl;

        int x = num / 10;
        if (x)
            num %= (x * 10);
        cout << "x = " << x << endl;

        int i = num;
        cout << "i = " << i << endl;

        // Case M
        while (m--) {
            ans += "M";
        }

        // Case C
        if (c <= 3) {
            while (c--) {
                ans += "C";
            }
        }
        if (c == 4) {
            ans += "CD";
        }
        if (c == 5) {
            ans += "D";
        }
        if (c > 5 && c < 9) {
            ans += "D";
            while (c > 5 && c < 9) {
                ans += "C";
                c--;
            }
        }
        if (c == 9) {
            ans += "CM";
        }

        // Case X
        if (x <= 3) {
            while (x--) {
                ans += "X";
            }
        }
        if (x == 4) {
            ans += "XL";
        }
        if (x == 5) {
            ans += "L";
        }
        if (x > 5 && x < 9) {
            ans += "L";
            while (x > 5 && x < 9) {
                ans += "X";
                x--;
            }
        }
        if (x == 9) {
            ans += "XC";
        }

        // Case I
        if (i <= 3) {
            while (i--) {
                ans += "I";
            }
        }
        if (i == 4) {
            ans += "IV";
        }
        if (i == 5) {
            ans += "V";
        }
        if (i > 5 && i < 9) {
            ans += "V";
            while (i > 5 && i < 9) {
                ans += "I";
                i--;
            }
        }
        if (i == 9) {
            ans += "IX";
        }
        return ans;
    }
};