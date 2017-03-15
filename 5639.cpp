#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

int getInorderIndex(vector<int>& in, int start, int data)
{
    for (int i=start; i<=in.size(); i++) {
        if (in[i] == data) {
            return i;
        }
    }
    return -1;
}

Node* makeBTree(vector<int>& i, vector<int>& p, int start, int end)
{
    static int pIndex = 0;

    if (start > end) {
        return NULL;
    }

    // Get pre-order value by order
    Node* root = new Node(p[pIndex++]);

    if (start == end) {
        cout << endl;
        return root;
    }

    // In-order = Sorted values
    int index = getInorderIndex(i, start, root->data);
    root->left = makeBTree(i, p, start, index-1);
    root->right = makeBTree(i, p, index+1, end);

    return root;
}

void printInorder(Node* root)
{
    if (root != NULL) {
        printInorder(root->left);
        printInorder(root->right);
    }
}

void printPostOrder(Node* root)
{
    if (root != NULL) {
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout << " " << root->data;
    }
}

int main()
{
    int input;
    vector<int> preOrder;
    vector<int> inOrder;

    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        preOrder.push_back(input);
    }
    inOrder = preOrder;
    sort(inOrder.begin(), inOrder.end());

    Node* n = makeBTree(inOrder, preOrder, 0, inOrder.size() - 1);
    printPostOrder(n);
}
