// Contains_Duplicate
#include <bits/stdc++.h>
using namespace std;

bool contains_duplicate(vector<int> arr){
    map<int,int> count;
    for (int x:arr){
        count[x]++;
        if (count[x] > 1){
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1,2,3,1};
    cout << "Contains Duplicates: " << contains_duplicate(arr) << endl;
    
    return 0;
}