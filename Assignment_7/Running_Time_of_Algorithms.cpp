int runningTime( vector<int> arr) {
    int  j,a;
    int n = arr.size();
    int count =0;
    
    for(int i=1;i<n;i++)
    {
         a = arr[i];
         j=i-1;
        while (j>=0 && arr[j]>a)
        {
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        arr[j+1]=a;
      
    }
    return count;

}
