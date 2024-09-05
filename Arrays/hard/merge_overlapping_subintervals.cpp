#include<bits/stdc++.h>     // it may show error here,better to refer from LEETCODE.
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) 
    {
        return {};
    }
    sort(intervals.begin(),intervals.end()); // based on first value it always sorts the vector
    vector<vector<int>>updated; 
    updated.push_back(intervals[0]);    
    for(int i=1;i<intervals.size();i++)
    {
       /* if(updated.back()[1]>=intervals[i][0] &&updated.back()[1]<=intervals[i][1])
        {
            updated.back()[1]=intervals[i][1];
        }
        else if(updated.back()[1]>=intervals[i][0] &&updated.back()[1]>=intervals[i][1])
        {
            continue;
        }
        else
        {
            updated.push_back(intervals[i]); 
        }
        */
        // (or)
        if(updated.back()[1]>=intervals[i][0])
        {
            updated.back()[1]= max(updated.back()[1],intervals[i][1]);
        }
        else
        {
            updated.push_back(intervals[i]); 
        }
    }
    return(updated);    
    }
    int main()
    {
        vector<vector<int>>intervals;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int p,q;
            cin>>p;
            cin>>q;
            intervals.emplace_back(vector<int>{p,q});
        }
        vector<vector<int>> merged=merge(intervals);
       for(int i=0;i<merged.size();i++)
       {
         cout<<"["<<merged[i][0]<<","<<merged[i][1]<<"]";
       }
        cout<<endl;
       // (or)
       /*
       for(auto &it:merged)
       {
        cout<<"["<<it[0]<<","<<it[1]<<"]";
       }
       cout<<endl;
       */

    }