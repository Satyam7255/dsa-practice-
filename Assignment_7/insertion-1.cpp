void insertionSort1(int n, vector<int> arr) {
    int  j,a;
     n = arr.size();
   
    
    for(int i=1;i<n;i++)
    {
         a = arr[i];
         j=i-1;
        while (j>=0 && arr[j]>a)
        {
            arr[j+1]=arr[j];
            for (int i=0;i<n;i++)
            {
              cout<<arr[i]<<" ";
            }
          cout<<endl;
            j--;
        }    
        arr[j+1]=a;
      
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
