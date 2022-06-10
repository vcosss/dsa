// Maximum-Subarray
#include <bits/stdc++.h>
using namespace std;

int mss(vector<int> arr){
    int max_endi = arr[0];
    int overall_max = max_endi;
    for (int i = 1; i < arr.size(); i++){
        max_endi = max(arr[i], max_endi+arr[i]);
        overall_max = max(overall_max, max_endi);
    }
    return overall_max;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << mss(nums) << endl;
    
    return 0;
}