#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* insertRec(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->data)
            node->left = insertRec(node->left,val);
        else
            node->right = insertRec(node->right,val);
        return node;
    }

    bool searchRec(Node* node, int val) {
        if (!node) return false;
        if (val == node->data) return true;
        return val < node->data ? searchRec(node->left, val) : searchRec(node->right, val);
    }

    void inorderRec(Node* node) {
        if (!node) return;
        inorderRec(node -> left);
        cout << node->data << " ";
        inorderRec(node->right);
    }
public:
    Node* root = nullptr;
    void insert(int val) {
        root = insertRec(root, val);
    }
    bool search(int val) {
        return searchRec(root, val);
    }
    void inorder() {
        inorderRec(root);
        cout << endl;
    }
};

bool linear_search(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return true;
    }
    return false;
}
const int SIZE = 100000;
int arr[SIZE];

int main()
{
    BST tree;
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % (SIZE * 10);
        tree.insert(arr[i]);
    }
    int target = arr[SIZE / 2];
    auto start1 = high_resolution_clock::now();
    bool found1 = linear_search(arr, SIZE, target);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - start1);

    auto start2 = high_resolution_clock::now();
    bool found2 = tree.search(target);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);

    cout << "Search: " << target << endl;
    cout << "Linear_search: " << (found1 ? "Found" : "Not found") << " , time: " << duration1.count() << " microseconds" << endl;
    cout << "Binary_search: " << (found2 ? "Found" : "Not found") << " , time: " << duration1.count() << " microseconds" << endl;
}

