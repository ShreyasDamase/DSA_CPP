 
// Missing number in array


#include <bits/stdc++.h>
using namespace std;

 
class Solution
{
  public:
    int missingNumber(vector<int>& array, int n) 
    {
       sort( array.begin() , array.end() );// For sorting unsorted vector array
       for( int i=0 ; i<n ; i++ )
       {
           if( array[i] != i+1 )
           {
               return i+1;  //Returning index element
           }
       }
    }
};

 
int main() {
    
 
        int n;
        cin >> n;

        vector<int> array(n);
        for ( int i = 0 ; i < n ; ++i)  //Inpit array
        {cin >> array[i];
        }

        Solution obj;

        int index_element = obj.missingNumber( array , n);   
        cout << index_element;  
}
 