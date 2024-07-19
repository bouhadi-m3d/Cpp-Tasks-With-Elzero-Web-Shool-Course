#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    for (int i = (numsSize - 1); i < numsSize; i--)
    {
        cout << nums[i] << endl;
        if (nums[i] == nums[2])
        {
            break;
        }
    }
}