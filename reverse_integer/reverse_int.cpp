class Solution {
public:
    int reverse(int x) {
        if (x < INT_MIN || x > INT_MAX) return 0;
        string s = to_string(x); // convert int to string
        std::reverse(s.begin(), s.end()); // reverse the string s
        long c = stol(s); // convert string to long type
        if (c > INT_MAX) return 0;
        return x < 0 ? (0-c) : c;
    }
};
