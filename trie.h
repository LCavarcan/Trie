#include <string>
#include "trienode.h"

#ifndef TRIE_H
#define TRIE_H

class Trie {
    public:
        TrieNode* trieRoot = nullptr; // root of trie
        int amountOfKeysStored; // number of keys in trie

    public:
        Trie(unsigned alphabetSize);
        bool search(const std::string key);
        void insert(std::string key);
        void deleteNode(std::string key);
        TrieNode* get(TrieNode* x, const std::string key, int trieLevel);
        void imprimir(TrieNode* x,std::string key);
        void imprimir_nos(TrieNode* node, std::string word,std::string prefix);

    private:
        
        TrieNode* add(TrieNode* x, const std::string key, int trieLevel);
        TrieNode* deleteNode(TrieNode* x, const std::string key, int trieLevel);
};

#endif // TRIE_H