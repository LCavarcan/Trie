#include "trie.h"
#include "trienode.h"
#include <iostream>

int main() {
    Trie t(127);

    t.insert("Pato");
    t.insert("Patagonia");
    t.insert("Patinho");
    t.insert("Patins");
    t.insert("Patolino");

    char prefixo [10]= "Pat"; 

    TrieNode* temp = t.get(t.trieRoot,prefixo,0);

    t.imprimir_nos(temp,"",prefixo);

    return 0;
}
