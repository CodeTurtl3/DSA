class Solution {
  public:
    unsigned int reversedBits(unsigned int x) {
        // code here
        unsigned int y = 0;
        for(int i = 0; i<32; i++){
            if(x & (1 << i)){
                y |= (1 << (31-i));
            }
        }
        return y;
    }
};
