/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Codec {

private:
    void dfs(TreeNode* node, vector<string>& data){
        if(!node){
            data.push_back("N");
            return;
        }
        data.push_back(to_string(node->val));
        dfs(node->left, data);
        dfs(node->right, data);

    }

    string join(const vector<string> &v, const string &delim) {
        ostringstream s;
        for (const auto &i : v) {
            if (&i != &v[0])
                s << delim;
            s << i;
        }
        return s.str();
    }
    vector<string> split(const string &s, char delim) {
        vector<string> elems;
        stringstream ss(s);
        string item;
        while (getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }
    TreeNode* dfsDeserialize(vector<string>& vals, int &i){

        if(vals[i]=="N"){
            i++;
            return NULL;
        }
        TreeNode* node = new TreeNode(stoi(vals[i]));
        i++;
        node->left = dfsDeserialize(vals, i);
        node->right = dfsDeserialize(vals, i);

        return node;
    }
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        vector<string> data;
        dfs(root, data);

        return join(data, ",");
    }

    

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> vals = split(data, ',');
        int i=0;
        return dfsDeserialize(vals, i);

        return nullptr;
    }
};
