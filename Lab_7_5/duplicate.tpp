#ifndef DUPLICATE_TPP
#define DUPLICATE_TPP

template<typename T>
void Duplicate(std::vector<T> &v) {
    size_t original_size = v.size();
    v.reserve(2 * original_size);
    for (size_t i = 0; i < original_size; ++i) {
        v.push_back(v[i]);
    }
}
#endif // DUPLICATE_TPP
