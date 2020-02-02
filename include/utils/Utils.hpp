#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <vector>

namespace Utils {
    // Copy file from source path to dest path
    void copyFile(std::string, std::string);

    // Add commas to provided number
    std::string formatNumberComma(unsigned int);

    // Merges two vectors into one (for sorting)
    // Vector to merge into, two vectors to merge
    template <typename A, typename B>
    void mergeVectors(std::vector<std::pair<A, B> >& m, const std::vector<A>& a, const std::vector<B>& b) {
        for (size_t i = 0; i < a.size(); i++) {
            m.push_back(std::make_pair(a[i], b[i]));
        }
    }

    // Splits a vector of pairs into two vectors
    // Vector with pairs, vectors to split into
    template <typename A, typename B>
    void splitVectors(const std::vector<std::pair<A, B> >& m, std::vector<A>& a, std::vector<B>& b) {
        for (size_t i = 0; i < m.size(); i++) {
            a[i] = m[i].first;
            b[i] = m[i].second;
        }
    }
};

#endif