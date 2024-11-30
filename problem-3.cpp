#include <bits/stdc++.h>
using namespace std;
int cnt1 = 0,cnt2 = 0;
int binary_search(vector<int> &vec, int element)
{
    int high = vec.size() - 1, low = 0;
    int mid;
    bool isFound = false;
    while (low <= high)
    {
        mid = (high + low) / 2, cnt1++;
        if (element == vec[mid])
        {
            isFound = true;
            cnt1++;
            break;
        }
        else if (element > vec[mid])
        {
            low = mid - 1;
            cnt1++;
        }
        else
        {
            high = mid - 1;
            cnt1++;
        }
    }
    if (isFound)
    {
        return cnt1;
    }
    else return -1;
}
int linear_search(vector<int>& vec,int element){
    bool isFound = false;
    int ind;
    cnt2++;
    for (size_t i = 0; i < vec.size(); i++,cnt2++)
    {
        if(vec[i] == element){
            isFound = true;
            ind = i;
            cnt2++;
            break;
        }
    }
    if(isFound){
        return cnt2;
    }
    else
    {
        return -1;
    }
    
    
}
int main()
{
    vector<int> vec,temp;
    int n, element;
    cout << "Enter the size of the arry : ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    sort(vec.begin(), vec.end());
    cout << "Enter the element: ";
    cin >> element;
    temp = vec;
    sort(vec.begin(),vec.end());
    if(binary_search(vec, element) != -1 || linear_search(temp,element) != -1){
        
    }
    return 0;
}