/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
    int n;
    bool flag=true;
    cout<<"enter no to check if prime:";
    cin>>n
    if(n==0||n==1)
    flag=false;
    
    else if(n%i==0)
    flag=false;
    else{
        for(int i=1; i<=n/2; i+=2)
        (
        if(n%i==0)
        flag=false;
        break;
        )
    }
    if(flag==true)
    cout<<"no is prime";
    else 
     cout<<"not prime";
    
    
    
    
    
   /* int n;
    cout<<"dgt to prnt of fibonacci:";
    cin>>n;
    
    int first,second,third;
    first =0;
    second =1;
    cout<<first<<" "<<second<<" ";
    
    for(int i=1; i<=n; i++){
        third=first+second;
        cout<<third<<" ";
        first=secont;
        second=third;
    }
    
    
   int n;
    cout<<"enter no to print its table;";
    cin>>n;
    for(int i=1; i<10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
    
    
    char oper;
    int a,b;
    cout<<"enter the operator(+,-,*)";
    cin>>oper;
    switch(oper){
        case '+':cout<<"sum is "<<a+b;
        break;
        case '-':cout<<"diff is "a-b;
        break;
        case '*';cout<<"multiply is "a*b;
        break;
        default: cout<<"you didn't enter valid opr";
        
    }
    
    
    int n,sum=0;
    cout<<"enter n to complete sum of natural no:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of natural no is:"<<sum;
    int a,b,c,rt1,rt2,d;
    cout<<"enter the coefficient of x^2:";
    cin>>a;
    cout<<"enter the coefficient of x:";
    cin>>b;
    cout<<"enter the const:";
    cin>>c;
    
    cout<<"qudrtc eq is"<<a<<"x^2+("<<b<<")x+("<<c<<")"<<endl;
    d =pow((b*b-4*a*c),1/2);
    rt1=(-b+d)/(2*a)
    rt2=(-b-d)/(2*a)
    cout<<"roots of quadtc eq are: "<<rt1<<"and"<<rt2<<;
    int a,b,c;
    cout<<"enter the 3 numbers:"<<endl;
    cin>>a>>b>>c;
    
    if(a>b&&b>c)
    cout<<a<<" is largest no"<<endl;
    else if(b>c&&b>a)
    cout<<b<<" is the largest no"<<endl;
    else 
    cout<<c<<" is the largest no"<<endl;
    int a=6;
    int b=8;
    int temp;
    cout<<"before swapping"<<endl;
    cout<<"a="<<"b="<<b<<endl;
    
    temp =a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<"b="<<b;
int i,fact=1,n;
cout<<"enter the number";
cin>>n;
for(i=1;i<=n;i++)
{fact=fact*i;}
    cout<<"factorail "<<n<<"="<<fact<<endl;*/
    return 0;
}