class Solution {
public:
    
    static bool comp( pair<string, int> a,  pair<string, int> b) {
             return a.second > b.second || a.second==b.second && a.first<b.first;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp1;
        vector<string> tk; 
        vector<pair<string,int>> v1;
        for(auto x: words){
            mp1[x]++;
        }
        for(auto j:mp1){
                 v1.push_back({j.first, j.second});

        }
        
        sort(v1.begin(), v1.end(), comp);
        for(int i=0; i<k; i++){
            tk.push_back(v1[i].first);
        }
        
        return tk;
        
    }
};
