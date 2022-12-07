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
    while (q.size() > 0) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// QUESTION 2
bool isPalindrome(string s, int lookAt = 0) {
    if (lookAt > s.length() / 2 - 1) return true;
    if (s.at(lookAt) != s.at(s.length() - 1 - lookAt)) return false;
    return isPalindrome(s, lookAt+1);
}

// QUESTION 5
template<class T1, class T2>
void printM(map<T1, T2> m) {
    for (pair<T1, T2> p : m)
        cout << p.first << " : " << p.second << endl;
}