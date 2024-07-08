add_executable(memcheck memcheck.cpp)

add_custom_target(run-memcheck-example
    COMMAND ${VALGRIND} --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --error-exitcode=1 -s $<TARGET_FILE:memcheck>
    DEPENDS memcheck
    USES_TERMINAL
)
