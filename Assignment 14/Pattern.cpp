int main(){
    int a;
    cin>>a;
    while(a!=0){
        int j=a;
        while(j>0){
            cout<<"#";
            j--;
        }
        cout<<endl;
        a=a/2;
    }
    return 0;
}
