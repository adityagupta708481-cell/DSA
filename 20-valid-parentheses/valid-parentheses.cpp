class Solution {
public:
    bool isValid(string s) {
        stack<char> info;
        for (auto a : s) {
            if (a == '(' || a == '[' || a == '{')
                info.push(a);
            else {
                if (info.empty())
                    return false;
                char top = info.top();
                info.pop();
                if (a == ')' && top != '(')
                    return false;
                if (a == ']' && top != '[')
                    return false;
                if (a == '}' && top != '{')
                    return false;
            }
        }
        return info.empty();
    }
};