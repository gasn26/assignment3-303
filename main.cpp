#include <iostream>
#include <queue>
#include <map>

using namespace std;

// QUESTION 1
template<class T>
void move_to_rear(queue<T>&);

template<class T>
void printQ(queue<T>);

// QUESTION 2
bool isPalindrome(string, int lookAt = 0);

// QUESTION 5
template<class T1, class T2>
void printM(map<T1, T2>);

int main() {

    // QUESTION 1
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(6);
    move_to_rear(q);
    printQ(q);

    // QUESTION 2
    string test1 = "may a moodybabydoom a yam";
    string test2 = "may a moody baby doom a yam";
    cout << test1 << (isPalindrome(test1) ? " is" : " is not") << " a palindrome " << endl; // should be a palindrome
    cout << test2 << (isPalindrome(test2) ? " is" : " is not") << " a palindrome " << endl; // should not be a palindrome

    // QUESTION 5
    map<string, string> stateDataMap;
    stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
    stateDataMap.insert(pair<string, string>("New York", "Albany"));
    stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
    stateDataMap.insert(pair<string, string>("California", "Sacremento"));
    stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
    stateDataMap.insert(pair<string, string>("Texas", "Austin"));
    printM(stateDataMap);
    stateDataMap["California"] = "Los Angeles";

    string userState;
    cout << "Enter a state name: ";
    cin >> userState;
    cout << "The capital of " << userState << " is " << stateDataMap[userState] << endl;

    return 0;
}

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
bool isPalindrome(string s, int lookAt) {
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