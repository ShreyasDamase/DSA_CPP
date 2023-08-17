//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {   
        //pushing the word in stack one by one
        int end=S.length();
        stack<string>stc;
        string str="";
        for(int i=0;i<end;i++){
            
            if(S[i]!='.'){
                str+=S[i];
            }
            
            if(S[i]=='.'){
             stc.push(str);
             str="";
            }
            
        }
        stc.push(str);// pushing the last str which is not get store because of not ending with "."
       
        //storing the word in result string with '.'
        string result="";
        while(!stc.empty()){
            string str="";
            str=stc.top();
            stc.pop();
            result+=str+".";
        }
        result.pop_back();//removing extra '.' wich will give us false result 
        return result;
    } 
    
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends