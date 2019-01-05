// The MIT License (MIT)
//
// Copyright (c) 2019 Darrell Wright
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files( the "Software" ), to
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

int main( ) {
// C++ 20
#if defined( __cpp_impl_destroying_delete )
	report( 2020, "__cpp_impl_destroying_delete", true );
#else
	report( 2020, "__cpp_impl_destroying_delete", false );
#endif

#if defined( __cpp_lib_destroying_delete )
	report( 2020, "__cpp_lib_destroying_delete", true );
#else
	report( 2020, "__cpp_lib_destroying_delete", false );
#endif

#if defined( __cpp_char8_t )
	report( 2020, "__cpp_char8_t", true );
#else
	report( 2020, "__cpp_char8_t", false );
#endif

#if defined( __cpp_impl_three_way_comparison )
	report( 2020, "__cpp_impl_three_way_comparison", true );
#else
	report( 2020, "__cpp_impl_three_way_comparison", false );
#endif

#if defined( __cpp_lib_three_way_comparison )
	report( 2020, "__cpp_lib_three_way_comparison", true );
#else
	report( 2020, "__cpp_lib_three_way_comparison", false );
#endif

#if defined( __cpp_conditional_explicit )
	report( 2020, "__cpp_conditional_explicit", true );
#else
	report( 2020, "__cpp_conditional_explicit", false );
#endif

#if __has_cpp_attribute( assert )
	report( 2020, "__has_cpp_attribute(assert)", true );
#else
	report( 2020, "__has_cpp_attribute(assert)", false );
#endif

#if __has_cpp_attribute( ensures )
	report( 2020, "__has_cpp_attribute(ensures)", true );
#else
	report( 2020, "__has_cpp_attribute(ensures)", false );
#endif

#if __has_cpp_attribute( expects )
	report( 2020, "__has_cpp_attribute(expects)", true );
#else
	report( 2020, "__has_cpp_attribute(expects)", false );
#endif

#if __has_cpp_attribute( likely )
	report( 2020, "__has_cpp_attribute(likely)", true );
#else
	report( 2020, "__has_cpp_attribute(likely)", false );
#endif

#if __has_cpp_attribute( unlikely )
	report( 2020, "__has_cpp_attribute(unlikely)", true );
#else
	report( 2020, "__has_cpp_attribute(unlikely)", false );
#endif

#if __has_cpp_attribute( no_unique_address )
	report( 2020, "__has_cpp_attribute(no_unique_address)", true );
#else
	report( 2020, "__has_cpp_attribute(no_unique_address)", false );
#endif

#if defined( __cpp_nontype_template_parameter_class )
	report( 2020, "__cpp_nontype_template_parameter_class", true );
#else
	report( 2020, "__cpp_nontype_template_parameter_class", false );
#endif

#if defined( __cpp_lib_char8_t )
	report( 2020, "__cpp_lib_char8_t", true );
#else
	report( 2020, "__cpp_lib_char8_t", false );
#endif

#if defined( __cpp_lib_concepts )
	report( 2020, "__cpp_lib_concepts", true );
#else
	report( 2020, "__cpp_lib_concepts", false );
#endif

#if defined( __cpp_lib_constexpr_swap_algorithms )
	report( 2020, "__cpp_lib_constexpr_swap_algorithms", true );
#else
	report( 2020, "__cpp_lib_constexpr_swap_algorithms", false );
#endif

#if defined( __cpp_lib_constexpr_misc )
	report( 2020, "__cpp_lib_constexpr_misc", true );
#else
	report( 2020, "__cpp_lib_constexpr_misc", false );
#endif

#if defined( __cpp_lib_bind_front )
	report( 2020, "__cpp_lib_bind_front", true );
#else
	report( 2020, "__cpp_lib_bind_front", false );
#endif

#if defined( __cpp_lib_is_constant_evaluated )
	report( 2020, "__cpp_lib_is_constant_evaluated", true );
#else
	report( 2020, "__cpp_lib_is_constant_evaluated", false );
#endif

#if defined( __cpp_lib_erase_if )
	report( 2020, "__cpp_lib_erase_if", true );
#else
	report( 2020, "__cpp_lib_erase_if", false );
#endif

#if defined( __cpp_lib_list_remove_return_type )
	report( 2020, "__cpp_lib_list_remove_return_type", true );
#else
	report( 2020, "__cpp_lib_list_remove_return_type", false );
#endif

#if defined( __cpp_lib_generic_unordered_lookup )
	report( 2020, "__cpp_lib_generic_unordered_lookup", true );
#else
	report( 2020, "__cpp_lib_generic_unordered_lookup", false );
#endif

#if defined( __cpp_lib_ranges )
	report( 2020, "__cpp_lib_ranges", true );
#else
	report( 2020, "__cpp_lib_ranges", false );
#endif

#if defined( __cpp_lib_bit_cast )
	report( 2020, "__cpp_lib_bit_cast", true );
#else
	report( 2020, "__cpp_lib_bit_cast", false );
#endif

#if defined( __cpp_lib_atomic_ref )
	report( 2020, "__cpp_lib_atomic_ref", true );
#else
	report( 2020, "__cpp_lib_atomic_ref", false );
#endif

	// C++ 2017

#if defined( __cpp_hex_float )
	report( 2017, "__cpp_hex_float", true );
#else
	report( 2017, "__cpp_hex_float", false );
#endif

#if defined( __cpp_inline_variables )
	report( 2017, "__cpp_inline_variables", true );
#else
	report( 2017, "__cpp_inline_variables", false );
#endif

#if defined( __cpp_aligned_new )
	report( 2017, "__cpp_aligned_new", true );
#else
	report( 2017, "__cpp_aligned_new", false );
#endif

#if defined( __cpp_guaranteed_copy_elision )
	report( 2017, "__cpp_guaranteed_copy_elision", true );
#else
	report( 2017, "__cpp_guaranteed_copy_elision", false );
#endif

#if defined( __cpp_noexcept_function_type )
	report( 2017, "__cpp_noexcept_function_type", true );
#else
	report( 2017, "__cpp_noexcept_function_type", false );
#endif

#if defined( __cpp_fold_expressions )
	report( 2017, "__cpp_fold_expressions", true );
#else
	report( 2017, "__cpp_fold_expressions", false );
#endif

#if defined( __cpp_capture_star_this )
	report( 2017, "__cpp_capture_star_this", true );
#else
	report( 2017, "__cpp_capture_star_this", false );
#endif

#if defined( __cpp_constexpr ) && __cpp_constexpr >= 201603
	report( 2017, "__cpp_constexpr", true );
#else
	report( 2017, "__cpp_constexpr", false );
#endif

#if defined( __cpp_if_constexpr )
	report( 2017, "__cpp_if_constexpr", true );
#else
	report( 2017, "__cpp_if_constexpr", false );
#endif
#if defined( __cpp_range_based_for ) && __cpp_range_based_for >= 201603
	report( 2017, "__cpp_range_based_for", true );
#else
	report( 2017, "__cpp_range_based_for", false );
#endif
#if defined( __cpp_static_assert ) && __cpp_static_assert >= 201411
	report( 2017, "__cpp_static_assert", true );
#else
	report( 2017, "__cpp_static_assert", false );
#endif

#if defined( __cpp_deduction_guides )
	report( 2017, "__cpp_deduction_guides", true );
#else
	report( 2017, "__cpp_deduction_guides", false );
#endif

#if defined( __cpp_nontype_template_parameter_auto )
	report( 2017, "__cpp_nontype_template_parameter_auto", true );
#else
	report( 2017, "__cpp_nontype_template_parameter_auto", false );
#endif

#if defined( __cpp_namespace_attributes )
	report( 2017, "__cpp_namespace_attributes", true );
#else
	report( 2017, "__cpp_namespace_attributes", false );
#endif

#if defined( __cpp_enumerator_attributes )
	report( 2017, "__cpp_enumerator_attributes", true );
#else
	report( 2017, "__cpp_enumerator_attributes", false );
#endif
#if defined( __cpp_inheriting_constructors ) &&                                \
  __cpp_inheriting_constructors >= 201511
	report( 2017, "__cpp_inheriting_constructors", true );
#else
	report( 2017, "__cpp_inheriting_constructors", false );
#endif

#if defined( __cpp_variadic_using )
	report( 2017, "__cpp_variadic_using", true );
#else
	report( 2017, "__cpp_variadic_using", false );
#endif

#if __has_cpp_attribute( fallthrough )
	report( 2017, "__has_cpp_attribute(fallthrough)", true );
#else
	report( 2017, "__has_cpp_attribute(fallthrough)", false );
#endif

#if __has_cpp_attribute( nodiscard )
	report( 2017, "__has_cpp_attribute(nodiscard)", true );
#else
	report( 2017, "__has_cpp_attribute(nodiscard)", false );
#endif

#if __has_cpp_attribute( maybe_unused )
	report( 2017, "__has_cpp_attribute(maybe_unused)", true );
#else
	report( 2017, "__has_cpp_attribute(maybe_unused)", false );
#endif

#if defined( __cpp_structured_bindings )
	report( 2017, "__cpp_structured_bindings", true );
#else
	report( 2017, "__cpp_structured_bindings", false );
#endif

#if defined( __cpp_aggregate_bases )
	report( 2017, "__cpp_aggregate_bases", true );
#else
	report( 2017, "__cpp_aggregate_bases", false );
#endif

#if defined( __cpp_nontype_template_args )
	report( 2017, "__cpp_nontype_template_args", true );
#else
	report( 2017, "__cpp_nontype_template_args", false );
#endif

#if defined( __cpp_template_template_args )
	report( 2017, "__cpp_template_template_args", true );
#else
	report( 2017, "__cpp_template_template_args", false );
#endif

#if defined( __cpp_lib_byte )
	report( 2017, "__cpp_lib_byte", true );
#else
	report( 2017, "__cpp_lib_byte", false );
#endif

#if defined( __cpp_lib_hardware_interference_size )
	report( 2017, "__cpp_lib_hardware_interference_size", true );
#else
	report( 2017, "__cpp_lib_hardware_interference_size", false );
#endif

#if defined( __cpp_lib_launder )
	report( 2017, "__cpp_lib_launder", true );
#else
	report( 2017, "__cpp_lib_launder", false );
#endif

#if defined( __cpp_lib_uncaught_exceptions )
	report( 2017, "__cpp_lib_uncaught_exceptions", true );
#else
	report( 2017, "__cpp_lib_uncaught_exceptions", false );
#endif

#if defined( __cpp_lib_as_const )
	report( 2017, "__cpp_lib_as_const", true );
#else
	report( 2017, "__cpp_lib_as_const", false );
#endif

#if defined( __cpp_lib_make_from_tuple )
	report( 2017, "__cpp_lib_make_from_tuple", true );
#else
	report( 2017, "__cpp_lib_make_from_tuple", false );
#endif

#if defined( __cpp_lib_apply )
	report( 2017, "__cpp_lib_apply", true );
#else
	report( 2017, "__cpp_lib_apply", false );
#endif

#if defined( __cpp_lib_optional )
	report( 2017, "__cpp_lib_optional", true );
#else
	report( 2017, "__cpp_lib_optional", false );
#endif

#if defined( __cpp_lib_variant )
	report( 2017, "__cpp_lib_variant", true );
#else
	report( 2017, "__cpp_lib_variant", false );
#endif

#if defined( __cpp_lib_any )
	report( 2017, "__cpp_lib_any", true );
#else
	report( 2017, "__cpp_lib_any", false );
#endif

#if defined( __cpp_lib_addressof_constexpr )
	report( 2017, "__cpp_lib_addressof_constexpr", true );
#else
	report( 2017, "__cpp_lib_addressof_constexpr", false );
#endif

#if defined( __cpp_lib_raw_memory_algorithms )
	report( 2017, "__cpp_lib_raw_memory_algorithms", true );
#else
	report( 2017, "__cpp_lib_raw_memory_algorithms", false );
#endif
#if defined( __cpp_lib_transparent_operators ) &&                              \
  __cpp_lib_transparent_operators >= 201510
	report( 2017, "__cpp_lib_transparent_operators", true );
#else
	report( 2017, "__cpp_lib_transparent_operators", false );
#endif

#if defined( __cpp_lib_enable_shared_from_this )
	report( 2017, "__cpp_lib_enable_shared_from_this", true );
#else
	report( 2017, "__cpp_lib_enable_shared_from_this", false );
#endif

#if defined( __cpp_lib_shared_ptr_weak_type )
	report( 2017, "__cpp_lib_shared_ptr_weak_type", true );
#else
	report( 2017, "__cpp_lib_shared_ptr_weak_type", false );
#endif

#if defined( __cpp_lib_shared_ptr_arrays )
	report( 2017, "__cpp_lib_shared_ptr_arrays", true );
#else
	report( 2017, "__cpp_lib_shared_ptr_arrays", false );
#endif

#if defined( __cpp_lib_memory_resource )
	report( 2017, "__cpp_lib_memory_resource", true );
#else
	report( 2017, "__cpp_lib_memory_resource", false );
#endif

#if defined( __cpp_lib_boyer_moore_searcher )
	report( 2017, "__cpp_lib_boyer_moore_searcher", true );
#else
	report( 2017, "__cpp_lib_boyer_moore_searcher", false );
#endif

#if defined( __cpp_lib_invoke )
	report( 2017, "__cpp_lib_invoke", true );
#else
	report( 2017, "__cpp_lib_invoke", false );
#endif

#if defined( __cpp_lib_not_fn )
	report( 2017, "__cpp_lib_not_fn", true );
#else
	report( 2017, "__cpp_lib_not_fn", false );
#endif

#if defined( __cpp_lib_void_t )
	report( 2017, "__cpp_lib_void_t", true );
#else
	report( 2017, "__cpp_lib_void_t", false );
#endif

#if defined( __cpp_lib_bool_constant )
	report( 2017, "__cpp_lib_bool_constant", true );
#else
	report( 2017, "__cpp_lib_bool_constant", false );
#endif

#if defined( __cpp_lib_type_trait_variable_templates )
	report( 2017, "__cpp_lib_type_trait_variable_templates", true );
#else
	report( 2017, "__cpp_lib_type_trait_variable_templates", false );
#endif

#if defined( __cpp_lib_logical_traits )
	report( 2017, "__cpp_lib_logical_traits", true );
#else
	report( 2017, "__cpp_lib_logical_traits", false );
#endif

#if defined( __cpp_lib_is_swappable )
	report( 2017, "__cpp_lib_is_swappable", true );
#else
	report( 2017, "__cpp_lib_is_swappable", false );
#endif

#if defined( __cpp_lib_is_invocable )
	report( 2017, "__cpp_lib_is_invocable", true );
#else
	report( 2017, "__cpp_lib_is_invocable", false );
#endif

#if defined( __cpp_lib_has_unique_object_representations )
	report( 2017, "__cpp_lib_has_unique_object_representations", true );
#else
	report( 2017, "__cpp_lib_has_unique_object_representations", false );
#endif

#if defined( __cpp_lib_is_aggregate )
	report( 2017, "__cpp_lib_is_aggregate", true );
#else
	report( 2017, "__cpp_lib_is_aggregate", false );
#endif

#if defined( __cpp_lib_chrono )
	report( 2017, "__cpp_lib_chrono", true );
#else
	report( 2017, "__cpp_lib_chrono", false );
#endif

#if defined( __cpp_lib_execution )
	report( 2017, "__cpp_lib_execution", true );
#else
	report( 2017, "__cpp_lib_execution", false );
#endif

#if defined( __cpp_lib_parallel_algorithm )
	report( 2017, "__cpp_lib_parallel_algorithm", true );
#else
	report( 2017, "__cpp_lib_parallel_algorithm", false );
#endif

#if defined( __cpp_lib_to_chars )
	report( 2017, "__cpp_lib_to_chars", true );
#else
	report( 2017, "__cpp_lib_to_chars", false );
#endif

#if defined( __cpp_lib_string_view )
	report( 2017, "__cpp_lib_string_view", true );
#else
	report( 2017, "__cpp_lib_string_view", false );
#endif

#if defined( __cpp_lib_allocator_traits_is_always_equal )
	report( 2017, "__cpp_lib_allocator_traits_is_always_equal", true );
#else
	report( 2017, "__cpp_lib_allocator_traits_is_always_equal", false );
#endif

#if defined( __cpp_lib_incomplete_container_elements )
	report( 2017, "__cpp_lib_incomplete_container_elements", true );
#else
	report( 2017, "__cpp_lib_incomplete_container_elements", false );
#endif

#if defined( __cpp_lib_map_try_emplace )
	report( 2017, "__cpp_lib_map_try_emplace", true );
#else
	report( 2017, "__cpp_lib_map_try_emplace", false );
#endif

#if defined( __cpp_lib_unordered_map_try_emplace )
	report( 2017, "__cpp_lib_unordered_map_try_emplace", true );
#else
	report( 2017, "__cpp_lib_unordered_map_try_emplace", false );
#endif

#if defined( __cpp_lib_node_extract )
	report( 2017, "__cpp_lib_node_extract", true );
#else
	report( 2017, "__cpp_lib_node_extract", false );
#endif

#if defined( __cpp_lib_array_constexpr )
	report( 2017, "__cpp_lib_array_constexpr", true );
#else
	report( 2017, "__cpp_lib_array_constexpr", false );
#endif

#if defined( __cpp_lib_nonmember_container_access )
	report( 2017, "__cpp_lib_nonmember_container_access", true );
#else
	report( 2017, "__cpp_lib_nonmember_container_access", false );
#endif

#if defined( __cpp_lib_sample )
	report( 2017, "__cpp_lib_sample", true );
#else
	report( 2017, "__cpp_lib_sample", false );
#endif

#if defined( __cpp_lib_clamp )
	report( 2017, "__cpp_lib_clamp", true );
#else
	report( 2017, "__cpp_lib_clamp", false );
#endif

#if defined( __cpp_lib_gcd_lcm )
	report( 2017, "__cpp_lib_gcd_lcm", true );
#else
	report( 2017, "__cpp_lib_gcd_lcm", false );
#endif

#if defined( __cpp_lib_hypot )
	report( 2017, "__cpp_lib_hypot", true );
#else
	report( 2017, "__cpp_lib_hypot", false );
#endif

#if defined( __cpp_lib_math_special_functions )
	report( 2017, "__cpp_lib_math_special_functions", true );
#else
	report( 2017, "__cpp_lib_math_special_functions", false );
#endif

#if defined( __cpp_lib_filesystem )
	report( 2017, "__cpp_lib_filesystem", true );
#else
	report( 2017, "__cpp_lib_filesystem", false );
#endif

#if defined( __cpp_lib_atomic_is_always_lock_free )
	report( 2017, "__cpp_lib_atomic_is_always_lock_free", true );
#else
	report( 2017, "__cpp_lib_atomic_is_always_lock_free", false );
#endif

#if defined( __cpp_lib_shared_mutex )
	report( 2017, "__cpp_lib_shared_mutex", true );
#else
	report( 2017, "__cpp_lib_shared_mutex", false );
#endif

#if defined( __cpp_lib_scoped_lock )
	report( 2017, "__cpp_lib_scoped_lock", true );
#else
	report( 2017, "__cpp_lib_scoped_lock", false );
#endif

	// C++ 2014
#if defined( __cpp_binary_literals )
	report( 2014, "__cpp_binary_literals", true );
#else
	report( 2014, "__cpp_binary_literals", false );
#endif

#if defined( __cpp_init_captures )
	report( 2014, "__cpp_init_captures", true );
#else
	report( 2014, "__cpp_init_captures", false );
#endif

#if defined( __cpp_generic_lambdas )
	report( 2014, "__cpp_generic_lambdas", true );
#else
	report( 2014, "__cpp_generic_lambdas", false );
#endif

#if defined( __cpp_sized_deallocation )
	report( 2014, "__cpp_sized_deallocation", true );
#else
	report( 2014, "__cpp_sized_deallocation", false );
#endif

#if defined( __cpp_constexpr ) && __cpp_constexpr >= 201304
	report( 2014, "__cpp_constexpr", true );
#else
	report( 2014, "__cpp_constexpr", false );
#endif

#if defined( __cpp_decltype_auto )
	report( 2014, "__cpp_decltype_auto", true );
#else
	report( 2014, "__cpp_decltype_auto", false );
#endif

#if defined( __cpp_return_type_deduction )
	report( 2014, "__cpp_return_type_deduction", true );
#else
	report( 2014, "__cpp_return_type_deduction", false );
#endif

#if __has_cpp_attribute( deprecated )
	report( 2014, "__has_cpp_attribute(deprecated)", true );
#else
	report( 2014, "__has_cpp_attribute(deprecated)", false );
#endif

#if defined( __cpp_aggregate_nsdmi )
	report( 2014, "__cpp_aggregate_nsdmi", true );
#else
	report( 2014, "__cpp_aggregate_nsdmi", false );
#endif

#if defined( __cpp_variable_templates )
	report( 2014, "__cpp_variable_templates", true );
#else
	report( 2014, "__cpp_variable_templates", false );
#endif

#if defined( __cpp_lib_integer_sequence )
	report( 2014, "__cpp_lib_integer_sequence", true );
#else
	report( 2014, "__cpp_lib_integer_sequence", false );
#endif

#if defined( __cpp_lib_exchange_function )
	report( 2014, "__cpp_lib_exchange_function", true );
#else
	report( 2014, "__cpp_lib_exchange_function", false );
#endif

#if defined( __cpp_lib_tuples_by_type )
	report( 2014, "__cpp_lib_tuples_by_type", true );
#else
	report( 2014, "__cpp_lib_tuples_by_type", false );
#endif

#if defined( __cpp_lib_tuple_element_t )
	report( 2014, "__cpp_lib_tuple_element_t", true );
#else
	report( 2014, "__cpp_lib_tuple_element_t", false );
#endif

#if defined( __cpp_lib_make_unique )
	report( 2014, "__cpp_lib_make_unique", true );
#else
	report( 2014, "__cpp_lib_make_unique", false );
#endif

#if defined( __cpp_lib_transparent_operators )
	report( 2014, "__cpp_lib_transparent_operators", true );
#else
	report( 2014, "__cpp_lib_transparent_operators", false );
#endif

#if defined( __cpp_lib_integral_constant_callable )
	report( 2014, "__cpp_lib_integral_constant_callable", true );
#else
	report( 2014, "__cpp_lib_integral_constant_callable", false );
#endif

#if defined( __cpp_lib_transformation_trait_aliases )
	report( 2014, "__cpp_lib_transformation_trait_aliases", true );
#else
	report( 2014, "__cpp_lib_transformation_trait_aliases", false );
#endif

#if defined( __cpp_lib_result_of_sfinae )
	report( 2014, "__cpp_lib_result_of_sfinae", true );
#else
	report( 2014, "__cpp_lib_result_of_sfinae", false );
#endif

#if defined( __cpp_lib_is_final )
	report( 2014, "__cpp_lib_is_final", true );
#else
	report( 2014, "__cpp_lib_is_final", false );
#endif

#if defined( __cpp_lib_is_null_pointer )
	report( 2014, "__cpp_lib_is_null_pointer", true );
#else
	report( 2014, "__cpp_lib_is_null_pointer", false );
#endif

#if defined( __cpp_lib_chrono_udls )
	report( 2014, "__cpp_lib_chrono_udls", true );
#else
	report( 2014, "__cpp_lib_chrono_udls", false );
#endif

#if defined( __cpp_lib_string_udls )
	report( 2014, "__cpp_lib_string_udls", true );
#else
	report( 2014, "__cpp_lib_string_udls", false );
#endif

#if defined( __cpp_lib_generic_associative_lookup )
	report( 2014, "__cpp_lib_generic_associative_lookup", true );
#else
	report( 2014, "__cpp_lib_generic_associative_lookup", false );
#endif

#if defined( __cpp_lib_null_iterators )
	report( 2014, "__cpp_lib_null_iterators", true );
#else
	report( 2014, "__cpp_lib_null_iterators", false );
#endif

#if defined( __cpp_lib_make_reverse_iterator )
	report( 2014, "__cpp_lib_make_reverse_iterator", true );
#else
	report( 2014, "__cpp_lib_make_reverse_iterator", false );
#endif

#if defined( __cpp_lib_robust_nonmodifying_seq_ops )
	report( 2014, "__cpp_lib_robust_nonmodifying_seq_ops", true );
#else
	report( 2014, "__cpp_lib_robust_nonmodifying_seq_ops", false );
#endif

#if defined( __cpp_lib_complex_udls )
	report( 2014, "__cpp_lib_complex_udls", true );
#else
	report( 2014, "__cpp_lib_complex_udls", false );
#endif

#if defined( __cpp_lib_quoted_string_io )
	report( 2014, "__cpp_lib_quoted_string_io", true );
#else
	report( 2014, "__cpp_lib_quoted_string_io", false );
#endif

#if __has_include( <shared_mutex>)
	report( 2014, "__has_include(<shared_mutex>)", true );
#else
	report( 2014, "__has_include(<shared_mutex>)", false );
#endif

#if defined( __cpp_lib_shared_timed_mutex )
	report( 2014, "__cpp_lib_shared_timed_mutex", true );
#else
	report( 2014, "__cpp_lib_shared_timed_mutex", false );
#endif
// C++ 2011
#if defined( __cpp_unicode_characters )
	report( 2011, "__cpp_unicode_characters", true );
#else
	report( 2011, "__cpp_unicode_characters", false );
#endif
#if defined( __cpp_raw_strings )
	report( 2011, "__cpp_raw_strings", true );
#else
	report( 2011, "__cpp_raw_strings", false );
#endif
#if defined( __cpp_unicode_literals )
	report( 2011, "__cpp_unicode_literals", true );
#else
	report( 2011, "__cpp_unicode_literals", false );
#endif
#if defined( __cpp_user_defined_literals )
	report( 2011, "__cpp_user_defined_literals", true );
#else
	report( 2011, "__cpp_user_defined_literals", false );
#endif
#if defined( __cpp_threadsafe_static_init )
	report( 2011, "__cpp_threadsafe_static_init", true );
#else
	report( 2011, "__cpp_threadsafe_static_init", false );
#endif
#if defined( __cpp_lambdas )
	report( 2011, "__cpp_lambdas", true );
#else
	report( 2011, "__cpp_lambdas", false );
#endif
#if defined( __cpp_constexpr )
	report( 2011, "__cpp_constexpr", true );
#else
	report( 2011, "__cpp_constexpr", false );
#endif
#if defined( __cpp_range_based_for )
	report( 2011, "__cpp_range_based_for", true );
#else
	report( 2011, "__cpp_range_based_for", false );
#endif
#if defined( __cpp_static_assert )
	report( 2011, "__cpp_static_assert", true );
#else
	report( 2011, "__cpp_static_assert", false );
#endif
#if defined( __cpp_decltype )
	report( 2011, "__cpp_decltype", true );
#else
	report( 2011, "__cpp_decltype", false );
#endif
#if defined( __cpp_attributes )
	report( 2011, "__cpp_attributes", true );
#else
	report( 2011, "__cpp_attributes", false );
#endif
#if __has_cpp_attribute( noreturn )
	report( 2011, "__has_cpp_attribute(noreturn)", true );
#else
	report( 2011, "__has_cpp_attribute(noreturn)", false );
#endif
#if __has_cpp_attribute( carries_dependency )
	report( 2011, "__has_cpp_attribute(carries_dependency)", true );
#else
	report( 2011, "__has_cpp_attribute(carries_dependency)", false );
#endif
#if defined( __cpp_rvalue_references )
	report( 2011, "__cpp_rvalue_references", true );
#else
	report( 2011, "__cpp_rvalue_references", false );
#endif
#if defined( __cpp_variadic_templates )
	report( 2011, "__cpp_variadic_templates", true );
#else
	report( 2011, "__cpp_variadic_templates", false );
#endif
#if defined( __cpp_initializer_lists )
	report( 2011, "__cpp_initializer_lists", true );
#else
	report( 2011, "__cpp_initializer_lists", false );
#endif
#if defined( __cpp_explicit_conversion ) 
	report( 2011, "__cpp_explicit_conversion", true );
#else
	report( 2011, "__cpp_explicit_conversion", false );
#endif
#if defined( __cpp_explicit_conversions )
	report( 2011, "__cpp_explicit_conversions", true );
#else
	report( 2011, "__cpp_explicit_conversions", false );
#endif

#if defined( __cpp_delegating_constructors )
	report( 2011, "__cpp_delegating_constructors", true );
#else
	report( 2011, "__cpp_delegating_constructors", false );
#endif
#if defined( __cpp_nsdmi )
	report( 2011, "__cpp_nsdmi", true );
#else
	report( 2011, "__cpp_nsdmi", false );
#endif
#if defined( __cpp_inheriting_constructors )
	report( 2011, "__cpp_inheriting_constructors", true );
#else
	report( 2011, "__cpp_inheriting_constructors", false );
#endif
#if defined( __cpp_ref_qualifiers )
	report( 2011, "__cpp_ref_qualifiers", true );
#else
	report( 2011, "__cpp_ref_qualifiers", false );
#endif
#if defined( __cpp_alias_templates )
	report( 2011, "__cpp_alias_templates", true );
#else
	report( 2011, "__cpp_alias_templates", false );
#endif
#if defined( __cpp_rtti )
	report( 1998, "__cpp_rtti", true );
#else
	report( 1998, "__cpp_rtti", false );
#endif
#if defined( __cpp_exceptions )
	report( 1998, "__cpp_exceptions", true );
#else
	report( 1998, "__cpp_exceptions", false );
#endif
	return 0;
}
