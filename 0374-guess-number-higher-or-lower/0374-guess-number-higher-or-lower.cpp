/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1, mid=n/2, k, l=0;
       if(guess(mid)==0)
       return mid;
       else if(guess(mid)==-1)
       k=mid, l=0;
       else
       k=n, l=mid;
       for(i=l;i<k;i++)
       {
           if(guess(i)==0)
           break;
         
        }
        return i;
    }
};