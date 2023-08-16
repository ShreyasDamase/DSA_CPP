//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution{
    public:

    void bubble_sort(int a[], int n);
  //  int maxi(int arr[], int n, int num);

    int Maximize(int a[],int n)
    {
         bubble_sort(a,n);
        
          return maxi(a,n,0);    
    }

    int maxi(int arr[],int n,int num){
        int ans;
        if(num>=n){
            return 0;
        }
        return ans= (arr[num]*num)+maxi(arr,n,num+1);
    }
    
};

void Solution::bubble_sort(int a[], int n){
  
    if (n  == 0 || n == 1){
        return;
    }
    
    for (int i = 0; i <n; i++)
        {
            if (a[i]> a[i+1])
            {
                swap(a[i],a[i+1]);
            }
        }
        bubble_sort(a, n - 1);
}


//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends