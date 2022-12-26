#include<bits/stdc++.h>
using namespace std;
int *multiply(int A[],int B[],int m,int n){
    int *prod=new int[m+n-1];
    for(int i=0;i<(m+n-1);i++){
        prod[i]=0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            prod[i+j]+=A[i]*B[j];
        }
    }
    return prod;
}

int *add(int A[],int B[],int m,int n){
    int c=max(m,n);
    int *sum = new int[c];
    for(int i=0;i<c;i++){
        sum[i]=A[i];
    }
    for(int i=0;i<n;i++){
        sum[i]+=B[i];
    }
    return sum;
}
void printpolynomial(int poly[],int k){
    for(int i=0;i<k;i++){
        cout<<poly[i];
        if(i !=0) cout<<"x^"<<i;
        if(i !=k-1) cout<<" + ";
    }
}
void Evaluation(int poly[],int m,int n,int k){
    int d=0;
    for(int i=0;i<m+n-1;i++){
        d+=poly[i]*pow(k,i);
    }
    cout<<d;
}
int main(){
    int A[]={5,0,10,6};
    int m=sizeof(A)/sizeof(A[0]);
    printpolynomial(A,m);
    cout<<endl;
    int B[]={1,2,4};
    int n=sizeof(B)/sizeof(B[0]);
    printpolynomial(B,n);
    cout<<endl;
    int *sum=add(A,B,m,n);
    int d=max(m,n);
    cout<<" Addition of polynomial is ";
    printpolynomial(sum,d);
    cout<<endl;
    int *prod=multiply(A,B,m,n);
    cout<<" Multiplicaton of polynomial ";
    printpolynomial(prod,m+n-1);
    cout<<endl;
    Evaluation(prod,m,n,2);

    return 0;
}   