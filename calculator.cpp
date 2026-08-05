#include<bits/stdc++.h>
using namespace std;
 int GCD(int a,int b){
        for(int i=a;i>=1;i--){
            for(int j=b;j>=1;j--){
                if((a%i==0) && (b%j==0) && (i==j)){
                return i;
            }
        }
    }
    return 1;
}
int main(){
    int p,q,a,m,s,r,g;
    float d;
    char op;
    cout<<"\n**********CALCULATOR**********";
    cout<<"\n\nEnter first and second number respectively: ";
    cin>>p>>q;
    fflush(stdin);
    cout<<"\nEnter operator\n\nAddition (+)\nMultiplication (*)\nSubtraction (-)\nDivision (/)\nRemainder (f)\nGCD (g)\n";
    cin>>op;
    
    a=p+q;
    m=p*q;
    s=p-q;
    r=p%q;
    g=GCD(p,q);

    if(op =='+')
        cout<<"Addition: "<<a;
    else if(op =='*')
        cout<<"Multiplication: "<<m;
    else if(op =='-')
        cout<<"Subrtaction: "<<s;
    else if(op =='/')
        cout<<"Quotient: "<<(float)p/q;
    else if(op =='f')
        cout<<"Remainder: "<<r;
    else if(op =='g')
        cout<<"GCD is "<<g;
    cout<<endl;
    return 0;
}
