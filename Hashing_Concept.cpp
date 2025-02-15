#include <bits/stdc++.h>
using namespace std;

// Hashing basically keeps the track of the frequency of the element in the array/vector

// Globally the maximum array size will be 10^7 and inside main function it will be 10^6 in cpp
int func(int arr[], int n, int num)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            cnt++;
    }
    return cnt;
}
// T.C = O(Q * n) // where Q is the no. of unique numbers in the array/vector

void hash_integers()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre-compute
    int hash[13] = {0}; // size = max no. appears in the array/vector + 1
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        // Fetch
        cout << hash[num] << endl;
    }
}

void hash_characters()
{
    string s;
    cin >> s;

    // pre-compute
    int hash[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;

        // Fetch
        cout << hash[ch - 'a'] << endl;
    }
}

void Map() // Map stores all the values in a sorted order
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;

    // pre-compute
    // Storing array with its frequency in map "mpp"
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    // Iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << " => " << it.second << endl;
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int num;
    //     cin >> num;

    //     // Fetch
    //     cout << mpp[num] << endl;
    // }
}

void Unordered_Map() // Unordered Map stores all the values in a non-sorted order, In an unordered_map() only single type of values can be mapped i.e, unordered_map <pair<int,int>, int> is wrong.
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;

    // pre-compute
    // Storing array with its frequency in map "mpp"
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    // Iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << " => " << it.second << endl;
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int num;
    //     cin >> num;

    //     // Fetch
    //     cout << mpp[num] << endl;
    // }
}

int main()
{
    // Fetch
    // cout << func(arr, n, num) << endl;

    // hash_integers();
    // hash_characters();
    // Map();
    // Unordered_Map();
    return 0;
}

// Collisions and Collisoion Handling in Hashing:
// Collision is the situation where the hash function generates the same index for two different keys.
// Collision Handling: There are two types of collision handling: Linear probing and Chaining.

// In terms of programming, the collision is to generate a hash for size greater than 10^7 in cpp.
// For solving these types of issues: We have three methods,
// 1. Division Method
// 2. Folding Method
// 3. Mid Square Method

// 1. Division Method: Used to trim down the number, like: arr[i] % 10; it uses chaining for same hash values.