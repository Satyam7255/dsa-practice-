int countPrimes(int n)
{
           vector<bool>prime(n+1,1);
       
        int count=0;
        prime[0]=prime[1]=0;
        for(long i=2;i<n;i++)
        {
            if(!prime[i]) continue;
            count++;
            for(long j= i*i;j<n;j+=i)
                prime[j]=0;
            
        }
        return count;
    } 
