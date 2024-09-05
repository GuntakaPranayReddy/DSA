#include<bits/stdc++.h>
using namespace std;
   void printNos(int i,int N)            // method-1
    {
        if(i>=N)
        {
            return;
        }
        cout<<N-i<<" ";
        printNos(i+1,N);
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(0,N);
        
        
    }
   /* int i=0;                            // method-2
    void printNos(int N)
    {
        if(i>=N)
        {
            return;
        }
        cout<<N-i<<" ";
        i++;
        printNos(N);
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(N);
        
        
    }
  */
   /* 
   void printNos(int N)                  // method-3
    {
        if(N<0)
        {
            return;
        }
        cout<<N<<" ";
        printNos(N-1);
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(N);
        
        
    }
    */
  /* void printNos(int i,int N)            // method-4
    {
        if(i>=N)
        {
            return;
        }
        printNos(i+1,N);
        cout<<i<<" ";
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(0,N);   
    }
    */
    