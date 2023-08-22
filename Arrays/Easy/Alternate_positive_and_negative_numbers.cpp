//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	     vector<int>arr1;
	     vector<int>arr2;
	    int i=0;
	    while(i<n)
	    {
	        if(arr[i]>=0)
	        {
	            arr1.push_back(arr[i]);
	        }else arr2.push_back(arr[i]);
	        i++;
	    }
	    
	    i=0;
	    int j=0;
	    while(i<n && j<arr1.size() && j<arr2.size())
	    {
	        arr[i]=arr1[j];
	        i++;
	        if(i<n)
	        {
	            arr[i]=arr2[j];
	        }
	        
	        i++;
	        j++;
	    }
	    while( j<arr1.size())//this loop will start executing when itteration of arr2 is finished and remaining will be put into array 
	    {
	        arr[i++]=arr1[j++];
	    }
	        while( j<arr2.size())//this loop will start executing when itteration of arr1 is finished and remaining will be put into array 
	    {
	        arr[i++]=arr2[j++];
	        
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends