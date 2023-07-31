 
// Cyclically rotate an array by one


#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

void swap  (int arr[], int a, int b);

void swap  (int arr[], int a, int b) // swap elements
{
     int temp = arr[a];
     arr[a]   = arr[b];
     arr[b]   = temp;
}

void rotate(int arr[], int n) 
{
    for( int i=0 ; i<n ; i++ )
    {
      swap ( arr , i , n-1 );   
    }
    
}

int main()
{
      
        int n;
        scanf("%d",&n);

        int a[n];

        for( int i=0 ; i<n ;i++ )
        {
          scanf("%d",&a[i]);
        }

        for ( int i = 0; i < n; i++ ) //print array before
        { 
          printf("%d ", a[i]); 
        }

          printf("\n");

          rotate(a, n);

        for ( int i = 0 ; i < n ; i++ ) //print array after 
        { 
          printf("%d ", a[i]);
        }
        
   
        return 0;
}
 
