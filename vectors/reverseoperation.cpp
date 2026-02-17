#include <iostream>
#include <vector>
using namespace std;

// reverse function
void reverseOperation(vector<int> &nums){
    // start index
    int start=0;
    // end index
    int end=nums.size()-1;

    // condition
    while(start<=end) {
        // swap vector
        swap(nums[start],nums[end]);
        // increment start
        start++;
        // decrement end
        end--;
    }
}
int main() {
    // create vector
    vector<int> vec={1,2,3,4,5,6};
    // call reverse function
    reverseOperation(vec);

    // print vector using for each
    for(int i: vec) {
        cout << i << endl;
    }
    return 0;
}