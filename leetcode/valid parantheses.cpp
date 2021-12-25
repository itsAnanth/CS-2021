class Solution {
    public:
    bool isValid(string str) {
        std::stack<char> s;
        for (const char& c : str) {
            switch(c) {
                case '(': s.push(')'); break;
                case '{': s.push('}'); break;
                case '[': s.push(']'); break;
                default:
                    if(s.size() == 0 || c != s.top()) return false;
                    else s.pop();
            }
        }
        return s.size() == 0;
    }
};