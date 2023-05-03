class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int ,int > mp1,mp2;
        vector<vector<int>> v(2);
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        for(auto x:mp1){
            if(!mp2[x.first]){
                v[0].push_back(x.first);
            }
        }
        for(auto x:mp2){
            if(!mp1[x.first]){
                v[1].push_back(x.first);
            }
        }
        return v;
    }
};

Algorithm behind this is using 
  using two hashmap and checking the first map no to second no if it is not in the second map then push into the vector frist index.in similar way for second map.
