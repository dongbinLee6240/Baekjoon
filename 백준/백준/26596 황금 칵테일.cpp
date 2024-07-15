#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    unordered_map<string, int> ingredient_map;  // Use a map to store ingredient name and total amount

    for (int i = 0; i < n; ++i) {
        string name;
        int num;
        cin >> name >> num;
        ingredient_map[name] += num;  // Accumulate the amount for each ingredient name
    }

    vector<pair<string, int>> ingredients(ingredient_map.begin(), ingredient_map.end());  // Convert map to vector
    sort(ingredients.begin(), ingredients.end(), compare);  // Sort vector by ingredient amounts

    vector<double> arr;
    const double GOLDEN_RATIO = 1.618;
    const double EPSILON = 1e-5;

    bool any_delicious = false;

    for (const auto& it : ingredients) {
        arr.push_back(it.second);
    }

    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (abs(arr[j] - arr[i] * GOLDEN_RATIO) <= EPSILON) {
                any_delicious = true;
                break;
            }
        }
        if (any_delicious) {
            break;
        }
    }

    if (!any_delicious) {
        cout << "Not Delicious..." << endl;
    }
    else {
        cout << "Delicious!" << endl;
    }

    return 0;
}
