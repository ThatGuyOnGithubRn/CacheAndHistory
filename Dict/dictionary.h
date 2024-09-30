#include<iostream>
#include<string.h>


// Compile
//    $make exec
//
//
// • Run dictionaryTest.cpp in manual mode.
//
//    $exec 0
//
//   The Interactive part of the Testing can take these instructions
//   – QUIT: end the interactive mode and exit the program
//   – INS <key> <value>: Insert the key-value pair into the Dictionary
//   – DEL <key>: Delete the key from the dictionary if found
//   – FIND <key>: Find and returns the key-value pair

//    $make runtests
//
// • Check distribution of buckets on random inputs.
//    $make random
//
// • Check distribution of buckets on english words.
//    $make english



#ifndef DICTIONARY_H
#define DICTIONARY_H

#define DICT_SIZE 64

struct Entry {
  char* key;
  int value;
};

class Dictionary {
 private:
  int N; // size of array A
  struct Entry *A; // Array of dictionary entries

 public:

  int hashValue(char key[]);

  int findFreeIndex(char key[]);
  
  Dictionary(); 

  ~Dictionary();

  struct Entry *get(char key[]);

  bool put(struct Entry e);

  bool remove(char key[]);
};

#endif
