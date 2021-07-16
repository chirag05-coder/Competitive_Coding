#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Node{
public:
     char data;
     unordered_map<char,Node*> children;
     bool terminal;
     int freq;

     Node(char d){
         data = d;
         freq=1;
         terminal = false;
     }
};

class Trie{
    Node* root;

    public:

    Trie(){
        root = new Node('\0');
    }

    void insert(string w){

        Node* temp = root;
        for(int i=0;i<w.size();i++){

            char ch = w[i];
            if(temp->children.count(ch)){
                temp->children[ch]->freq++;
                temp = temp->children[ch];

            }
            else{
                Node* n = new Node(ch);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }
    void find(string w,vector<string>&v){
        string res="";
        Node* temp = root;
        for(int i=0;i<w.size();i++){
            char ch = w[i];
            if(temp->children.count(ch)==0){
                return ;
            }
            else{
                // cout<<temp->children[ch]->freq<<" ";
                if(temp->children[ch]->freq==1)
                    {
                        res.push_back(ch);
                        v.push_back(res);
                        res.clear();
                        return ;
                    }
                    else
                    res.push_back(ch);

                temp = temp->children[ch];
            }
        }
        // return temp->terminal;
    }
};

class Solution
{
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
        Trie t;

        for(int i=0;i<n;i++)
        t.insert(arr[i]);

        vector<string> res;

        for(int i=0;i<n;i++)
        t.find(arr[i],res);

        return res;

    }
 };

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
