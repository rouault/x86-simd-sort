#ifndef XSS_INTERNAL_METHODS
#define XSS_INTERNAL_METHODS
#include "x86simdsort.h"
#include <stdint.h>
#include <vector>

namespace xss {
namespace avx512 {
    // quicksort
    template <typename T>
    XSS_HIDE_SYMBOL void qsort(T *arr, size_t arrsize, bool hasnan = false);
    // quickselect
    template <typename T>
    XSS_HIDE_SYMBOL void
    qselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // partial sort
    template <typename T>
    XSS_HIDE_SYMBOL void
    partial_qsort(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // argsort
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argsort(T *arr, size_t arrsize, bool hasnan = false);
    // argselect
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
} // namespace avx512
namespace avx2 {
    // quicksort
    template <typename T>
    XSS_HIDE_SYMBOL void qsort(T *arr, size_t arrsize, bool hasnan = false);
    // quickselect
    template <typename T>
    XSS_HIDE_SYMBOL void
    qselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // partial sort
    template <typename T>
    XSS_HIDE_SYMBOL void
    partial_qsort(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // argsort
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argsort(T *arr, size_t arrsize, bool hasnan = false);
    // argselect
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
} // namespace avx2
namespace scalar {
    // quicksort
    template <typename T>
    XSS_HIDE_SYMBOL void qsort(T *arr, size_t arrsize, bool hasnan = false);
    // quickselect
    template <typename T>
    XSS_HIDE_SYMBOL void
    qselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // partial sort
    template <typename T>
    XSS_HIDE_SYMBOL void
    partial_qsort(T *arr, size_t k, size_t arrsize, bool hasnan = false);
    // argsort
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argsort(T *arr, size_t arrsize, bool hasnan = false);
    // argselect
    template <typename T>
    XSS_HIDE_SYMBOL std::vector<size_t>
    argselect(T *arr, size_t k, size_t arrsize, bool hasnan = false);
} // namespace scalar
} // namespace xss
#endif
