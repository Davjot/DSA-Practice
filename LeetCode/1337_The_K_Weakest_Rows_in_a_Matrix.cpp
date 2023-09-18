class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair <int, int>> rowstr;
        for(int i = 0; i < mat.size(); ++i){
            int str = accumulate(mat[i].begin(), mat[i].end(), 0);
            rowstr.push_back({str, i});
        }

        sort(rowstr.begin(), rowstr.end());

        vector <int> res;
        for(int i = 0; i < k; ++i){
            res.push_back(rowstr[i].second);
        }
        return res;
    }
};
