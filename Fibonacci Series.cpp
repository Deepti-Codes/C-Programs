# include<iostream>
using namespace std;
int main()
{   int n;
    long long a=0,b=1,c; 
    cout<<"Enter the number of terms "<<endl;
    cin>>n;
    cout<<"Fibonacci Series"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
  
    
     return 0;
}
