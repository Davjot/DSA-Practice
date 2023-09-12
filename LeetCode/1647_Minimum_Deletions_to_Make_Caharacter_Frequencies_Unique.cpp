class Solution {
public:
    int minDeletions(string s) {
        std::unordered_map <char, int> cnt;
        int deletions = 0;
        std::unordered_set <int> used_freq;

        for(char c : s){
            cnt[c]++;
        }

        for(auto &kv : cnt){
            int freq = kv.second;
            while(freq > 0 && used_freq.find(freq) != used_freq.end()){
                freq--;
                deletions++;
            }
            used_freq.insert(freq);
        }
        return deletions;
    }
};
