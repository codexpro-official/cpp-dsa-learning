#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> nums, int target){
    for(int search: nums) {
        if(search == target){
            return target;
        }
    }
    return -1;
}

int main() {
    vector<int> vec={2,7,5,6,9,4,10,15};
    int target;
    cout << "target: ";
    cin >> target;
    cout << linearSearch(vec, target) << endl;
    return 0;
}