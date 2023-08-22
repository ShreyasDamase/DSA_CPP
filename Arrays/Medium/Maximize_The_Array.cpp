//Maximize The Array
/*Given two integer arrays Arr1 and Arr2 of size N. Use the greatest elements from the given arrays to create a new array of size N such that it consists of only unique elements and the sum of all its elements is maximum.
The created elements should contain the elements of Arr2 followed by elements of Arr1 in order of their appearance.

Note: The input array will be given in such way, that every time it is possible to make a new arr by maintaing the following conditions.*/
//Initial template for C++





#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
          set<int>st;
          vector<int> ans;
          
          
          for(int i=0;i<n;i++)//pushing the elments in set
          {
              st.insert(arr1[i]);
              st.insert(arr2[i]);
          }
          while(st.size()>n)//deleting extra element 
          {
              st.erase(*st.begin());//max value is required thats why deleting from starting 
          }
          
          for(int i=0;i<n;i++)//finding the array 2 element and pushing it to the ans vector
          {
              auto it=st.find(arr2[i]);
              if(it!=st.end()){
                  ans.push_back(arr2[i]);
                  st.erase(arr2[i]);// deleting element to eliminatiopn of repetation of element 
              }
          }
          for(int i=0;i<n;i++){//finding the array 1 element and pushing it to the ans vector
              auto it=st.find(arr1[i]);
              if(it!=st.end()){
                  ans.push_back(arr1[i]);
                  st.erase(arr1[i]);// deleting element to eliminatiopn of repetation of element
              }
          }
    return ans;
        
    }
};
 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
 