int maxSubArray(const int* a, int n1) 
{

    
    int Cmax= INT_MIN , max = 0, i;
 
    for ( i = 0; i < n1; i++)
    {
        max = max + a[i];
        
        if (Cmax < max){
            Cmax = max;
            }
 
        if (max < 0){
            max = 0;
            }
        

    }
    return Cmax;
}
    
