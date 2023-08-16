#include<bits/stdc++.h>
#include<vector>

using namespace std;

void print(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
    cout << v[i];
    }
    
    }
int main(){

    pair<int, string> identity;
    //identity = make_pair(1, "shreyas"); //also valid
    identity =  {1, "shreyas"};
    cout << identity.first << " " << identity.second;

    cout << endl;
    // pair of arrray
    pair<int, int> arr[4];
    arr[0] = {1,2};

    for (int i = 0; i < 4; ++i){
        cout << arr[i].first << " " << arr[i].second ;//for printing arry containts only of 2 element 
        cout << endl;}
        


    cout << "swaping arry 1st and last";
    cout << endl;

    // swap arry not arry elements
    swap(arr[0], arr[3]);
    for (int i = 0; i < 4; ++i)
    {
        cout << arr[i].first << " " << arr[i].second ;//for printing arry containts only of 2 element 
        cout << endl;

    }


//vector
    vector<int> v(5,0);//vector having size 5 and all the element will fill with 0
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
    }
    cout << endl;
    cout << endl;

    // vector and pair
    vector<pair<int, int>>
        group = {{4, 5}, {8, 6}, {7, 3}};
    for (auto i : group)
    {
        cout << i.first << "" << i.second;
        cout << endl;
    } /*for cin  cin x;cin y;
    group.push_back({1,5});
    group.push_back({5,8})
    group.push_back(make_pari(5,8));//this can be use also */

//arry of vector which is static meanse having fixed length 
    cout<<"vector arry for multiple vector initialization ";
    int N;
    cout << "N;";
    cin >> N;
    vector<int> arr2[N];
    for (int i = 0; i < N;i++){//outer loop will select each array 
        int n;
        cout << "n:";
        cin >> n;
        for (int j = 0; j < n;j++){//inner loop will put the value one bye one in selected array 
            int x;
            cin >> x;
            arr2[i].push_back(x);
            }
        }
        for (int i = 0; i < N;i++){ //this loop will sebnd array one bye one to print functionm where it will be printed 
            print(arr2[i]);
        }
        cout << arr2[1][2];//directly printing of elements

        cout << endl;
        cout << endl;

        cout << endl;

        // vector of vector

        vector<vector<int>> v2;
        int numbers;
        cout << "inter the numbers of vector:";
        cin>>numbers;
        for (int i = 0; i <numbers; i++)
        {  // outer loop will select each vector

            int length;
            cout << "enter the lenth of vector";
            cin >> length;
            vector<int> temp;
            for (int j = 0; j <length; j++)
            { // inner loop will push vector element
            int x;
            cin >> x;
            temp.push_back(x);
            }
            v2.push_back(temp);
        }

        for (int i = 0; i < v2.size();i++){ //this loop will sebnd array one bye one to print functionm where it will be printed 
            print(v2[i]);
        }
    }
