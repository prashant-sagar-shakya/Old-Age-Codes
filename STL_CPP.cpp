#include <bits/stdc++.h>
using namespace std;

// cpp STL is divided into 4 parts:
// 1. Containers
// 2. Iterators
// 3. Algorithms
// 4. Functions -> Not required to learn... Skip it

// Before moving on Containers, let's understand pairs
// Pairs are part of utility library in C++ STL
void explain_pairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;                 // 1 3
    pair<int, pair<int, int>> p2 = {1, {2, 3}};                 // nested propeerty of pair
    cout << p2.second.first << " " << p2.second.second << endl; // 2 3
    // pair of arrays
    pair<int, int> arr[] = {{1, 2}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << endl; // 1 2
}

// Let's move on to Containers and Iterators:

// Vectors => dynamic array (modifiable sized array)
void explain_vectors()
{
    vector<int> v; // empty container

    v.push_back(1);
    v.emplace_back(2); // same as push_back, generally emplace_back is faster than push_back
    v.push_back(3);
    v.emplace_back(4);
    cout << v[0] << " " << v[1] << endl; // 1 2 3 4

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // It automatically assumes that {1,2} is a pair

    vector<int> v2(5, 10); // 5 elements and all elements are 10
    vector<int> v3(10);    // 10 elements and all elements are 0

    vector<int> v4(v3); // copy of v3

    // Accessing elements of a vector
    cout << v4[0] << " " << v4[1] << " " << v4[2] << endl;
    cout << v4.at(3) << endl;

    // Iterators
    vector<int>::iterator it = v.begin(); // "it" is an iterator pointing to the memory address of first element
    it++;
    cout << *it << endl; // 2 => * dereferences the iterator
    it = it + 2;
    cout << *it << endl; // 4

    vector<int>::iterator it2 = v.end();            // "it2" is an iterator pointing to the memory address beyond of last element
    vector<int>::reverse_iterator rit = v.rbegin(); // "rit" is a reverse iterator pointing to the memory address of last element
    vector<int>::reverse_iterator rit2 = v.rend();  // "rit2" is a reverse iterator pointing to the memory address before of first element

    cout << v[0] << " " << v.at(0) << endl;       // 1 1
    cout << v.front() << " " << v.back() << endl; // 1 4

    // Printing elements of a vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    // STL means short-cut
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    // Using for each loop {range based for loop}
    for (auto it : v)
    {
        cout << it << " ";
    }
    // v = {1, 2, 3, 4}
    v.erase(v.begin() + 1); // erase the element at index 1
    // {1, 3, 4} => 2 is deleted
    v.erase(v.begin() + 1, v.begin() + 3); // erase the elements from index 1 to 2; like this:[start , end)
    // {1, 4} => 2 and 3 are deleted

    // Insert function
    vector<int> vect1(2, 100);
    vect1.insert(vect1.begin(), 200);        // insert 200 at index 0 => {200, 100, 100}
    vect1.insert(vect1.begin() + 1, 2, 300); // insert 300 2 times at index 1 => {200, 300, 300, 100, 100}

    // Inserting a whole vector in an existing vector
    vector<int> copy(2, 50);
    vect1.insert(vect1.begin(), copy.begin(), copy.end()); // insert copy vector in vect1 at index 0 => {50, 50, 200, 300, 300, 100, 100}

    // Lets assume we have a vector vect2 = {1, 2, 3, 4}
    vector<int> vect2 = {1, 2, 3, 4};
    cout << vect2.size(); // 4

    vect2.pop_back(); // remove last element => {1, 2, 3}

    vector<int> vect3 = {10, 20};
    vector<int> vect4 = {30, 40};
    vect3.swap(vect4); // swap vect3 and vect4 => {30, 40} and {10, 20}
}

// Lists
void explain_lists()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);  // {2, 4}
    ls.push_front(5);    // {5, 2, 4}
    ls.emplace_front(1); // {1, 5, 2, 4}

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, size, insert, erase, swap, front, back
}

// Deques
void explain_deques()
{
    deque<int> dq;
    dq.push_back(2);     // {2}
    dq.emplace_back(4);  // {2, 4}
    dq.push_front(5);    // {5, 2, 4}
    dq.emplace_front(1); // {1, 5, 2, 4}

    dq.pop_back();  // {1, 5, 2}
    dq.pop_front(); // {5, 2}

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, size, insert, erase, swap, front, back
}

// Stack => LIFO (Last In First Out)
void explain_stack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(3);    // {3, 3, 2, 1}
    st.emplace(4); // {4, 3, 3, 2, 1}

    cout << st.top();   // Topmost element => 1
    st.pop();           // Removes topmost element => {3, 3, 2, 1}
    cout << st.top();   // Topmost element => 3
    cout << st.size();  // size => 4
    cout << st.empty(); // Gives 0 if empty and 1 if not empty => 0

    stack<int> st1, st2; // st1 = {5}, st2 = {2}
    st1.swap(st2);       // st1 = {2}, st2 = {5}
}

// Queue => FIFO (First In First Out)
void explain_queue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 5; // {1, 2, 8} => 5 is added with the last element which was 3

    cout << q.back();  // 8
    q.pop();           // {2, 8} => 1 is removed => Removes the first element
    cout << q.front(); // 2

    // size, swap, empty -> same as stack
}

// Priority Queue
void explain_priority_queue()
{
    priority_queue<int> pq; // Maximum Heap -> lexicographically largest element is on top
    pq.push(5);             // {5}
    pq.push(2);             // {5, 2}
    pq.push(8);             // {8, 5, 2}
    pq.emplace(10);         // {10, 8, 5, 2}

    cout << pq.top(); // 10
    pq.pop();         // {8, 5, 2}
    cout << pq.top(); // 8

    // size swap empty -> same as stack

    priority_queue<int, vector<int>, greater<int>> minheap; // Minimum Heap -> lexicographically smallest element is on top
    minheap.push(5);                                        // {5}
    minheap.push(2);                                        // {2, 5}
    minheap.push(8);                                        // {2, 5, 8}
    minheap.emplace(10);                                    // {2, 5, 8, 10}

    cout << minheap.top(); // 2
}

// Set => It stores everything in a Sorted-Order and Uniquely
void explain_set()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    // Functionality of insert in Vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // It returns an iterator which points to the address of 3
    auto it = st.find(6); // If an element is not in the set it will always return set.end() -> i.e. beyond the last element

    st.erase(5); // delete 5 => takes logarithmic time
    // {1, 2, 3, 4}

    int cnt = st.count(1); // if 1 exists, gives no. of occurence of 1 else 0

    auto it = st.find(3);
    st.erase(it); // It takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // After Erase {1, 4, 5} like this: [start, end)

    // lower_bound() and upper_bound() functions works in the same way as in vector it does
    // lower_bound() => Returns an iterator pointing to the first element in the range [first, last) which has a value not less than given value
    // upper_bound() => Returns an iterator pointing to the first element in the range [first, last) which has a value greater than given value

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

// Multi-Set
void explain_multi_set()
{
    // Everything is same as set, but it stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // All 1's erased

    int cnt = ms.count(1);                // Counts the no. of occurences of 1 else stores 0
    ms.erase(ms.find(1));                 // Only a single 1 is erased
    ms.erase(ms.find(1), ms.find(1) + 2); // All 1's between 1 and 3 are erased

    // Rest all functions same as set
}

// Unordered Set
void explain_unordered_set()
{
    unordered_set<int> st;
    // lower_bound() and upper_bound() functions does not work, rest all functions are same as above
    // It does not stores in any particular order
    // It has a better complexity than set in most cases, except some when collision happens
}

// Map
void explain_map()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[{2, 3}] = 5; // same as mpp[2, 3] = 5
    // Everything stores in a sorted order of key {{1, 2}, {2, 4}, {3, 1}}
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
        /* {
                1 2
                2 4
                3 1
         } */
    }
    cout << mpp[1]; // 2
    cout << mpp[5]; // 0 | null -> 5 isn't exists

    auto it = mpp.find(3);
    cout << *it.second; // 3 1

    auto it = mpp.find(5); // "it" points beyond the end of the map
    // Upper-Bound and Lower-Bound
    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above
}

// Multi Map
void explain_multi_map()
{
    // Everything is same as map, but it can stores multiple keys
    // Only mpp[key] cannot be used here
}

// Unordered Map
void explain_unordered_map()
{
    // It has unique keys, Same as set and unordered set, difference is that it doesn't store in any particular order
}

// Let's move on to Algorithms:
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false; // swap internally
    else              // they are same
    {
        if (p1.first > p2.first)
            return true;
        return false;
    }
}
void explain_extra()
{
    int a[] = {1, 4, 3, 3, 5};
    int n = 5;
    sort(a, a + n); // Sort the array "a" in ascending order => [start, end)
    // Sorting a vector is like: sort(v.begin(), v.end()); => [start, end)
    sort(a + 2, a + 4);           // Sort the array "a" from index 2 to 4
    sort(a, a + n, greater<int>); // Sort the array "a" in descending order

    pair<int, int> a1[] = {{1, 2}, {3, 4}, {5, 6}};
    // Sorts it according to second element, if second elements are same then sorts according to first element but in descending order
    sort(a, a + n, comp); // comp is a function which compares two pairs => boolean comparator function
    // {{4, 1}, {2,1}, {1, 2}}

    int num = 7;
    int cnt = __builtin_popcount(num); // Number of set bits in num => cnt = 3

    long long num = 165786578687;
    int cnt1 = __builtin_popcountll(num); // Number of set bits in num

    string s = "123";

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // Prints all possible permutations of string "s"

    int maxi = *max_element(a, a + n); // Returns the maximum element of the entire array
    int mini = *min_element(a, a + n); // Returns the minimum element of the entire array

    reverse(a, a + n);       // Reverses the entire array
    int GCD = __gcd(10, 15); // Gives gcd of passed numbers
}

int main()
{
    // CONTAINERS AND ITERATORS:

    // explain_pairs();
    // explain_vectors();
    // explain_lists();
    // explain_deques();
    // explain_stack();
    // explain_queue();
    // explain_priority_queue();
    // explain_set();
    // explain_multi_set();
    // explain_unordered_set();
    // explain_map()
    // explain_multi_map();
    // explain_unordered_map();

    // ALGORITHMS:

    // explain_extra();

    return 0;
}
