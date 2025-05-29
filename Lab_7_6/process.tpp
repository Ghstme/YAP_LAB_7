#ifndef PROCESS_TPP
#define PROCESS_TPP

#include <algorithm>
#include <iostream>

template<typename T>
void Process(const std::vector<T> &data) {
    std::vector<T> filtered;
    filtered.reserve(data.size());
    std::copy_if(
        data.begin(),
        data.end(),
        std::back_inserter(filtered),
        [](const T &x) { return x > 0; }
    );

    PrintResults(filtered.begin(), filtered.end());
}

template<typename Iter>
void PrintResults(Iter first, Iter last) {
    for (Iter it = first; it != last; ++it) {
        std::cout << *it << std::endl;
    }
}

#endif // PROCESS_TPP
