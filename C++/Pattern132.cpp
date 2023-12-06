
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// bool find132pattern(vector<int>& nums) {
//     int n = nums.size();
//     if (n < 3) {
//         return false;
//     }

//     stack<int> s;
//     int third = INT32_MIN;

//     for (int i = n - 1; i >= 0; --i) {
//         if (nums[i] < third) {
//             return true;
//         }
//         while (!s.empty() && nums[i] > s.top()) {
//             third = s.top();
//             s.pop();
//         }
//         s.push(nums[i]);
//     }

//     return false;
// }

// int main() {
//     vector<int> nums;
//     int x,n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x;
//         nums.push_back(x);
//     }
//     bool result = find132pattern(nums);
//     cout << boolalpha << result << endl;

//     return 0;
// }

int main()
{
    int arr[100];
    int size;
    cout << "enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element: ";
        cin >> arr[i];
    }
    stack<int> st;
    int second_largest = INT32_MIN;
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < second_largest)
        {
            cout << "true";
        }
        while (!st.empty() && arr[i] > st.top())
        {
            second_largest = st.top();
            st.pop();
        }
        st.push(arr[i]);
    }

    cout<<"false";
}
