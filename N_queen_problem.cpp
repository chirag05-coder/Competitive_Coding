#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** arr,int x,int col,int n)
{    
     for(int row=0;row<x;row++)
     {       if(arr[row][col]==1)
                 {   return false;
				 }
	 }
	 int row=x;
	 int column=col;
	 while(row>=0 and column>=0)
	 {      if(arr[row][column]==1)
	            {      return false;
				}
				row--;
				column--;
	 	
	 }
	 row=x;
	 column=col;
	 while(row>=0 and column<n)
	  {     if(arr[row][column]==1)
	          {   return false;
			  }
			  row--;
			  column++;
	  }
	  return true;

}
bool nQueen(int** arr,int x,int n)
{      if(x>=n)
        {   return true;
		}
		for(int column=0;column<n;column++)
		{      if(isSafe(arr,x,column,n))
		         {      arr[x][column]=1;
				  
				       if(nQueen(arr,x+1,n))
					          return true;    
				 }
				 arr[x][column]=0;
			
		}
		return false;
}
int main()
{      int n;
       cin>>n;
       int **arr=new int*[n];
       for(int i=0;i<n;i++)
        {   arr[i]=new int [n];
               for(int j=0;j<n;j++)
                   {       arr[i][j]=0;
                   	
				   }
        	
		}
		
		if(nQueen(arr,0,n))
		{
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			  {
			  	    cout<<arr[i][j]<<" ";
			  }
			  cout<<endl;
		}
	}

	
}
