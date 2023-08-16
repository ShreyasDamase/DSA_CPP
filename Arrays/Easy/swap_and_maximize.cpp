//swap and maximize
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
 

long long int maxSum(int arr[], int n)
{
    long long int ans=0;//initializing ans with long long because of return type is long long
    int i=0;
    int j=n-1;
    sort(arr,arr+n);//rearranging the array in sorted manner so we can perfomoperation 
    while(i<j){
        ans=ans+abs(arr[i]-arr[j]);
        ans=ans+abs(arr[i+1]-arr[j]);
         i++;
         j--;
    }
    ans=ans+abs(arr[0]-arr[i]);//adding absolute substraction of first element and last in ans 
    return ans;
}