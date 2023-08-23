//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        sort(arr,arr+n);//soting of array 
      vector<long long int>a1;//to store even numbers 
      vector<long long int>a2;//to store odd numbers 
      
      
        
        for( long long int i=0;i<n;i++)//loop pushing even elements in vector a1 from start to get ascending order
        {
            if(arr[i]%2==0) 
            {
                a1.push_back(arr[i]);
            }
        }
        
      
        for(long long int i=n-1;i>=0;i--)//loop pushing odd elements in vector a1 from end to get descending order
        {
            if(arr[i]%2!=0) 
            {
                a2.push_back(arr[i]);
            }
        }
        
        long long int j=0;
        for( long long int i=0;i<a2.size();i++)//rewriting array start with odd number 
        {
            
             arr[j++]=a2[i];
        }
        
        for( long long int i=0;i<a1.size();i++)//continue array with even number
        {
              
            arr[j++]=a1[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends