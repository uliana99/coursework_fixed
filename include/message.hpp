//  MESSAGE.HPP

#include <iostream>

template <typename BidirectionalIterator>
void message(BidirectionalIterator begin, BidirectionalIterator end) {
    for (BidirectionalIterator iter = begin; iter != end; iter++) {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
}
