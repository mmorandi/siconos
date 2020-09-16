include(tools4tests)

if(WITH_${COMPONENT}_TESTING)
  if(HAS_FORTRAN)
    begin_tests(netlib/odepack/test DEPS "LAPACK::LAPACK")
    set(odepacktests DLSODES DLSODAR DLSODI DLSODPK
      DLSODA DLSODE DLSODIS DLSODKR DLSOIBT)
    foreach(odetest IN LISTS odepacktests)
      new_test(SOURCES ${odetest}-test.f)
      target_compile_options(${odetest}-test PRIVATE "-w")
      target_compile_options(${odetest}-test PRIVATE $<$<AND:$<VERSION_GREATER_EQUAL:${CMAKE_Fortran_COMPILER_VERSION},10>,$<COMPILE_LANGUAGE:Fortran>>:-fallow-argument-mismatch>)

    endforeach()
    if(WITH_CXX)
      new_test(NAME odepacktest10 SOURCES test-funcC-inC.cpp funC.cpp
        DEPS "LAPACK::LAPACK")
      target_compile_options(odepacktest10 PRIVATE "-w")
    endif(WITH_CXX)

    begin_tests(hairer/test DEPS "LAPACK::LAPACK")
    new_test(NAME dr_iso1 SOURCES dr_iso.f)
    target_compile_options(dr_iso1 PRIVATE "-w")
    new_test(NAME dr_iso1sp SOURCES dr_isosp.f)
    target_compile_options(dr_iso1sp PRIVATE "-w")
    new_test(SOURCES dr1_radau5.f)
    new_test(SOURCES dr2_radau5.f)
    target_compile_options(dr2_radau5 PRIVATE "-w")
    new_test(SOURCES dr_radau.f)
    new_test(SOURCES dr_radaup.f)
    target_compile_options(dr_radaup PRIVATE "-w")
    new_test(SOURCES dr_rodas.f)
    target_compile_options(dr_rodas PRIVATE "-w")
    new_test(SOURCES dr_seulex.f)
    target_compile_options(dr_seulex PRIVATE "-w")
  endif()

endif()
