#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order, and each of their nodes contains a single digit.
 * Add the two numbers and return the sum as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 *
 */

class Solution
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        for (auto it1 = nums.begin(); it1 != nums.end(); ++it1)
        {
            auto it2 = find(it1 + 1, nums.end(), target - *it1);
            if (it2 != nums.end())
            {
                result.push_back(it1 - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two sum solution found!" << endl;
    }
    return 0;
}
