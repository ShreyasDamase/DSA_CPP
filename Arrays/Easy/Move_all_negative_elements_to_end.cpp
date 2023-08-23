//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
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
	     
	    while( j<arr1.size())// pushing positive elements first 
	    {
	        arr[i++]=arr1[j++];
	    }
	    j=0;
	        while( j<arr2.size())//pushing negative elements  
	    {
	        arr[i++]=arr2[j++];
	        
	    }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends