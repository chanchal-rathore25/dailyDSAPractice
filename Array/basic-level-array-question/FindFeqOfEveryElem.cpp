#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2,5,2,8,2,9,5,2};

    for(int i = 0; i < nums.size(); i++)
    {
        bool alreadyPrinted = false;

        // Check if element has already appeared before
        for(int j = 0; j < i; j++)
        {
            if(nums[i] == nums[j])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        int count = 0;

        // Count frequency
        for(int k = 0; k < nums.size(); k++)
        {
            if(nums[i] == nums[k])
                count++;
        }

        cout << nums[i] << " -> " << count << endl;
    }

    return 0;
}