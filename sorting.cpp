

#include <bits/stdc++.h>
using namespace std;

v oid bubble_sort(float arr1[], int size)
{
        cout<<"//////////////////////////////Bubble Sort/////////////////////////////"<<endl;
        float arr[size];
        for(int i =0; i < size; i++)
        {
                arr[i] = arr1[i];
        }

        int comparison = 0;
        int swaps = 0;
        int x = size;
        bool count = true;
        while(count)
        {       
                count = false;
                
                for(int i = 1 ; i < size ; i++)
                {
                        if (arr[i - 1] > arr[i])
                        {
                                swap(arr[i-1],arr[i]);
                                count = true;
                                swaps++;
                        } 
                        comparison++ ;                                       
                }
                
                size-- ;
                
                cout<<"Array after pass is :- ";
                for(int j = 0; j<x; j++)
                {                        
                       cout<<arr[j]<<" ";
                }            
        cout<<endl;     
        }
        
        cout<<"Sorted Array is :- ";
        for(int j = 0; j<x; j++)
        {
                cout<<arr[j]<<" ";
        }  
        
        cout<<endl; 
        cout<<"Number of Comparisons are :-"<<comparison<<endl;
        cout<<"Number of Swaps are :-"<<swaps<<endl;

        cout<<"Top Five Scores are :- ";
        for(int i = x - 1; i> x - 6; i--)
        {
                cout<<arr[i]<<",";
        } 
        cout<<endl; 
            
}     

void selection_sort(float arr1[], int size)
{
        cout<<"///////////////////////////Selection Sort/////////////////////////"<<endl;
        float arr[size];
        for(int i =0; i < size; i++)
        {
                arr[i] = arr1[i];
        }
        
        int iter = 0;
        int swaps = 0;
        int indx;
        int min;
        for(int i = 0 ; i <size-1 ; i++)
        {
                min = arr[i];
                indx = i;
                for(int j = i+1 ; j < size ; j++)
                { 
                        if (min > arr[j])
                        {
                                min = arr[j];
                                indx = j;
                        }
                }
                swap(arr[indx],arr[i]);
                if (arr[indx] >arr[i])
                swaps ++;
                if( indx == i)
                {
                     iter++;                  
                }
                cout<<"Array After Pass is :- ";
                for(int j = 0; j<size; j++)
                {
                        cout<<arr[j]<<" ";
                }  
                cout<<endl;
        }
        
        cout<<"Number of passes required are :- "<<iter<<endl;
        cout<<"Number of swaps required are :- "<<swaps<<endl;
        cout<<"Sorted array is : ";
        for(int j = 0; j<size; j++)
        {
                cout<<arr[j]<<" ";
        }  
        cout<<endl;

        cout<<"Top Five Scores are :- ";
        for(int i = size - 1; i> size - 6; i--)
        {
                cout<<arr[i]<<",";
        }  
        cout<<endl;
}  

void insertion_sort(float arr1[] , int size)
{
        cout<<"////////////////////////////Insertion sort///////////////////////"<<endl;
        float arr[size];
        for(int i =0; i < size; i++)
        {
                arr[i] = arr1[i];
        }
                
        int iter = 0;
        for(int i = 1; i<size; i++)
        {
                float temp = arr[i];
                bool flg = false;
                int j = i-1;
                while(j>=-1)
                {
                        if (j== -1)
                        {
                                arr[j+1] = temp;
                                break;
                        }
                        
                        else if (arr[j] > temp)
                        {
                                arr[j+1] = arr[j]; 
                                j--  ;
                                
                        }
                         
                        else
                        {
                               arr[j+1] = temp;
                               break;
                        } 
                                                                               
                }
                iter++;
                
                for(int j = 0; j<size; j++)
                {
                        cout<<arr[j]<<" ";
                }  
                cout<<endl;                                                  
        }  
        
        cout<<"Number of passes required are :- "<<iter<<endl;
        cout<<"Sorted Array is :- ";
        for(int j = 0; j<size; j++)
        {
                cout<<arr[j]<<" ";
        }  
        cout<<endl;

        cout<<"Top Five Scores are :- ";
        for(int i = size - 1; i> size - 6; i--)
        {
                cout<<arr[i]<<",";
        }  
        cout<<endl;
}

void shellSort(float arr1[], int n)
{
    cout<<"//////////////////////Shell sort////////////////////////"<<endl;
    float arr[n];
    for(int i =0; i < n; i++)
    {
        arr[i] = arr1[i];
    }

    int iter = 0;
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            float temp = arr[i];
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                {
                        arr[j] = arr[j - gap];
                }
                arr[j] = temp;
        }
        iter ++;
        cout<<"Array after pass is :";
        for (int i=0; i<n; i++)
        {
                cout << arr[i] << " ";
        }
        cout<<endl;
                
        }
        cout << "Number of passes required are :- "<<iter<<endl;
        cout<<"Sorted array is :- ";
        for (int i=0; i<n; i++)
        {
              cout << arr[i] << " ";
        }
        cout<<endl;

        cout<<"Top Five Scores are :- ";
        for(int i = n - 1; i> n - 6; i--)
        {
                cout<<arr[i]<<",";
        }  
        cout<<endl;
}

int main()
{           
        int n;
        cout<<"Enter Number of Students :- ";
        cin>> n;
                          
        float arr[n];
        cout<<"Enter the Percentages of Students :- ";
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        
        bubble_sort(arr,n);         
        selection_sort(arr,n); 
        insertion_sort(arr,n); 
        shellSort(arr, n);                                                                 
        return 0;     
}

