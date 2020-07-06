class Solution {
public:
    struct input{
        int data;
        int location;
    };
    vector<input> NUM;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            input temp;
            temp.data=nums[i];
            temp.location=i;
            NUM.push_back(temp);
        }
        sort(NUM.begin(),NUM.begin()+nums.size(),cmp);
        int i = 0, j = nums.size()-1;
        while(i<j){
            if(NUM[i].data+NUM[j].data == target)
                return {NUM[i].location,NUM[j].location};
            else if (NUM[i].data+NUM[j].data < target)
                i++;
            else
                j--;
        }
    return {};
    };
    static bool cmp(input a,input b){
        if(a.data!=b.data)
            return a.data<b.data;
        else
            return a.location<b.location;
    };
};