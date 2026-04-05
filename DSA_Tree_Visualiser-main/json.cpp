#include "json.h"
#include <fstream>
#include <sstream>

using namespace std;

string treeToJSON(Node* node) {
    if (!node) return "null";

    stringstream ss;
    ss << "{";
    ss << "\"value\":" << node->value << ",";
    ss << "\"left\":" << treeToJSON(node->left) << ",";
    ss << "\"right\":" << treeToJSON(node->right);
    ss << "}";

    return ss.str();
}

void writeJSONToFile(Node* root) {
    ofstream file("output.json");
    file << treeToJSON(root);
    file.close();
}
