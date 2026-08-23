#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a,long long int b){
        for(int i=a;i>=1;i--){
            for(int j=b;j>=1;j--){
                if((a%i==0) && (b%j==0) && (i==j)){
                return i;
            }
        }
    }
    return 1;
}
long long int LCM(long long int a,long long int b){
        for(int i=a;i<=a*b;i++){
        if((i%a==0) && (i%b==0)){
            return i;
        }
    }
return 1;
}
int main(){
    long long int p,q,a,m,s,r,g,l;
    float d;
    char op;
    cout<<"\n**********CALCULATOR**********";
    cout<<"\n\nEnter first and second number respectively: \a";
    if(cin >> p >> q){
    fflush(stdin);
    cout<<"\nEnter operator\n\nAddition (+)\nMultiplication (*)\nSubtraction (-)\nDivision (/)\nRemainder (f)\nGCD (g)\nLCM (l)\n";
    cin>>op;
    }
    else{
        cerr<<"Invalid Input";
        return 1;
    }
    
    a=p+q;
    m=p*q;
    s=p-q;
    r=p%q;
    g=GCD(p,q);
    l=LCM(p,q);

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
    else if(op =='l')
        cout<<"LCM is "<<l;
    cout<<endl;
    return 0;
}
