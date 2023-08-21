//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int arr[], int n) {
       int *new_arr= new int[1000001];
       
        for(int i=0;i<n;i++)//increasing the count of new array which initialized with zero
        { 
          new_arr[arr[i]]++;   
        }
        
        int high=0; 
         int low=1000001;//max integer input length
         
         
        for(int i=0;i<1000001;i++)//loopp for storing high and low value from the intire new array
        { 
          if(new_arr[i]>=high)//high valye element repitation frequency storing 
          {
              high=new_arr[i];
          }  
          if(new_arr[i]<low && new_arr[i]!=0 )//lowest  element repitation frequency storing 
          {
              low=new_arr[i];
          }
        }
        
         return high-low;//returning diff of highrst elemrnt occurancy - lowest element occurancy 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends