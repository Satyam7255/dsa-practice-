int birthdayCakeCandles(vector<int> candles) 
{
    int count=0;
    int max=0;
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]>max)
        {
            max = candles[i];
        }
    }
    
    for (int i=0;i<candles.size();i++) 
    {
        if (candles[i]==max)
        {
            count++;
        }
    }
    return count;

}
