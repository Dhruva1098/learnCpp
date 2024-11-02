class Solution {
public:
    bool checkValidString(string s) {
        deque<int> first, second;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            char ch = s[i];
            if(ch == '*')
                second.push_back(i);
            else if(ch == '(')
                first.push_back(i);
            else
            {
                if(first.empty() and second.empty())
                    return false; 

                if(!first.empty())
                    first.pop_back();
                else
                    second.pop_front();
            }
        }
        while(!first.empty())
        {
            if(second.empty() or second.back() < first.back())
                return false; 
            second.pop_back(), first.pop_back();
        }
        return true;
    }
};
