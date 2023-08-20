//Find out the maximum sub-array of non negative numbers from an array.
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	     
	     int start=-1;//start of sub-array
	     int end=-1;//end of sub-array
	     int i=0;//start of itteration 
	     int j=0;//for use for start current subarray
	     int sum=0;
	     int max=INT_MIN;
	     while( i < n ) 
	     {    
	         if(a[i]<0)//checking is index value is nrgative meanse less than zero or not 
	          {        // if is it negative so go in 
	             sum = 0;  
	             j   = i+1;//ne start of sub array 
	             i++;// sub array itteration 
	          }else 
	          {
	              sum=sum+a[i];// when index is non negative so adding it in sume 
	                  
	              if( sum > max )//check if sum is greater than max if yes go in 
	              {
	               max   = sum; update max
	               start = j;// j remain constant throught suaray as it is start of this particular
	               end   = i;//end will change with incrase in i
	               } else if( sum == max ) //return the sub-array having max lenth  
	                    {
	                       if(i-j+1>end-start+1)//checking which one have max length if new one have max length so update start and end
	                           {
	                            start = j;
	                            end   = i;
	                            }
	                       }
	                       i++;
	           } 
	         
	     }
	     
	         if(start==-1)//if array havil all value negative in that case return -1
	         {
	             return {-1};
	         }
	         vector<int>ans;//pushing sub-array element in vector 
	         
	         for( int k=start ; k<=end ; k++)
	         {
	            ans.push_back(a[k]) ;
	         }
	         return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends