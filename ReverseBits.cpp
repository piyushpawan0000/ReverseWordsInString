class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        while(n>0)
        {
            rev = rev << 1;
            if(n&1 == 1)
            {
                rev = rev ^ 1;
            }
            n = n >> 1;
        }
        return rev;
        }
};