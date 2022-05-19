void plusMinus(vector<int> arr, int n) { float po=0 , neg=0 , ze=0;

for(int i=0;i<n;i++)
{   if (arr[i]==0) 
    {
        ze++;
        }
    else if(arr[i]>0)
    {
        po++;
    }
    else 
    {
        neg++;
    }
} 
cout<<setprecision(6)<<po/n<<endl<<neg/n<<endl<<ze/n;

}

int main()
{
    int n,a;
    vector<int>ar;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ar.push_back(a);
    }
    plusMinus(ar,n);
   return 0;
}
