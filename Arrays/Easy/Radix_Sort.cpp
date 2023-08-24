//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++




int get_max(int arr[],int n)// Function to find the maximum element in the array
{
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void arr_sort(int *arr ,int n,int pos)// Function to perform counting sort on digits at a specific position
{
    int count[10]={0};// Count array to store frequency of digits
    int temp_arr[n];// Temporary array to store sorted elements
    for(int i=0;i<n;i++)// Count the frequency of each digit at the current position
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++)// Calculate cumulative count of digits to determine their positions
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)// Build the sorted array by placing elements in their correct positions
    {
        temp_arr[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++)// Copy sorted elements back to the original array
    {
        arr[i]=temp_arr[i];
    }
}


void radixSort(int arr[], int n) // Function to perform Radix Sort on the array
{ 
   int max=get_max(arr,n);
   for(int pos=1;max/pos>0; pos *= 10 )// Perform counting sort for each digit position
   {
        arr_sort(arr,n,pos);
       
   }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends