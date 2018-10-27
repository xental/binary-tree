
struct Node {
    int key;
    Node* left_node = nullptr;
    Node* right_node = nullptr;
    int height;

    bool operator==(Node &node) const;
    bool operator>(Node &node) const;
    bool operator<(Node &node) const;

};