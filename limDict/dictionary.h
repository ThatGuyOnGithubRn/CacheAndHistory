#include<iostream>
#include<string.h>

#ifndef DICTIONARY_H
#define DICTIONARY_H

int DICT_SIZE = 64;

struct Entry {
  std::string key;
  int value;
};

class Dictionary {
 private:
  int N; // size of array A
  struct Entry *A; // Array of dictionary entries

 public:

  int hashValue(std::string key);

  int findFreeIndex(std::string key);
  
  Dictionary(); 

  struct Entry *get(std::string key);

  bool put(struct Entry e);

  bool remove(std::string key);
};

#endif
