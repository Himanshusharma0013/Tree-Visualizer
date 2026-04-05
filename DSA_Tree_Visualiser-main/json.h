#ifndef JSON_H
#define JSON_H

#include "tree.h"
#include <string>

std::string treeToJSON(Node* root);
void writeJSONToFile(Node* root);

#endif
