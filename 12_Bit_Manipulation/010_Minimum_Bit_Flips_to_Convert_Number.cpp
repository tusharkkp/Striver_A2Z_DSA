class Solution {
public:
    int minBitFlips(int start, int goal) {

        int xovr = start ^ goal;

        int c = 0;
        int bm = 1;

        for(int i = 0 ; i < 32 ; i++){
            if((xovr & bm )){
                c++;
            }            
            bm = bm<<1;
        }
    return c;
    }
};



class Solution2 {
public:
    /* Function to get the minimum
     bit flips to convert number */
    int minBitsFlip(int start, int goal) {
        
        /* Variable to store bits that
        are different in both numbers */
        int num = start ^ goal;
        
        /* Variable to count 
        number of set bits */
        int count = 0;

        for(int i = 0; i < 32; i++) {
            /* Update count if the 
            rightmost bit is set */
            count += (num & 1); 
            
            /* Shift the number every 
            time by 1 place */
            num = num >> 1;
        }
        return count;
    }
};