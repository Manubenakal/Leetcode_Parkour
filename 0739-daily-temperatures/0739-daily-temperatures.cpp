class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size(),0);

        stack<int> stk;

        for(int i=0;i<t.size();i++){

            while( !stk.empty() && t[i] > t[stk.top()]){

                res[stk.top()] = i - stk.top();
                stk.pop();
            }

            stk.push(i);
        }

        return res;
    }
};