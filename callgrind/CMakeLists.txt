add_executable(callgrind callgrind.cpp func_a.cpp)

add_custom_target(run-callgrind-example
    COMMAND ${VALGRIND} --tool=callgrind --callgrind-out-file=callgrind.out $<TARGET_FILE:callgrind>
    DEPENDS callgrind
    USES_TERMINAL
)

find_program(CALLGRIND_ANNOTATE callgrind_annotate)
if(CALLGRIND_ANNOTATE)
    add_custom_target(run-callgrind_annotate-example
        COMMAND ${CALLGRIND_ANNOTATE} callgrind.out
        USES_TERMINAL
    )
endif()

find_program(KCACHEGRIND kcachegrind)
if(KCACHEGRIND)
    add_custom_target(run-kcachegrind-example
        COMMAND ${KCACHEGRIND} callgrind.out
        USES_TERMINAL
    )
endif()
