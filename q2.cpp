#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> findCommon(vector<int> A, vector<int> B) {
    unordered_set<int> setA;
    vector<int> result;
    
    for(int i = 0; i < A.size(); i++) {
        setA.insert(A[i]);
    }
    
    for(int i = 0; i < B.size(); i++) {
        if(setA.find(B[i]) != setA.end()) {
            result.push_back(B[i]);
            setA.erase(B[i]);
        }
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};
    vector<int> common = findCommon(A, B);
    
    for(int i = 0; i < common.size(); i++) {
        cout << common[i];
        if(i < common.size() - 1) cout << ", ";
    }
    cout << endl;
    return 0;
}
