#include <iostream>
#include <vector>
using namespace std;
int firstocc(vector<int> arr, int target)
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
            end = mid - 1;
        }
        else if (mid < target)
        {
            start = mid + 1;
        }
        else if (mid > target)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 7, 8};
    int target = 5;
    int firstnumber = firstocc(arr, target);
    cout << "The first occurence was found on the index of " << firstnumber << endl;
}