#include <bits/stdc++.h>

using namespace std;

/*string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */
 
 int main(){
    
  int m,h;
  cin>>h>>m;  
    
string time[] ={ "one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen"," ","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};

if(m==0){
    cout<<time[h-1]<<" o' clock";
}
else if(m==15){
    cout<<"quarter past "<<time[h-1];
}
else if(m==30){
    cout<<"half past "<<time[h-1];
}
else if(m==45){
    cout<<"quarter to "<<time[h];
}
else if(m<30){
    /*if(m>15){cout<<time[m-1]<<" minute past "<<time[h-1];}
    else */
    cout<<time[m-1]<<" minutes past "<<time[h-1];
}
else if(m>30){
    /*if(m<45){cout<<time[60-m-1]<<" minutes to "<<time[h];}
    else*/
    cout<<time[60-m-1]<<" minutes to "<<time[h];
}
else {
    cout<<"enter time correctly...";
}
return 0;

}
