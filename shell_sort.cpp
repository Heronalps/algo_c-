#include <vector>
#include <iostream>
using namespace std;

// Shell Sort
class Solution {
public:
    vector<int> SortArray(vector<int>& nums) {
        int len = nums.size();
        for (int interval = len / 2; interval > 0; interval /= 2) {
            for (int i = interval; i < len; i++) {
                int temp = nums[i];
                int j;
                for (j = i; j >= 0 && nums[j - interval] > temp; j -= interval) {
                    nums[j] = nums[j - interval];
                }
                nums[j] = temp;
            }
        }
        return nums;
    }
    void PrintArray(vector<int>& array) {
        int i;
        for (i = 0; i < array.size(); i++)
            cout << array[i] << " ";
        cout << endl;
    }
};

int main(){
    vector<int> nums = {9, 8, 3, 7, 5, 6, 4, 1};
    Solution solution;
    solution.SortArray(nums);
    solution.PrintArray(nums);
}