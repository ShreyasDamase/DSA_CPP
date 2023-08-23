//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    vector<int>a;//creating new arrray vector 
	     
	    for(int i=0;i<n;i++)//pushing elemnt in new array which greater than 0
	    {
	        
	        if(arr[i]>0)
	        {
	            a.push_back(arr[i]);
	        }
	    }
	     
	    
	    for(int i=0;i<n;i++)//rewriting array with zero
	    {
	      arr[i]=0;   
	    }
	 
	  int j=0;
	    while(j<a.size())//replacing back old array element upto vector array size 
	    {
	         
	         arr[j]=a[j];
	         j++; 
	    } 
	   
	  
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends