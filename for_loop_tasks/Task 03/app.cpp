#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600, 700};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int i = numsSize - 2;
    for (;;)
    {
        cout << nums[i] << endl;
        i--;
        if (i == 1)
        {
            break;
        }
    }
}