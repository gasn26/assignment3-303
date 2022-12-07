#include <iostream>
#include <queue>
#include <map>
#include <string>

#include "functions.h"

using namespace std;

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
    getline(cin, userState);
    cout << "The capital of " << userState << " is " << stateDataMap[userState] << endl;

    return 0;
}

