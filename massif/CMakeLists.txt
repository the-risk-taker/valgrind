add_executable(massif massif.c)

add_custom_target(run-massif-example
    COMMAND ${VALGRIND} --tool=massif --time-unit=B --massif-out-file=massif.out $<TARGET_FILE:massif>
    DEPENDS massif
    USES_TERMINAL
)

find_program(MS_PRINT ms_print)
if(MS_PRINT)
    add_custom_target(run-ms_print-example
        COMMAND ${MS_PRINT} massif.out
        USES_TERMINAL
    )
endif()
