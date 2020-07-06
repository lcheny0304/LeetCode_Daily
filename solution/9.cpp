class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x%10==0&&x/10!=0)
            return false;
        char number[10];
        int i=0;
        do{
            number[i]=x%10;
            x=x/10;
            i++;
        }while(x!=0);
        i--;
        for(int j=0;j<i;j++,i--){
            if(number[i]==number[j])
                continue;
            return false;
        }
        return true;
    };
};