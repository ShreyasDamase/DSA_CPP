#include <iostream>
using namespace std;
#include <vector>

vector<int> swap(vector<int> &a)
{
    int start = 0;
    int end = a.size() - 1;
    while (start < end)
    {
        swap(a[start++], a[end--]);
    }

    return a;
}
vector<int> addvec(vector<int> &p, vector<int> &q)
{
    int x = p.size() - 1;
    int y = q.size() - 1;
    int carry = 0;
    vector<int> temp;
    int ans;
    int sum = 0;
    while (x >= 0 && y >= 0)
    {
        sum = p[x--] + q[y--] + carry;
        ans = sum % 10;
        temp.push_back(ans);
        carry = sum / 10;
    }
    while (x >= 0)
    {
        sum = p[x--] + carry;
        ans = sum % 10;
        temp.push_back(ans);
        carry = sum / 10;
    }
    while (y >= 0)
    {
        sum = q[y--] + carry;
        ans = sum % 10;
        temp.push_back(ans);
        carry = sum / 10;
    }
    return temp;
}

int main()
{
    vector<int> a = {5, 9, 6, 2};
    vector<int> b = {9, 9};
    vector<int> sum = addvec(a, b);
    vector<int> ans = swap(sum);
    for (auto i : a)
    {
        cout << i;
    }
    cout << "\n"
         << "+" << endl;
    for (auto i : b)
    {
        cout << i;
    }
    cout << endl
         << "----------" << endl;
    for (auto i : ans)
    {
        cout << i;
    }

    return 0;
}