#include <iostream>
#include <vector>
using namespace std;
int lastocc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{
        1,
        2,
        3,
        4,
        5,
        6,
        6,
        6,
        6,
        7,
        8,
        9,
    };
    int target = 6;
    int lastoccrence = lastocc(arr, target);
    cout << "the last number is found on the index of " << lastoccrence;
}
