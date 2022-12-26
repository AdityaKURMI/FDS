
#include <bits/stdc++.h>
using namespace std;

int min(int x, int y) { return (x <= y) ? x : y; }

/* Returns index of x if present, else returns -1 */
int binsearch(int arr[],int x,int n){
    int lo=0;
    int hi = n-1;
    int mid;

    while(hi>=lo){
        mid=(hi+lo)/2;

        if(arr[mid]==x) return mid;
        if(arr[mid]<x){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return -1;

}


int fibMonaccianSearch(int arr[], int x, int n)
{

    int fib2=0;
    int fib1=1;
    int fibm=fib1+fib2;

    while(fibm<n){
        fib2=fib1;
        fib1=fibm;
        fibm=fib1+fib2;
    }

    int offset=-1;

    while(fibm>1){
        int i=min(offset+fib2,n-1);

        if(arr[i]<x){
            fibm=fib1;
            fib1=fib2;
            fib2=fibm-fib1;
            offset=i;

        }else if(arr[i]>x){
            fibm=fib2;
            fib1-=fib2;
            fib2=fibm-fib1;
        }else{
            return i;
        }
    }

    if(fib1 && arr[offset+1]==x)return offset+1;
    return -1;
}



// Driver Code
int main()
{
    int arr[]= { 10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100,235};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x ;
    cin>>x;
    int ind = binsearch(arr, x, n);
if(ind>=0)
    cout << "Found at index: " << ind;
else
    cout << x << " isn't present in the array";

    return 0;
}

// This code is contributed by code_hunt.
