/*
执行用时：4 ms, 在所有 C++ 提交中击败了78.72%的用户
内存消耗：9.2 MB, 在所有 C++ 提交中击败了6.06%的用户

思路：
两个指针分别指向两个vector容器，以此对比就行了，如果2的比1的小就插到1里去。
唯一让我不明白的是为啥提前给nums1预留了空间啊，我插入完返回之后就有0啊崩溃
只好一开始先把后面的0都给删了Orz
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());
        int i=0,j=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
                m++;
            }
        }
        while(j<n){
            nums1.push_back(nums2[j++]);
        }
    }
};