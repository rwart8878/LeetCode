class Solution {
public:
     static bool cmp(vector<int> &a,vector<int> &b){
         if(a[1]==b[1]){
             return a[0]>b[0];
         }
         return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end(), cmp); // Sort intervals
    
    int end = INT_MIN; // Initialize current end point
    int count = 0; // Initialize count of removed intervals
    
    for (const auto& interval : intervals) {
        if (interval[0] >= end) { // Non-overlapping interval
            end = interval[1]; // Update current end point
        } else { // Overlapping interval
            count++; // Increment count of removed intervals
        }
    }
    
    return count;
    };
};