class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int s=candidates.size();
        int t_sets=1;
        int sum=0;
        set<vector<int>> st;
        vector<int> s_sets;
        for(int i=0;i<t_sets;i++){
            if(i<total){
                -----------------------------------------
            }

        }
        if(sum==target){
            sort(s_sets.begin(),s_sets.end());
            st.insert(s_sets);
        }
        sort(st.begin(),st.end());
        return st;

    }
};