#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q,a,m,s,r;
    float d;
    char op;
    cout<<"\n**********CALCULATOR**********";
    cout<<"\n\nEnter first and second number respectively: ";
    cin>>p>>q;
    fflush(stdin);
    cout<<"\nEnter operator\n\nAddition (+)\nMultiplication (*)\nSubtraction (-)\nDivision (/)\nRemainder (f)\n";
    cin>>op;
    
    a=p+q;
    m=p*q;
    s=p-q;
    r=p%q;

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
    cout<<endl;
    return 0;
}