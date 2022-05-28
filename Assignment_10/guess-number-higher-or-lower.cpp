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
    int guessNumber(int n)
    {
        long le = 1;
        long ri = n;
        long mid;
        int a;
        while(le<=ri){
            mid = (le + ri)/2;
            a = guess(mid);
            if(a==0){
                return mid;
            }
            else if(a<0){
                ri = mid - 1;
            }
            else{
                le = mid + 1;
            }
        }
        return -1;
    }
};
