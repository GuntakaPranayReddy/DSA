#include<bits/stdc++.h>
using namespace std;
   /*void printNos(int i,int N)
    {
        if(i>N)
        {
            return;
        }
        cout<<i<<" ";
        printNos(i+1,N);
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(1,N);
        
        
    }*/
    /*
    int i=0;
    void printNos(int N)
    {
        if(i==N)
        {
            return;
        }
        cout<<i<<" ";
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
    void printNos(int N)      // backtracking
    {
        if(N<0)
        {
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }
    int main()
    {
        int N;
        cin>>N;
        printNos(N);   
    }
    