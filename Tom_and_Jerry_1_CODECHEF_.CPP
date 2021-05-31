Link for Ques:
https://www.codechef.com/LTIME96B/problems/TANDJ1

#include <iostream>
using namespace std;

int main() {
	
int test;
cin>>test;
while(test--){
int x1,y1,x2,y2,move;
cin>>x1>>y1>>x2>>y2>>move;
if((abs(x2-x1)==0 and abs(y2-y1)==1) or((abs(x2-x1)==1 and abs(y2-y1)==0)))
{
if(move&1)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
else
{
 int req=abs(x2-x1)+abs(y2-y1);
            if(move>=x)
            {
            if(!((abs(move-req))&1))
            {
                cout<<"yes"<<endl;
                
            }
            else
            cout<<"no"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
}

}
}
