// Maximum_and_Minimum_Element_in_an_Array
#include <bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(vector<int> arr){
    
    int max1 = arr[0];
    int min1 = arr[1];
    if (arr.size() > 1){
        for (int x:arr){
            if (x < min1) min1 = x;
            else if (x > max1) max1 = x;
        }
    }
    return pair<int, int>(max1,min1);
}

int main()
{
    vector<int> arr = {45,23,1,99,0,33};

    pair<int, int> mm = getMinMax(arr);
    cout << "Max: " << mm.first << endl;
    cout << "Min: " << mm.second << endl;
    
    return 0;
}