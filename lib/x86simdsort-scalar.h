#include "custom-compare.h"
#include <algorithm>
#include <numeric>

namespace xss {
namespace scalar {
    template <typename T>
    void qsort(T *arr, size_t arrsize, bool hasnan)
    {
        if (hasnan) {
            std::sort(arr, arr + arrsize, compare<T, std::less<T>>());
        }
        else {
            std::sort(arr, arr + arrsize);
        }
    }
    template <typename T>
    void qselect(T *arr, size_t k, size_t arrsize, bool hasnan)
    {
        if (hasnan) {
            std::nth_element(
                    arr, arr + k, arr + arrsize, compare<T, std::less<T>>());
        }
        else {
            std::nth_element(arr, arr + k, arr + arrsize);
        }
    }
    template <typename T>
    void partial_qsort(T *arr, size_t k, size_t arrsize, bool hasnan)
    {
        if (hasnan) {
            std::partial_sort(
                    arr, arr + k, arr + arrsize, compare<T, std::less<T>>());
        }
        else {
            std::partial_sort(arr, arr + k, arr + arrsize);
        }
    }
    template <typename T>
    std::vector<size_t> argsort(T *arr, size_t arrsize, bool hasnan)
    {
        UNUSED(hasnan);
        std::vector<size_t> arg(arrsize);
        std::iota(arg.begin(), arg.end(), 0);
        std::sort(arg.begin(), arg.end(), compare_arg<T, std::less<T>>(arr));
        return arg;
    }
    template <typename T>
    std::vector<size_t> argselect(T *arr, size_t k, size_t arrsize, bool hasnan)
    {
        UNUSED(hasnan);
        std::vector<size_t> arg(arrsize);
        std::iota(arg.begin(), arg.end(), 0);
        std::nth_element(arg.begin(),
                         arg.begin() + k,
                         arg.end(),
                         compare_arg<T, std::less<T>>(arr));
        return arg;
    }

} // namespace scalar
} // namespace xss
