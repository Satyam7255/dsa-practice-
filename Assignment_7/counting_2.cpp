vector<int> countingSort(vector<int> arr)
{ 
  int l=arr.size();
  vector<int> A1(100);
  for (int i=0;i<arr.size();i++)
  {
      A1[arr[i]]++;
  }
  vector<int> A2(l);
  int a=0;
  for (int i=0;i<100;i++)
  {
      while(A1[i]>0)
      {
          A2[a]=i;
          A1[i]--;
          a++;
      }
  }
  
  return A2;
}
