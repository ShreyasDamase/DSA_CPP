//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
int sum=0;
    int sumOfDigits(int N)
    {
       while(N!=0)
       {
        sum=sum+N%10;
        N=N/10;
       }
    
    return sum;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends