#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& v) {
 
    for (int i = 0; i < v.size();i++){
           int count = 0;
        for (int j = 0; j < v.size();j++){
            if (v[i] == v[j] ){
                    count += 1;
                }
        }
        if(count>v.size()/2){
                return v[i];
        }
    }
}
int main(){
vector<int>nums={2,2,1,1,1,1,2,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,2,2,2,3,3,3,3,3,3};
int ans=majorityElement(nums);
cout << ans;
return 0;
}