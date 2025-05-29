#include "print.h"
#include <vector>
#include <list>
#include <set>

int main() {
    std::vector<int> v = {1, 2, 3};
    Print(v, ", ");
    std::list<std::string> l = {"a", "b", "c"};
    Print(l, " ");
    std::set<double> s = {1.1, 2.2, 3.3};
    Print(s, " | ");
    return 0;
}
