#include <iostream>
#include <vector>
using namespace std;

#define Hd main(void)
struct TrieNode
{
    vector<TrieNode *> children;
    bool isEndOfWord;
    int count;
    TrieNode() : count(0), isEndOfWord(false)
    {
        children = vector<TrieNode *>(26, nullptr);
    }
};
void insert(TrieNode *root, const string &key)
{
    TrieNode *node = root;
    for (char character : key)
    {
        int index = character - 'a';
        if (node->children[index] == nullptr)
        {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
        node->count++;
    }
    node->isEndOfWord = true;
}
int findCount(TrieNode *root, const string &key)
{
    TrieNode *node = root;
    for (char character : key)
    {
        int index = character - 'a';
        if (node->children[index] == nullptr)
        {
            return 0;
        }
        node = node->children[index];
    }
    return node->count;
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    TrieNode *root = new TrieNode();
    for (int i = 0; i < n; i++)
    {
        string operation, name;
        cin >> operation >> name;
        if (operation == "add")
        {
            insert(root, name);
        }
        else if (operation == "find")
        {
            int count = findCount(root, name);
            cout << count << "\n";
        }
    }
}