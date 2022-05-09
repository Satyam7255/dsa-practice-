class Solution {
public:
    int addDigits(int n)
    {
      int s=0;
        while(n>0)
        {
            s = s + n%10;
            n=n/10;
        }
       
      if(s<10)
      {
          return s;
      }
          
        else
        {
            return addDigits(s); 
        }    
    }
};
