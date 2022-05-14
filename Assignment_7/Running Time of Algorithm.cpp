void insertionSort(int N, int arr[]) {
    int  j,a;
    cin>>N;
   
    
    for(int i=1;i<N;i++)
    {
         a = arr[i];
         j=i-1;
        while (j>=0 && arr[j]>a)
        {
            arr[j+1]=arr[j];
 
            j--;
        }    
        arr[j+1]=a;
        
      
    }
    for (int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;


}
