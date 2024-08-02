/*Crea un codigo para generar la cantidad de subconjuntos de un conjunto dado*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> generateSubsets(vector<int>& nums) {
    int n = nums.size();
    int totalSubsets = pow(2, n);
    vector<vector<int>> subsets;

    for (int i = 0; i < totalSubsets; ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        subsets.push_back(subset);
    }

    return subsets;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = generateSubsets(nums);

    cout << "Los subconjuntos son:" << endl;
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
