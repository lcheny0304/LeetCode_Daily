/*
执行用时：8 ms, 在所有 C++ 提交中击败了95.30%的用户
内存消耗：10.2 MB, 在所有 C++ 提交中击败了7.41%的用户

思路：
排序双指针，先排序，再比较
如果相等就加入结果数组
其他方法：
1.空间换时间
2.
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};