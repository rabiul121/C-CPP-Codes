cmake_minimum_required(VERSION 3.27)
project(C_Codes C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Codes
        10_math.c
        11_circle.c
        12_hypotenuse.c
        13_if_statement.c
        14_switch.c
        15_temperature_converter.c
        16_calculator.c
        17_logical_operator.c
        18_OR_operator.c
        19_NOT_operator.c
        1_HelloWorld.c
        20_function.c
        21_parameters.c
        22_return.c
        23_ternary_operator.c
        24_function_prototype.c
        25_string.c
        26_for_loop.c
        27_while_loop.c
        28_do_while_loop.c
        29_nested_loop.c
        2_Scape_Characters.c
        30_break_continue.c
        3_comments.c
        4_data_types.c
        4_variables.c
        5_format_specifier.c
        6_constant.c
        7_arithmatic_operator.c
        8_augmented_operators.c
        9_user_input.c
        tempCodeRunnerFile.c
        31_array.c
        32_iterate_array_elements.c
        33_2D_array.c
        33_string_arrays.c
        34_value_swap.c
        35_sort_array.c
        36_struct.c
        37_typedef.c
        38_struct_array.c
        39_enum.c
        40_pseudo_random_number.c
        41_number_guessing_game.c
        42_quiz_game.c
        43_bitwise_operator.c
        44_memory.c
        45_pointers.c)
