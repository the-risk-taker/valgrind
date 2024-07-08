add_executable(cachegrind cachegrind.cpp func_a.cpp)

add_custom_target(run-cachegrind-example
    COMMAND ${VALGRIND} --tool=cachegrind --cache-sim=yes --branch-sim=yes --cachegrind-out-file=cachegrind.out $<TARGET_FILE:cachegrind>
    DEPENDS cachegrind
    USES_TERMINAL
)

find_program(CG_ANNOTATE cg_annotate)
if(CG_ANNOTATE)
    add_custom_target(run-cgannotate-example
        COMMAND ${CG_ANNOTATE} cachegrind.out
        USES_TERMINAL
    )
endif()
