Link for Ques:
https://leetcode.com/problems/add-to-array-form-of-integer/


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& v, int k) {
         int carry=0;
        for(int i=v.size()-1;i>=0;i--)
        {     int a=k%10;
              k=k/10;
              
             v[i]=v[i]+a+carry;
              carry=v[i]/10;
              v[i]=v[i]%10;
              
            
        }
    
        int a=k%10+carry;
        while(k!=0)
        {     
              k=k/10;
            if(carry!=0)
            carry=a/10;
             a=a%10;
            v.insert(v.begin()+0,a);
             a=k+carry;
            

        }   
        if(carry)
        v.insert(v.begin()+0,carry);
        
        return v;
        
    }
};
