#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numsSize; i++)
    {
        cout << nums[i] << endl;
        i++;
    }
}