add_executable(helgrind helgrind.cpp)

add_custom_target(run-helgrind-example
    COMMAND ${VALGRIND} --tool=helgrind --free-is-write=yes --track-lockorders=yes -s --error-exitcode=1 $<TARGET_FILE:helgrind>
    DEPENDS helgrind
    USES_TERMINAL
)
