#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFrequency(vector<int> nums) {
    unordered_map<int, int> freq;
    
    for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
    
    for(auto it : freq) {
        cout << it.first << " -> " << it.second << " times" << endl;
    }
}

int main() {
    vector<int> nums = {2, 3, 2, 4, 3, 2};
    countFrequency(nums);
    return 0;
}
