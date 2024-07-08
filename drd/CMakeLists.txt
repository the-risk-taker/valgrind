add_executable(drd drd.cpp)

add_custom_target(run-drd-example
    COMMAND ${VALGRIND} --tool=drd --free-is-write=yes -s --error-exitcode=1 $<TARGET_FILE:drd>
    DEPENDS drd
    USES_TERMINAL
)
