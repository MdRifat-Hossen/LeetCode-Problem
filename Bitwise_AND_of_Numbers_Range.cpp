class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while(right!=left){
            left>>=1;
            right>>=1;
            count+=1;
        }
        return right<<=count;
    }
};
