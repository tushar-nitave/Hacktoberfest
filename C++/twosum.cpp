/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> nums, int target){

        vector<int> result;
        int second_number;

        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if (target == nums[i]+nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }

        return result;
    }
};



int main(int argc, char const *argv[]){

    Solution s;

    vector<int> numbers;
    numbers.push_back(3);
    numbers.push_back(2);
    numbers.push_back(4);

    int target = 6;

    vector<int> result = s.twoSum(numbers, target);
    cout<<result[0]<<" "<<result[1];
	return 0;
}