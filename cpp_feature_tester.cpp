// The MIT License (MIT
//
// Copyright (c); 2019 Darrell Wright
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files( the "Software" );, to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and / or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef __has_include
#error Cannot continue, __has_include is not defined
#endif

#if __has_include( <version> )
#include <version>
#endif

#if __has_include( <bit> )
#include <bit>
#endif

#if __has_include( <compare> )
#include <compare>
#endif

#if __has_include( <concepts> )
#include <concepts>
#endif

#if __has_include( <execution> )
#include <execution>
#endif

#if __has_include( <filesystem> )
#include <filesystem>
#endif

#if __has_include( <memory_resource> )
#include <memory_resource>
#endif

#if __has_include( <ranges> )
#include <ranges>
#endif
#if __has_include( <algorithm> )
#include <algorithm>
#endif
#if __has_include( <any> )
#include <any>
#endif
#if __has_include( <array> )
#include <array>
#endif
#if __has_include( <atomic> )
#include <atomic>
#endif
#if __has_include( <chrono> )
#include <chrono>
#endif
#if __has_include( <cmath> )
#include <cmath>
#endif
#if __has_include( <complex> )
#include <complex>
#endif
#if __has_include( <cstddef> )
#include <cstddef>
#endif
#if __has_include( <deque> )
#include <deque>
#endif
#if __has_include( <exception> )
#include <exception>
#endif
#if __has_include( <forward_list> )
#include <forward_list>
#endif
#if __has_include( <functional> )
#include <functional>
#endif
#if __has_include( <iomanip> )
#include <iomanip>
#endif
#if __has_include( <iostream> )
#include <iostream>
#endif
#if __has_include( <istream> )
#include <istream>
#endif
#if __has_include( <iterator> )
#include <iterator>
#endif
#if __has_include( <limits> )
#include <limits>
#endif
#if __has_include( <list> )
#include <list>
#endif
#if __has_include( <locale> )
#include <locale>
#endif
#if __has_include( <map> )
#include <map>
#endif
#if __has_include( <memory> )
#include <memory>
#endif
#if __has_include( <mutex> )
#include <mutex>
#endif
#if __has_include( <new> )
#include <new>
#endif
#if __has_include( <numeric> )
#include <numeric>
#endif
#if __has_include( <optional> )
#include <optional>
#endif
#if __has_include( <ostream> )
#include <ostream>
#endif
#if __has_include( <regex> )
#include <regex>
#endif
#if __has_include( <scoped_allocator> )
#include <scoped_allocator>
#endif
#if __has_include( <set> )
#include <set>
#endif
#if __has_include( <shared_mutex> )
#include <shared_mutex>
#endif
#if __has_include( <string> )
#include <string>
#endif
#if __has_include( <string_view> )
#include <string_view>
#endif
#if __has_include( <tuple> )
#include <tuple>
#endif
#if __has_include( <type_traits> )
#include <type_traits>
#endif
#if __has_include( <unordered_map> )
#include <unordered_map>
#endif
#if __has_include( <unordered_set> )
#include <unordered_set>
#endif
#if __has_include( <utility> )
#include <utility>
#endif
#if __has_include( <variant> )
#include <variant>
#endif
#if __has_include( <vector> )
#include <vector>
#endif

template<typename CharT, size_t N>
void report( int cpp_ver, CharT const ( &macro_name )[N], bool is_supported ) {
	std::cout << "C++" << cpp_ver << ", " << macro_name << ", "
	          << ( is_supported ? "yes\n" : "no\n" );
}

#define report_local( cpp_ver, name, is_supported ) \
bool const support#name#cpp_ver = is_supported

int main( ) {
// Language
#if __cpp_constexpr >= 202211L
	report( 2023, "__cpp_constexpr", true );
#elif __cpp_constexpr >= 202207L
	report( 2023, "__cpp_constexpr (202207)", true );
#elif __cpp_constexpr >= 202110L
	report( 2023, "__cpp_constexpr (202110)", true );
#else
	report( 2023, "__cpp_constexpr", false );
#endif
#if __cpp_explicit_this_parameter >= 202110L
	report( 2023, "__cpp_explicit_this_parameter", true );
#else
	report( 2023, "__cpp_explicit_this_parameter", false );
#endif
#if __cpp_if_consteval >= 202106L
	report( 2023, "__cpp_if_consteval", true );
#else
	report( 2023, "__cpp_if_consteval", false );
#endif
#if __cpp_implicit_move >= 202207L
	report( 2023, "__cpp_implicit_move", true );
#else
	report( 2023, "__cpp_implicit_move", false );
#endif
#if __cpp_multidimensional_subscript >= 202211L
	report( 2023, "__cpp_multidimensional_subscript", true );
#elif __cpp_multidimensional_subscript >= 202110L
	report( 2023, "__cpp_multidimensional_subscript (202110)", true );
#else
	report( 2023, "__cpp_multidimensional_subscript", false );
#endif
#if __cpp_named_character_escapes >= 202207L
	report( 2023, "__cpp_named_character_escapes", true );
#else
	report( 2023, "__cpp_named_character_escapes", false );
#endif
#if __cpp_size_t_suffix >= 202011L
	report( 2023, "__cpp_size_t_suffix", true );
#else
	report( 2023, "__cpp_size_t_suffix", false );
#endif
#if __cpp_range_based_for >= 202211L
	report( 2023, "__cpp_range_based_for", true );
#else
	report( 2023, "__cpp_range_based_for", false );
#endif
#if __cpp_static_call_operator >= 202207L
	report( 2023, "__cpp_static_call_operator", true );
#else
	report( 2023, "__cpp_static_call_operator", false );
#endif
#if __cpp_aggregate_paren_init >= 201902L
	report( 2020, "__cpp_aggregate_paren_init", true );
#else
	report( 2020, "__cpp_aggregate_paren_init", false );
#endif
#if __cpp_char8_t >= 201811L
	report( 2020, "__cpp_char8_t", true );
#else
	report( 2020, "__cpp_char8_t", false );
#endif
#if __cpp_concepts >= 201907L
	report( 2020, "__cpp_concepts", true );
#else
	report( 2020, "__cpp_concepts", false );
#endif
#if __cpp_conditional_explicit >= 201806L
	report( 2020, "__cpp_conditional_explicit", true );
#else
	report( 2020, "__cpp_conditional_explicit", false );
#endif
#if __cpp_consteval >= 201811L
	report( 2020, "__cpp_consteval", true );
#else
	report( 2020, "__cpp_consteval", false );
#endif
#if __cpp_constexpr >= 201907L
	report( 2020, "__cpp_constexpr", true );
#else
	report( 2020, "__cpp_constexpr", false );
#endif
#if __cpp_constexpr_dynamic_alloc >= 201907L
	report( 2020, "__cpp_constexpr_dynamic_alloc", true );
#else
	report( 2020, "__cpp_constexpr_dynamic_alloc", false );
#endif
#if __cpp_constexpr_in_decltype >= 201711L
	report( 2020, "__cpp_constexpr_in_decltype", true );
#else
	report( 2020, "__cpp_constexpr_in_decltype", false );
#endif
#if __cpp_constinit >= 201907L
	report( 2020, "__cpp_constinit", true );
#else
	report( 2020, "__cpp_constinit", false );
#endif
#if __cpp_deduction_guides >= 201907L
	report( 2020, "__cpp_deduction_guides", true );
#else
	report( 2020, "__cpp_deduction_guides", false );
#endif
#if __cpp_designated_initializers >= 201707L
	report( 2020, "__cpp_designated_initializers", true );
#else
	report( 2020, "__cpp_designated_initializers", false );
#endif
#if __cpp_generic_lambdas >= 201707L
	report( 2020, "__cpp_generic_lambdas", true );
#else
	report( 2020, "__cpp_generic_lambdas", false );
#endif
#if __cpp_impl_coroutine >= 201902L
	report( 2020, "__cpp_impl_coroutine", true );
#else
	report( 2020, "__cpp_impl_coroutine", false );
#endif
#if __cpp_impl_destroying_delete >= 201806L
	report( 2020, "__cpp_impl_destroying_delete", true );
#else
	report( 2020, "__cpp_impl_destroying_delete", false );
#endif
#if __cpp_impl_three_way_comparison >= 201907L
	report( 2020, "__cpp_impl_three_way_comparison", true );
#else
	report( 2020, "__cpp_impl_three_way_comparison", false );
#endif
#if __cpp_init_captures >= 201803L
	report( 2020, "__cpp_init_captures", true );
#else
	report( 2020, "__cpp_init_captures", false );
#endif
#if __cpp_modules >= 201907L
	report( 2020, "__cpp_modules", true );
#else
	report( 2020, "__cpp_modules", false );
#endif
#if __cpp_nontype_template_args >= 201911L
	report( 2020, "__cpp_nontype_template_args", true );
#else
	report( 2020, "__cpp_nontype_template_args", false );
#endif
#if __cpp_using_enum >= 201907L
	report( 2020, "__cpp_using_enum", true );
#else
	report( 2020, "__cpp_using_enum", false );
#endif
#if __cpp_aggregate_bases >= 201603L
	report( 2017, "__cpp_aggregate_bases", true );
#else
	report( 2017, "__cpp_aggregate_bases", false );
#endif
#if __cpp_aligned_new >= 201606L
	report( 2017, "__cpp_aligned_new", true );
#else
	report( 2017, "__cpp_aligned_new", false );
#endif
#if __cpp_capture_star_this >= 201603L
	report( 2017, "__cpp_capture_star_this", true );
#else
	report( 2017, "__cpp_capture_star_this", false );
#endif
#if __cpp_constexpr >= 201603L
	report( 2017, "__cpp_constexpr", true );
#else
	report( 2017, "__cpp_constexpr", false );
#endif
#if __cpp_deduction_guides >= 201703L
	report( 2017, "__cpp_deduction_guides", true );
#else
	report( 2017, "__cpp_deduction_guides", false );
#endif
#if __cpp_enumerator_attributes >= 201411L
	report( 2017, "__cpp_enumerator_attributes", true );
#else
	report( 2017, "__cpp_enumerator_attributes", false );
#endif
#if __cpp_fold_expressions >= 201603L
	report( 2017, "__cpp_fold_expressions", true );
#else
	report( 2017, "__cpp_fold_expressions", false );
#endif
#if __cpp_guaranteed_copy_elision >= 201606L
	report( 2017, "__cpp_guaranteed_copy_elision", true );
#else
	report( 2017, "__cpp_guaranteed_copy_elision", false );
#endif
#if __cpp_hex_float >= 201603L
	report( 2017, "__cpp_hex_float", true );
#else
	report( 2017, "__cpp_hex_float", false );
#endif
#if __cpp_if_constexpr >= 201606L
	report( 2017, "__cpp_if_constexpr", true );
#else
	report( 2017, "__cpp_if_constexpr", false );
#endif
#if __cpp_inheriting_constructors >= 201511L
	report( 2017, "__cpp_inheriting_constructors", true );
#else
	report( 2017, "__cpp_inheriting_constructors", false );
#endif
#if __cpp_inline_variables >= 201606L
	report( 2017, "__cpp_inline_variables", true );
#else
	report( 2017, "__cpp_inline_variables", false );
#endif
#if __cpp_namespace_attributes >= 201411L
	report( 2017, "__cpp_namespace_attributes", true );
#else
	report( 2017, "__cpp_namespace_attributes", false );
#endif
#if __cpp_noexcept_function_type >= 201510L
	report( 2017, "__cpp_noexcept_function_type", true );
#else
	report( 2017, "__cpp_noexcept_function_type", false );
#endif
#if __cpp_nontype_template_args >= 201411L
	report( 2017, "__cpp_nontype_template_args", true );
#else
	report( 2017, "__cpp_nontype_template_args", false );
#endif
#if __cpp_nontype_template_parameter_auto >= 201606L
	report( 2017, "__cpp_nontype_template_parameter_auto", true );
#else
	report( 2017, "__cpp_nontype_template_parameter_auto", false );
#endif
#if __cpp_range_based_for >= 201603L
	report( 2017, "__cpp_range_based_for", true );
#else
	report( 2017, "__cpp_range_based_for", false );
#endif
#if __cpp_static_assert >= 201411L
	report( 2017, "__cpp_static_assert", true );
#else
	report( 2017, "__cpp_static_assert", false );
#endif
#if __cpp_structured_bindings >= 201606L
	report( 2017, "__cpp_structured_bindings", true );
#else
	report( 2017, "__cpp_structured_bindings", false );
#endif
#if __cpp_template_template_args >= 201611L
	report( 2017, "__cpp_template_template_args", true );
#else
	report( 2017, "__cpp_template_template_args", false );
#endif
#if __cpp_variadic_using >= 201611L
	report( 2017, "__cpp_variadic_using", true );
#else
	report( 2017, "__cpp_variadic_using", false );
#endif
#if __cpp_aggregate_nsdmi >= 201304L
	report( 2014, "__cpp_aggregate_nsdmi", true );
#else
	report( 2014, "__cpp_aggregate_nsdmi", false );
#endif
#if __cpp_binary_literals >= 201304L
	report( 2014, "__cpp_binary_literals", true );
#else
	report( 2014, "__cpp_binary_literals", false );
#endif
#if __cpp_constexpr >= 201304L
	report( 2014, "__cpp_constexpr", true );
#else
	report( 2014, "__cpp_constexpr", false );
#endif
#if __cpp_decltype_auto >= 201304L
	report( 2014, "__cpp_decltype_auto", true );
#else
	report( 2014, "__cpp_decltype_auto", false );
#endif
#if __cpp_generic_lambdas >= 201304L
	report( 2014, "__cpp_generic_lambdas", true );
#else
	report( 2014, "__cpp_generic_lambdas", false );
#endif
#if __cpp_init_captures >= 201304L
	report( 2014, "__cpp_init_captures", true );
#else
	report( 2014, "__cpp_init_captures", false );
#endif
#if __cpp_return_type_deduction >= 201304L
	report( 2014, "__cpp_return_type_deduction", true );
#else
	report( 2014, "__cpp_return_type_deduction", false );
#endif
#if __cpp_sized_deallocation >= 201309L
	report( 2014, "__cpp_sized_deallocation", true );
#else
	report( 2014, "__cpp_sized_deallocation", false );
#endif
#if __cpp_variable_templates >= 201304L
	report( 2014, "__cpp_variable_templates", true );
#else
	report( 2014, "__cpp_variable_templates", false );
#endif
#if __cpp_alias_templates >= 200704L
	report( 2011, "__cpp_alias_templates", true );
#else
	report( 2011, "__cpp_alias_templates", false );
#endif
#if __cpp_attributes >= 200809L
	report( 2011, "__cpp_attributes", true );
#else
	report( 2011, "__cpp_attributes", false );
#endif
#if __cpp_constexpr >= 200704L
	report( 2011, "__cpp_constexpr", true );
#else
	report( 2011, "__cpp_constexpr", false );
#endif
#if __cpp_decltype >= 200707L
	report( 2011, "__cpp_decltype", true );
#else
	report( 2011, "__cpp_decltype", false );
#endif
#if __cpp_delegating_constructors >= 200604L
	report( 2011, "__cpp_delegating_constructors", true );
#else
	report( 2011, "__cpp_delegating_constructors", false );
#endif
#if __cpp_inheriting_constructors >= 200802L
	report( 2011, "__cpp_inheriting_constructors", true );
#else
	report( 2011, "__cpp_inheriting_constructors", false );
#endif
#if __cpp_initializer_lists >= 200806L
	report( 2011, "__cpp_initializer_lists", true );
#else
	report( 2011, "__cpp_initializer_lists", false );
#endif
#if __cpp_lambdas >= 200907L
	report( 2011, "__cpp_lambdas", true );
#else
	report( 2011, "__cpp_lambdas", false );
#endif
#if __cpp_nsdmi >= 200809L
	report( 2011, "__cpp_nsdmi", true );
#else
	report( 2011, "__cpp_nsdmi", false );
#endif
#if __cpp_range_based_for >= 200907L
	report( 2011, "__cpp_range_based_for", true );
#else
	report( 2011, "__cpp_range_based_for", false );
#endif
#if __cpp_raw_strings >= 200710L
	report( 2011, "__cpp_raw_strings", true );
#else
	report( 2011, "__cpp_raw_strings", false );
#endif
#if __cpp_ref_qualifiers >= 200710L
	report( 2011, "__cpp_ref_qualifiers", true );
#else
	report( 2011, "__cpp_ref_qualifiers", false );
#endif
#if __cpp_rvalue_references >= 200610L
	report( 2011, "__cpp_rvalue_references", true );
#else
	report( 2011, "__cpp_rvalue_references", false );
#endif
#if __cpp_static_assert >= 200410L
	report( 2011, "__cpp_static_assert", true );
#else
	report( 2011, "__cpp_static_assert", false );
#endif
#if __cpp_threadsafe_static_init >= 200806L
	report( 2011, "__cpp_threadsafe_static_init", true );
#else
	report( 2011, "__cpp_threadsafe_static_init", false );
#endif
#if __cpp_unicode_characters >= 200704L
	report( 2011, "__cpp_unicode_characters", true );
#else
	report( 2011, "__cpp_unicode_characters", false );
#endif
#if __cpp_unicode_literals >= 200710L
	report( 2011, "__cpp_unicode_literals", true );
#else
	report( 2011, "__cpp_unicode_literals", false );
#endif
#if __cpp_user_defined_literals >= 200809L
	report( 2011, "__cpp_user_defined_literals", true );
#else
	report( 2011, "__cpp_user_defined_literals", false );
#endif
#if __cpp_variadic_templates >= 200704L
	report( 2011, "__cpp_variadic_templates", true );
#else
	report( 2011, "__cpp_variadic_templates", false );
#endif
// Library
#if __cpp_lib_adaptor_iterator_pair_constructor >= 202106L
	report( 2023, "__cpp_lib_adaptor_iterator_pair_constructor", true );
#else
	report( 2023, "__cpp_lib_adaptor_iterator_pair_constructor", false );
#endif
#if __cpp_lib_addressof_constexpr >= 201603L
	report( 2017, "__cpp_lib_addressof_constexpr", true );
#else
	report( 2017, "__cpp_lib_addressof_constexpr", false );
#endif
#if __cpp_lib_allocate_at_least >= 202106L
	report( 2023, "__cpp_lib_allocate_at_least", true );
#else
	report( 2023, "__cpp_lib_allocate_at_least", false );
#endif
#if __cpp_lib_allocator_traits_is_always_equal >= 201411L
	report( 2017, "__cpp_lib_allocator_traits_is_always_equal", true );
#else
	report( 2017, "__cpp_lib_allocator_traits_is_always_equal", false );
#endif
#if __cpp_lib_any >= 201606L
	report( 2017, "__cpp_lib_any", true );
#else
	report( 2017, "__cpp_lib_any", false );
#endif
#if __cpp_lib_apply >= 201603L
	report( 2017, "__cpp_lib_apply", true );
#else
	report( 2017, "__cpp_lib_apply", false );
#endif
#if __cpp_lib_array_constexpr >= 201603L
	report( 2017, "__cpp_lib_array_constexpr", true );
#else
	report( 2017, "__cpp_lib_array_constexpr", false );
#endif
#if __cpp_lib_as_const >= 201510L
	report( 2017, "__cpp_lib_as_const", true );
#else
	report( 2017, "__cpp_lib_as_const", false );
#endif
#if __cpp_lib_associative_heterogeneous_erasure >= 202110L
	report( 2023, "__cpp_lib_associative_heterogeneous_erasure", true );
#else
	report( 2023, "__cpp_lib_associative_heterogeneous_erasure", false );
#endif
#if __cpp_lib_assume_aligned >= 201811L
	report( 2020, "__cpp_lib_assume_aligned", true );
#else
	report( 2020, "__cpp_lib_assume_aligned", false );
#endif
#if __cpp_lib_atomic_flag_test >= 201907L
	report( 2020, "__cpp_lib_atomic_flag_test", true );
#else
	report( 2020, "__cpp_lib_atomic_flag_test", false );
#endif
#if __cpp_lib_atomic_float >= 201711L
	report( 2020, "__cpp_lib_atomic_float", true );
#else
	report( 2020, "__cpp_lib_atomic_float", false );
#endif
#if __cpp_lib_atomic_is_always_lock_free >= 201603L
	report( 2017, "__cpp_lib_atomic_is_always_lock_free", true );
#else
	report( 2017, "__cpp_lib_atomic_is_always_lock_free", false );
#endif
#if __cpp_lib_atomic_lock_free_type_aliases >= 201907L
	report( 2020, "__cpp_lib_atomic_lock_free_type_aliases", true );
#else
	report( 2020, "__cpp_lib_atomic_lock_free_type_aliases", false );
#endif
#if __cpp_lib_atomic_ref >= 201806L
	report( 2020, "__cpp_lib_atomic_ref", true );
#else
	report( 2020, "__cpp_lib_atomic_ref", false );
#endif
#if __cpp_lib_atomic_shared_ptr >= 201711L
	report( 2020, "__cpp_lib_atomic_shared_ptr", true );
#else
	report( 2020, "__cpp_lib_atomic_shared_ptr", false );
#endif
#if __cpp_lib_atomic_value_initialization >= 201911L
	report( 2020, "__cpp_lib_atomic_value_initialization", true );
#else
	report( 2020, "__cpp_lib_atomic_value_initialization", false );
#endif
#if __cpp_lib_atomic_wait >= 201907L
	report( 2020, "__cpp_lib_atomic_wait", true );
#else
	report( 2020, "__cpp_lib_atomic_wait", false );
#endif
#if __cpp_lib_barrier >= 201907L
	report( 2020, "__cpp_lib_barrier", true );
#else
	report( 2020, "__cpp_lib_barrier", false );
#endif
#if __cpp_lib_bind_front >= 201907L
	report( 2020, "__cpp_lib_bind_front", true );
#else
	report( 2020, "__cpp_lib_bind_front", false );
#endif
#if __cpp_lib_bit_cast >= 201806L
	report( 2020, "__cpp_lib_bit_cast", true );
#else
	report( 2020, "__cpp_lib_bit_cast", false );
#endif
#if __cpp_lib_bitops >= 201907L
	report( 2020, "__cpp_lib_bitops", true );
#else
	report( 2020, "__cpp_lib_bitops", false );
#endif
#if __cpp_lib_bool_constant >= 201505L
	report( 2017, "__cpp_lib_bool_constant", true );
#else
	report( 2017, "__cpp_lib_bool_constant", false );
#endif
#if __cpp_lib_bounded_array_traits >= 201902L
	report( 2020, "__cpp_lib_bounded_array_traits", true );
#else
	report( 2020, "__cpp_lib_bounded_array_traits", false );
#endif
#if __cpp_lib_boyer_moore_searcher >= 201603L
	report( 2017, "__cpp_lib_boyer_moore_searcher", true );
#else
	report( 2017, "__cpp_lib_boyer_moore_searcher", false );
#endif
#if __cpp_lib_byte >= 201603L
	report( 2017, "__cpp_lib_byte", true );
#else
	report( 2017, "__cpp_lib_byte", false );
#endif
#if __cpp_lib_byteswap >= 202110L
	report( 2023, "__cpp_lib_byteswap", true );
#else
	report( 2023, "__cpp_lib_byteswap", false );
#endif
#if __cpp_lib_char8_t >= 201907L
	report( 2020, "__cpp_lib_char8_t", true );
#else
	report( 2020, "__cpp_lib_char8_t", false );
#endif
#if __cpp_lib_chrono >= 201510L
	report( 2017, "__cpp_lib_chrono", true );
#else
	report( 2017, "__cpp_lib_chrono", false );
#endif
#if __cpp_lib_chrono_udls >= 201304L
	report( 2014, "__cpp_lib_chrono_udls", true );
#else
	report( 2014, "__cpp_lib_chrono_udls", false );
#endif
#if __cpp_lib_clamp >= 201603L
	report( 2017, "__cpp_lib_clamp", true );
#else
	report( 2017, "__cpp_lib_clamp", false );
#endif
#if __cpp_lib_complex_udls >= 201309L
	report( 2014, "__cpp_lib_complex_udls", true );
#else
	report( 2014, "__cpp_lib_complex_udls", false );
#endif
#if __cpp_lib_concepts >= 202002L
	report( 2020, "__cpp_lib_concepts", true );
#else
	report( 2020, "__cpp_lib_concepts", false );
#endif
#if __cpp_lib_constexpr_algorithms >= 201806L
	report( 2020, "__cpp_lib_constexpr_algorithms", true );
#else
	report( 2020, "__cpp_lib_constexpr_algorithms", false );
#endif
#if __cpp_lib_constexpr_complex >= 201711L
	report( 2020, "__cpp_lib_constexpr_complex", true );
#else
	report( 2020, "__cpp_lib_constexpr_complex", false );
#endif
#if __cpp_lib_constexpr_dynamic_alloc >= 201907L
	report( 2020, "__cpp_lib_constexpr_dynamic_alloc", true );
#else
	report( 2020, "__cpp_lib_constexpr_dynamic_alloc", false );
#endif
#if __cpp_lib_constexpr_functional >= 201907L
	report( 2020, "__cpp_lib_constexpr_functional", true );
#else
	report( 2020, "__cpp_lib_constexpr_functional", false );
#endif
#if __cpp_lib_constexpr_iterator >= 201811L
	report( 2020, "__cpp_lib_constexpr_iterator", true );
#else
	report( 2020, "__cpp_lib_constexpr_iterator", false );
#endif
#if __cpp_lib_constexpr_memory >= 201811L
	report( 2020, "__cpp_lib_constexpr_memory", true );
#else
	report( 2020, "__cpp_lib_constexpr_memory", false );
#endif
#if __cpp_lib_constexpr_numeric >= 201911L
	report( 2020, "__cpp_lib_constexpr_numeric", true );
#else
	report( 2020, "__cpp_lib_constexpr_numeric", false );
#endif
#if __cpp_lib_constexpr_string >= 201907L
	report( 2020, "__cpp_lib_constexpr_string", true );
#else
	report( 2020, "__cpp_lib_constexpr_string", false );
#endif
#if __cpp_lib_constexpr_string_view >= 201811L
	report( 2020, "__cpp_lib_constexpr_string_view", true );
#else
	report( 2020, "__cpp_lib_constexpr_string_view", false );
#endif
#if __cpp_lib_constexpr_tuple >= 201811L
	report( 2020, "__cpp_lib_constexpr_tuple", true );
#else
	report( 2020, "__cpp_lib_constexpr_tuple", false );
#endif
#if __cpp_lib_constexpr_typeinfo >= 202106L
	report( 2023, "__cpp_lib_constexpr_typeinfo", true );
#else
	report( 2023, "__cpp_lib_constexpr_typeinfo", false );
#endif
#if __cpp_lib_constexpr_utility >= 201811L
	report( 2020, "__cpp_lib_constexpr_utility", true );
#else
	report( 2020, "__cpp_lib_constexpr_utility", false );
#endif
#if __cpp_lib_constexpr_vector >= 201907L
	report( 2020, "__cpp_lib_constexpr_vector", true );
#else
	report( 2020, "__cpp_lib_constexpr_vector", false );
#endif
#if __cpp_lib_coroutine >= 201902L
	report( 2020, "__cpp_lib_coroutine", true );
#else
	report( 2020, "__cpp_lib_coroutine", false );
#endif
#if __cpp_lib_destroying_delete >= 201806L
	report( 2020, "__cpp_lib_destroying_delete", true );
#else
	report( 2020, "__cpp_lib_destroying_delete", false );
#endif
#if __cpp_lib_enable_shared_from_this >= 201603L
	report( 2017, "__cpp_lib_enable_shared_from_this", true );
#else
	report( 2017, "__cpp_lib_enable_shared_from_this", false );
#endif
#if __cpp_lib_endian >= 201907L
	report( 2020, "__cpp_lib_endian", true );
#else
	report( 2020, "__cpp_lib_endian", false );
#endif
#if __cpp_lib_erase_if >= 202002L
	report( 2020, "__cpp_lib_erase_if", true );
#else
	report( 2020, "__cpp_lib_erase_if", false );
#endif
#if __cpp_lib_exchange_function >= 201304L
	report( 2014, "__cpp_lib_exchange_function", true );
#else
	report( 2014, "__cpp_lib_exchange_function", false );
#endif
#if __cpp_lib_execution >= 201603L
	report( 2017, "__cpp_lib_execution", true );
#else
	report( 2017, "__cpp_lib_execution", false );
#endif
#if __cpp_lib_filesystem >= 201703L
	report( 2017, "__cpp_lib_filesystem", true );
#else
	report( 2017, "__cpp_lib_filesystem", false );
#endif
#if __cpp_lib_format >= 201907L
	report( 2020, "__cpp_lib_format", true );
#else
	report( 2020, "__cpp_lib_format", false );
#endif
#if __cpp_lib_gcd_lcm >= 201606L
	report( 2017, "__cpp_lib_gcd_lcm", true );
#else
	report( 2017, "__cpp_lib_gcd_lcm", false );
#endif
#if __cpp_lib_generic_associative_lookup >= 201304L
	report( 2014, "__cpp_lib_generic_associative_lookup", true );
#else
	report( 2014, "__cpp_lib_generic_associative_lookup", false );
#endif
#if __cpp_lib_generic_unordered_lookup >= 201811L
	report( 2020, "__cpp_lib_generic_unordered_lookup", true );
#else
	report( 2020, "__cpp_lib_generic_unordered_lookup", false );
#endif
#if __cpp_lib_hardware_interference_size >= 201703L
	report( 2017, "__cpp_lib_hardware_interference_size", true );
#else
	report( 2017, "__cpp_lib_hardware_interference_size", false );
#endif
#if __cpp_lib_has_unique_object_representations >= 201606L
	report( 2017, "__cpp_lib_has_unique_object_representations", true );
#else
	report( 2017, "__cpp_lib_has_unique_object_representations", false );
#endif
#if __cpp_lib_hypot >= 201603L
	report( 2017, "__cpp_lib_hypot", true );
#else
	report( 2017, "__cpp_lib_hypot", false );
#endif
#if __cpp_lib_incomplete_container_elements >= 201505L
	report( 2017, "__cpp_lib_incomplete_container_elements", true );
#else
	report( 2017, "__cpp_lib_incomplete_container_elements", false );
#endif
#if __cpp_lib_int_pow2 >= 202002L
	report( 2020, "__cpp_lib_int_pow2", true );
#else
	report( 2020, "__cpp_lib_int_pow2", false );
#endif
#if __cpp_lib_integer_comparison_functions >= 202002L
	report( 2020, "__cpp_lib_integer_comparison_functions", true );
#else
	report( 2020, "__cpp_lib_integer_comparison_functions", false );
#endif
#if __cpp_lib_integer_sequence >= 201304L
	report( 2014, "__cpp_lib_integer_sequence", true );
#else
	report( 2014, "__cpp_lib_integer_sequence", false );
#endif
#if __cpp_lib_integral_constant_callable >= 201304L
	report( 2014, "__cpp_lib_integral_constant_callable", true );
#else
	report( 2014, "__cpp_lib_integral_constant_callable", false );
#endif
#if __cpp_lib_interpolate >= 201902L
	report( 2020, "__cpp_lib_interpolate", true );
#else
	report( 2020, "__cpp_lib_interpolate", false );
#endif
#if __cpp_lib_invoke >= 201411L
	report( 2017, "__cpp_lib_invoke", true );
#else
	report( 2017, "__cpp_lib_invoke", false );
#endif
#if __cpp_lib_invoke_r >= 202106L
	report( 2023, "__cpp_lib_invoke_r", true );
#else
	report( 2023, "__cpp_lib_invoke_r", false );
#endif
#if __cpp_lib_is_aggregate >= 201703L
	report( 2017, "__cpp_lib_is_aggregate", true );
#else
	report( 2017, "__cpp_lib_is_aggregate", false );
#endif
#if __cpp_lib_is_constant_evaluated >= 201811L
	report( 2020, "__cpp_lib_is_constant_evaluated", true );
#else
	report( 2020, "__cpp_lib_is_constant_evaluated", false );
#endif
#if __cpp_lib_is_final >= 201402L
	report( 2014, "__cpp_lib_is_final", true );
#else
	report( 2014, "__cpp_lib_is_final", false );
#endif
#if __cpp_lib_is_invocable >= 201703L
	report( 2017, "__cpp_lib_is_invocable", true );
#else
	report( 2017, "__cpp_lib_is_invocable", false );
#endif
#if __cpp_lib_is_layout_compatible >= 201907L
	report( 2020, "__cpp_lib_is_layout_compatible", true );
#else
	report( 2020, "__cpp_lib_is_layout_compatible", false );
#endif
#if __cpp_lib_is_nothrow_convertible >= 201806L
	report( 2020, "__cpp_lib_is_nothrow_convertible", true );
#else
	report( 2020, "__cpp_lib_is_nothrow_convertible", false );
#endif
#if __cpp_lib_is_null_pointer >= 201309L
	report( 2014, "__cpp_lib_is_null_pointer", true );
#else
	report( 2014, "__cpp_lib_is_null_pointer", false );
#endif
#if __cpp_lib_is_pointer_interconvertible >= 201907L
	report( 2020, "__cpp_lib_is_pointer_interconvertible", true );
#else
	report( 2020, "__cpp_lib_is_pointer_interconvertible", false );
#endif
#if __cpp_lib_is_scoped_enum >= 202011L
	report( 2023, "__cpp_lib_is_scoped_enum", true );
#else
	report( 2023, "__cpp_lib_is_scoped_enum", false );
#endif
#if __cpp_lib_is_swappable >= 201603L
	report( 2017, "__cpp_lib_is_swappable", true );
#else
	report( 2017, "__cpp_lib_is_swappable", false );
#endif
#if __cpp_lib_jthread >= 201911L
	report( 2020, "__cpp_lib_jthread", true );
#else
	report( 2020, "__cpp_lib_jthread", false );
#endif
#if __cpp_lib_latch >= 201907L
	report( 2020, "__cpp_lib_latch", true );
#else
	report( 2020, "__cpp_lib_latch", false );
#endif
#if __cpp_lib_launder >= 201606L
	report( 2017, "__cpp_lib_launder", true );
#else
	report( 2017, "__cpp_lib_launder", false );
#endif
#if __cpp_lib_list_remove_return_type >= 201806L
	report( 2020, "__cpp_lib_list_remove_return_type", true );
#else
	report( 2020, "__cpp_lib_list_remove_return_type", false );
#endif
#if __cpp_lib_logical_traits >= 201510L
	report( 2017, "__cpp_lib_logical_traits", true );
#else
	report( 2017, "__cpp_lib_logical_traits", false );
#endif
#if __cpp_lib_make_from_tuple >= 201606L
	report( 2017, "__cpp_lib_make_from_tuple", true );
#else
	report( 2017, "__cpp_lib_make_from_tuple", false );
#endif
#if __cpp_lib_make_reverse_iterator >= 201402L
	report( 2014, "__cpp_lib_make_reverse_iterator", true );
#else
	report( 2014, "__cpp_lib_make_reverse_iterator", false );
#endif
#if __cpp_lib_make_unique >= 201304L
	report( 2014, "__cpp_lib_make_unique", true );
#else
	report( 2014, "__cpp_lib_make_unique", false );
#endif
#if __cpp_lib_map_try_emplace >= 201411L
	report( 2017, "__cpp_lib_map_try_emplace", true );
#else
	report( 2017, "__cpp_lib_map_try_emplace", false );
#endif
#if __cpp_lib_math_constants >= 201907L
	report( 2020, "__cpp_lib_math_constants", true );
#else
	report( 2020, "__cpp_lib_math_constants", false );
#endif
#if __cpp_lib_math_special_functions >= 201603L
	report( 2017, "__cpp_lib_math_special_functions", true );
#else
	report( 2017, "__cpp_lib_math_special_functions", false );
#endif
#if __cpp_lib_memory_resource >= 201603L
	report( 2017, "__cpp_lib_memory_resource", true );
#else
	report( 2017, "__cpp_lib_memory_resource", false );
#endif
#if __cpp_lib_monadic_optional >= 202110L
	report( 2023, "__cpp_lib_monadic_optional", true );
#else
	report( 2023, "__cpp_lib_monadic_optional", false );
#endif
#if __cpp_lib_move_only_function >= 202110L
	report( 2023, "__cpp_lib_move_only_function", true );
#else
	report( 2023, "__cpp_lib_move_only_function", false );
#endif
#if __cpp_lib_node_extract >= 201606L
	report( 2017, "__cpp_lib_node_extract", true );
#else
	report( 2017, "__cpp_lib_node_extract", false );
#endif
#if __cpp_lib_nonmember_container_access >= 201411L
	report( 2017, "__cpp_lib_nonmember_container_access", true );
#else
	report( 2017, "__cpp_lib_nonmember_container_access", false );
#endif
#if __cpp_lib_not_fn >= 201603L
	report( 2017, "__cpp_lib_not_fn", true );
#else
	report( 2017, "__cpp_lib_not_fn", false );
#endif
#if __cpp_lib_null_iterators >= 201304L
	report( 2014, "__cpp_lib_null_iterators", true );
#else
	report( 2014, "__cpp_lib_null_iterators", false );
#endif
#if __cpp_lib_optional >= 201606L
	report( 2017, "__cpp_lib_optional", true );
#else
	report( 2017, "__cpp_lib_optional", false );
#endif
#if __cpp_lib_out_ptr >= 202106L
	report( 2023, "__cpp_lib_out_ptr", true );
#else
	report( 2023, "__cpp_lib_out_ptr", false );
#endif
#if __cpp_lib_parallel_algorithm >= 201603L
	report( 2017, "__cpp_lib_parallel_algorithm", true );
#else
	report( 2017, "__cpp_lib_parallel_algorithm", false );
#endif
#if __cpp_lib_polymorphic_allocator >= 201902L
	report( 2020, "__cpp_lib_polymorphic_allocator", true );
#else
	report( 2020, "__cpp_lib_polymorphic_allocator", false );
#endif
#if __cpp_lib_quoted_string_io >= 201304L
	report( 2014, "__cpp_lib_quoted_string_io", true );
#else
	report( 2014, "__cpp_lib_quoted_string_io", false );
#endif
#if __cpp_lib_ranges >= 201911L
	report( 2020, "__cpp_lib_ranges", true );
#else
	report( 2020, "__cpp_lib_ranges", false );
#endif
#if __cpp_lib_ranges_starts_ends_with >= 202106L
	report( 2023, "__cpp_lib_ranges_starts_ends_with", true );
#else
	report( 2023, "__cpp_lib_ranges_starts_ends_with", false );
#endif
#if __cpp_lib_ranges_zip >= 202110L
	report( 2023, "__cpp_lib_ranges_zip", true );
#else
	report( 2023, "__cpp_lib_ranges_zip", false );
#endif
#if __cpp_lib_raw_memory_algorithms >= 201606L
	report( 2017, "__cpp_lib_raw_memory_algorithms", true );
#else
	report( 2017, "__cpp_lib_raw_memory_algorithms", false );
#endif
#if __cpp_lib_remove_cvref >= 201711L
	report( 2020, "__cpp_lib_remove_cvref", true );
#else
	report( 2020, "__cpp_lib_remove_cvref", false );
#endif
#if __cpp_lib_result_of_sfinae >= 201210L
	report( 2014, "__cpp_lib_result_of_sfinae", true );
#else
	report( 2014, "__cpp_lib_result_of_sfinae", false );
#endif
#if __cpp_lib_robust_nonmodifying_seq_ops >= 201304L
	report( 2014, "__cpp_lib_robust_nonmodifying_seq_ops", true );
#else
	report( 2014, "__cpp_lib_robust_nonmodifying_seq_ops", false );
#endif
#if __cpp_lib_sample >= 201603L
	report( 2017, "__cpp_lib_sample", true );
#else
	report( 2017, "__cpp_lib_sample", false );
#endif
#if __cpp_lib_scoped_lock >= 201703L
	report( 2017, "__cpp_lib_scoped_lock", true );
#else
	report( 2017, "__cpp_lib_scoped_lock", false );
#endif
#if __cpp_lib_semaphore >= 201907L
	report( 2020, "__cpp_lib_semaphore", true );
#else
	report( 2020, "__cpp_lib_semaphore", false );
#endif
#if __cpp_lib_shared_mutex >= 201505L
	report( 2017, "__cpp_lib_shared_mutex", true );
#else
	report( 2017, "__cpp_lib_shared_mutex", false );
#endif
#if __cpp_lib_shared_ptr_arrays >= 201611L
	report( 2017, "__cpp_lib_shared_ptr_arrays", true );
#else
	report( 2017, "__cpp_lib_shared_ptr_arrays", false );
#endif
#if __cpp_lib_shared_ptr_weak_type >= 201606L
	report( 2017, "__cpp_lib_shared_ptr_weak_type", true );
#else
	report( 2017, "__cpp_lib_shared_ptr_weak_type", false );
#endif
#if __cpp_lib_shared_timed_mutex >= 201402L
	report( 2014, "__cpp_lib_shared_timed_mutex", true );
#else
	report( 2014, "__cpp_lib_shared_timed_mutex", false );
#endif
#if __cpp_lib_shift >= 201806L
	report( 2020, "__cpp_lib_shift", true );
#else
	report( 2020, "__cpp_lib_shift", false );
#endif
#if __cpp_lib_smart_ptr_for_overwrite >= 202002L
	report( 2020, "__cpp_lib_smart_ptr_for_overwrite", true );
#else
	report( 2020, "__cpp_lib_smart_ptr_for_overwrite", false );
#endif
#if __cpp_lib_source_location >= 201907L
	report( 2020, "__cpp_lib_source_location", true );
#else
	report( 2020, "__cpp_lib_source_location", false );
#endif
#if __cpp_lib_span >= 202002L
	report( 2020, "__cpp_lib_span", true );
#else
	report( 2020, "__cpp_lib_span", false );
#endif
#if __cpp_lib_spanstream >= 202106L
	report( 2023, "__cpp_lib_spanstream", true );
#else
	report( 2023, "__cpp_lib_spanstream", false );
#endif
#if __cpp_lib_ssize >= 201902L
	report( 2020, "__cpp_lib_ssize", true );
#else
	report( 2020, "__cpp_lib_ssize", false );
#endif
#if __cpp_lib_stacktrace >= 202011L
	report( 2023, "__cpp_lib_stacktrace", true );
#else
	report( 2023, "__cpp_lib_stacktrace", false );
#endif
#if __cpp_lib_starts_ends_with >= 201711L
	report( 2020, "__cpp_lib_starts_ends_with", true );
#else
	report( 2020, "__cpp_lib_starts_ends_with", false );
#endif
#if __cpp_lib_stdatomic_h >= 202011L
	report( 2023, "__cpp_lib_stdatomic_h", true );
#else
	report( 2023, "__cpp_lib_stdatomic_h", false );
#endif
#if __cpp_lib_string_contains >= 202011L
	report( 2023, "__cpp_lib_string_contains", true );
#else
	report( 2023, "__cpp_lib_string_contains", false );
#endif
#if __cpp_lib_string_resize_and_overwrite >= 202110L
	report( 2023, "__cpp_lib_string_resize_and_overwrite", true );
#else
	report( 2023, "__cpp_lib_string_resize_and_overwrite", false );
#endif
#if __cpp_lib_string_udls >= 201304L
	report( 2014, "__cpp_lib_string_udls", true );
#else
	report( 2014, "__cpp_lib_string_udls", false );
#endif
#if __cpp_lib_string_view >= 201606L
	report( 2017, "__cpp_lib_string_view", true );
#else
	report( 2017, "__cpp_lib_string_view", false );
#endif
#if __cpp_lib_syncbuf >= 201803L
	report( 2020, "__cpp_lib_syncbuf", true );
#else
	report( 2020, "__cpp_lib_syncbuf", false );
#endif
#if __cpp_lib_three_way_comparison >= 201907L
	report( 2020, "__cpp_lib_three_way_comparison", true );
#else
	report( 2020, "__cpp_lib_three_way_comparison", false );
#endif
#if __cpp_lib_to_address >= 201711L
	report( 2020, "__cpp_lib_to_address", true );
#else
	report( 2020, "__cpp_lib_to_address", false );
#endif
#if __cpp_lib_to_array >= 201907L
	report( 2020, "__cpp_lib_to_array", true );
#else
	report( 2020, "__cpp_lib_to_array", false );
#endif
#if __cpp_lib_to_chars >= 201611L
	report( 2017, "__cpp_lib_to_chars", true );
#else
	report( 2017, "__cpp_lib_to_chars", false );
#endif
#if __cpp_lib_to_underlying >= 202102L
	report( 2023, "__cpp_lib_to_underlying", true );
#else
	report( 2023, "__cpp_lib_to_underlying", false );
#endif
#if __cpp_lib_transformation_trait_aliases >= 201304L
	report( 2014, "__cpp_lib_transformation_trait_aliases", true );
#else
	report( 2014, "__cpp_lib_transformation_trait_aliases", false );
#endif
#if __cpp_lib_transparent_operators >= 201210L
	report( 2014, "__cpp_lib_transparent_operators", true );
#else
	report( 2014, "__cpp_lib_transparent_operators", false );
#endif
#if __cpp_lib_tuple_element_t >= 201402L
	report( 2014, "__cpp_lib_tuple_element_t", true );
#else
	report( 2014, "__cpp_lib_tuple_element_t", false );
#endif
#if __cpp_lib_tuples_by_type >= 201304L
	report( 2014, "__cpp_lib_tuples_by_type", true );
#else
	report( 2014, "__cpp_lib_tuples_by_type", false );
#endif
#if __cpp_lib_type_identity >= 201806L
	report( 2020, "__cpp_lib_type_identity", true );
#else
	report( 2020, "__cpp_lib_type_identity", false );
#endif
#if __cpp_lib_type_trait_variable_templates >= 201510L
	report( 2017, "__cpp_lib_type_trait_variable_templates", true );
#else
	report( 2017, "__cpp_lib_type_trait_variable_templates", false );
#endif
#if __cpp_lib_uncaught_exceptions >= 201411L
	report( 2017, "__cpp_lib_uncaught_exceptions", true );
#else
	report( 2017, "__cpp_lib_uncaught_exceptions", false );
#endif
#if __cpp_lib_unordered_map_try_emplace >= 201411L
	report( 2017, "__cpp_lib_unordered_map_try_emplace", true );
#else
	report( 2017, "__cpp_lib_unordered_map_try_emplace", false );
#endif
#if __cpp_lib_unwrap_ref >= 201811L
	report( 2020, "__cpp_lib_unwrap_ref", true );
#else
	report( 2020, "__cpp_lib_unwrap_ref", false );
#endif
#if __cpp_lib_variant >= 201606L
	report( 2017, "__cpp_lib_variant", true );
#else
	report( 2017, "__cpp_lib_variant", false );
#endif
#if __cpp_lib_void_t >= 201411L
	report( 2017, "__cpp_lib_void_t", true );
#else
	report( 2017, "__cpp_lib_void_t", false );
#endif
#if __cpp_named_character_escape >= 202207L
	report( 2023, "__cpp_named_character_escape", true );
#else
	report( 2023, "__cpp_named_character_escape", false );
#endif
#if __cpp_auto_cast >= 202110L
	report( 2023, "__cpp_auto_cast", true );
#else
	report( 2023, "__cpp_auto_cast", false );
#endif


}
