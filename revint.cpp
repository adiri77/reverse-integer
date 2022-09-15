  #include<iostream>
using namespace std;

  
int main(){
    int n,digit,ans=0;
    cout<<"ENTER NUMBER"<<" ";
    cin>>n;
    while (n!=0)
    {
        digit=n%10;
        if(ans>INT8_MAX/10|| ans<INT8_MIN/10){
                cout<<0;
                exit(0);
        }
        ans=ans*10+digit;
        n=n/10;
        
    }
    cout<<ans;
    return 0;
    
}
