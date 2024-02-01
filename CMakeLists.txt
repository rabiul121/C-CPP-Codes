cmake_minimum_required(VERSION 3.28)
project(C_Codes C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Codes
        10_math.c
        11_circle.c
        1_HelloWorld.c
        2_Scape_Characters.c
        3_comments.c
        4_data_types.c
        4_variables.c
        5_format_specifier.c
        6_constant.c
        7_arithmatic_operator.c
        8_augmented_operators.c
        9_user_input.c)
