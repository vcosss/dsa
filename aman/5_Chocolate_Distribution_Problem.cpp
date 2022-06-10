// Chocolate_Distribution_Problem
#include <bits/stdc++.h>
using namespace std;

int mindiff(vector<int> pack, int m){
    sort(pack.begin(), pack.end());
    int mind = INT_MAX;
    for (int i = 0; i <= pack.size()-m; i++) {
        int diff = pack[i+m-1]-pack[i];
        mind = min(mind,diff);
    }
    return mind;
}

int main()
{
    vector<int> pack = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout << "Min Diff: " << mindiff(pack,m) << endl;
    
    return 0;
}