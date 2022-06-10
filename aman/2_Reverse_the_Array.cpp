// Reverse_the_Array
#include <bits/stdc++.h>
using namespace std;

vector<int> rev(vector<int> arr){
    int temp;
    int siz = arr.size();
    for (int i = 0; i < siz/2; i++){
        temp = arr[i];
        arr[i] = arr[siz-i-1];
        arr[siz-i-1] = temp;
    }
    return arr;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8};
    cout << "Reversed array: ";
    for (int x:rev(arr)) cout << x << " ";
    cout << endl;
    
    return 0;
}