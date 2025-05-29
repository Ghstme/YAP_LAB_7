#ifndef PROCESS_H
#define PROCESS_H

#include <vector>

template<typename T>
void Process(const std::vector<T> &data);

template<typename Iter>
void PrintResults(Iter first, Iter last);

#include "process.tpp"

#endif // PROCESS_H
