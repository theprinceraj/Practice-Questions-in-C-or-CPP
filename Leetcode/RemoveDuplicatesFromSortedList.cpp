/*
 * Remove Duplicates from Sorted List | Easy | LeetCode 83
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 * Idea: unfinished, it only reads input and starts building the linked list; deduplication is not written.
 * Time: O(n) | Space: O(n) (list construction only)
 */

#include <bits/stdc++.h>
using namespace std;

// TO SOLVE

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int main() {

    int n;
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for(int i = 0; i<n;i++){
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if(!head){
            head = tail = newNode;
        } else {
            
        }
    }
}
