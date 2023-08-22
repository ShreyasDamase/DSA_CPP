 
#include<bits/stdc++.h>
using namespace std;
class Solution{

  public:
    string reverseWords (string S)
    {
       
        int end=S.length();
        stack<char>stc;
        string str="";
        for(int i=0;i<end;i++){
            
            if(S[i]!='.'){
                stc.push(S[i]); //pushing the charctor in stack one by one
            }
            
            if(S[i]=='.')
            {
                while(!stc.empty())
                {
                  str+=stc.top();
                  stc.pop();
               }
                str+='.';
            }
            
        }
         while(!stc.empty())
                {
                  str+=stc.top();
                   stc.pop();
               } 
        return str;
    
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}



//folowing solution is also true but not optimal

/*class Solution
{
    string reverse(string str){
        int start=0;
        int end=str.length()-1;
       while(start<end){
            swap(str[start++],str[end--]);
        }
        return str;
    }
  public:
    string reverseWords (string S)
    {
        //pushing the word in stack one by one
        int end=S.length();
        vector<string>stc;
        string str="";
        for(int i=0;i<end;i++){
            
            if(S[i]!='.'){
                str+=S[i];
            }
            
            if(S[i]=='.'){
             stc.push_back(reverse(str));
             str="";
            }
            
        }
        stc.push_back(reverse(str));// pushing the last str which is not get store because of not ending with "."
       
        //storing the word in result string with '.'
        string result="";
        while(!stc.empty()){
            string str="";
            str=stc.front();
            stc.erase(stc.begin());
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
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}
*/