#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

void solve(){
    int length, t;
    cin >> length;
    vector<int> input;
    for (int i = 0; i < length; i++){
        cin >> t;
        input.push_back(t);
    }

    int output = -2147483647;
    while(input.size() >= 2){
        int minElementIndex = std::min_element(input.begin(),input.end()) - input.begin();
        int min = input[minElementIndex];
        output = max(min, output);
        for (int i = 0; i < input.size(); i++){
            input[i] -= min;
        }
        input.erase(input.begin() + minElementIndex);
    }
    cout << max(input[0], output) << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int length;
    cin >> length;
    for (int i = 0; i < length; i++){
        solve();
    }
}