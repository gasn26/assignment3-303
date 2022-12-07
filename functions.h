#pragma once
#include <queue>
#include <map>
#include <iostream>

using namespace std;

// QUESTION 1
template<class T>
void move_to_rear(queue<T>& q) {
    q.push(q.front());
    q.pop();
}

template<class T>
void printQ(queue<T> q) {
    // Pass by value, then pop off elements from the front of the queue until empty
    while (q.size() > 0) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// QUESTION 2
bool isPalindrome(string s, int lookAt = 0) {
    if (lookAt > s.length() / 2 - 1) return true; // for even length values, stop at the length / 2 place. For odd, stop right before the center
    if (s.at(lookAt) != s.at(s.length() - 1 - lookAt)) return false; // see if character matches opposing character in word
    return isPalindrome(s, lookAt+1); // otherwise, look at the next characters
}

// QUESTION 5
template<class T1, class T2>
void printM(map<T1, T2> m) {
    for (pair<T1, T2> p : m) // map is made of pairs
        cout << p.first << " : " << p.second << endl;
}
