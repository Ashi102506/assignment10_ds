#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstNonRepeating(vector<int> nums) {
    unordered_map<int, int> freq;
    
    for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
    
    for(int i = 0; i < nums.size(); i++) {
        if(freq[nums[i]] == 1) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 1, 2, 0, 4};
    cout << firstNonRepeating(nums) << endl;
    return 0;
}
