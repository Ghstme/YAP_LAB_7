#ifndef PRINT_TPP
#define PRINT_TPP

template<typename Container>
void Print(const Container &container, const std::string &delimiter) {
    bool first = true;
    for (const auto &item: container) {
        if (!first) {
            std::cout << delimiter;
        }
        std::cout << item;
        first = false;
    }
    std::cout << '\n';
}

#endif // PRINT_TPP
