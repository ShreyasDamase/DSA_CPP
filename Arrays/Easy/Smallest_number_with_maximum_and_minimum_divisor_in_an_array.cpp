//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getNum(int arr[] , int N) {
       long long int max=0;
      long long  int min=100001;
        for(int i=0;i<N;i++)//loop for finding max and min number 
        {
          
               if(arr[i]>max)
               {
                   max=arr[i];
               }
               if(arr[i]<min)
               {
                   min=arr[i];
               }
            
            
        }  
         
         int lcm = max ;  // Initialize the LCM with the max value  
        
        // Keep increasing the lcm by max until it becomes divisible by min 
        while (lcm % min  != 0) {
            lcm += max ;  // Increment the LCM by max 
        }
        return lcm;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.getNum(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends