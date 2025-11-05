#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comp(pair<long long, long long> &p1, pair<long long, long long> &p2)
{
    if (p1.second > p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    return false;
}

long long sumOfHighestFreq(unordered_map<long long, long long> &data, long long terms)
{
    vector<pair<long long, long long>> vec(data.begin(), data.end());
    long long sum = 0;
    sort(vec.begin(), vec.end(), comp);
    for (auto itr : vec)
    {
        sum += itr.first * itr.second;
        terms--;
        if (terms == 0)
        {
            break;
        }
    }
    return sum;
}

vector<long long> findXSum(vector<int>& nums, int k, int x)
{
    long long n = nums.size();
    vector<long long> res;

    unordered_map<long long, long long> track;
    long long st = 0, end = 0;
    for (end; end < k; end++)
    {
        track[nums[end]]++;
    }

    res.emplace_back(sumOfHighestFreq(track, x));

    for (end; end < n; end++)
    {
        track[nums[st]]--;
        if (track[nums[st]] == 0)
        {
            track.erase(nums[st]);
        }
        st++;
        track[nums[end]]++;
        res.emplace_back(sumOfHighestFreq(track, x));
    }
    return res;
}

long long main()
{

    return 0;
}