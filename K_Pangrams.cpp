// Given a String S and an integer k we need to find that whether the string can be changed into Pangram string by performing at most k changes and that changes can be only modification in a string (ie In one change we can remove existing character and add new character).

// Input
// first line of input contains of an integer 'T' denoting number od test cases
// first line of each testcase contains String 'S'.
// second line of each testcase contains an integer 'k' denoting the number of changes that are allowed. 


// Output
// for each case in a new line print 1 for Yes and  0 for No .

// Constraints
// 1<=T<=40
// 1<=S.length()<=10^6
// 0<=k<=10^9

// Example

// Input

// 2
// qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
// 4
// qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
// 24


// Output
// 0
// 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int k;
        cin>>k;
        if(str.length()<26)
        {
            cout<<"0"<<endl;
        }
        else
        {
        unordered_map<char,int>st;
        for(int i=0;i<str.length();i++)
         {
             st[str.at(i)]++;
         }
    
    if(st.size()==26)
    cout<<"1"<<endl;
    else
    {
        if(26-st.size()>k)
        {
            cout<<"0"<<endl;
            
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    }
	//code
	
	//return 0;
}
}
