class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
        unordered_map<int,int>mp;
        for(int i=0;i<len2;i++){
            mp[nums2[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<len1;i++){
            int x=mp[nums1[i]];
            bool flag=0;
            for(int j=x+1;j<len2;j++){
                if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(!flag)ans.push_back(-1);
        }
        return ans;
    }
};