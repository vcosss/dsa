// Search_an_Element_in_a_Sorted_and_Pivoted_Array
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int key, int low=0, int high=-1){

    if (high==-1) high=arr.size()-1;

    int mid;
    if (arr[low] > arr[high]) {for (mid=low; arr[mid]>arr[high]; mid++);}
    else {mid = (high+low)/2;}

    // recursion
    if (key > arr[mid]) return search(arr,key,mid+1,high);
    else if (key < arr[mid]) return search(arr,key,low,mid-1);
    else return mid;
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 3;

    cout << search(arr,key) << endl;
    return 0;
}