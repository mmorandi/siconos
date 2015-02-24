#Please note that we are using lpsolve 5.5
FIND_PATH(LpSolve_INCLUDE_DIR lpsolve/lp_lib.h)

IF (NOT LpSolve_INCLUDE_DIR)
  MESSAGE(STATUS "Cannot find LPSOLVE headers")
ELSE()
  # debian nonsense: see https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=503314
  if(EXISTS "/etc/debian_version")
    FIND_LIBRARY(LpSolve_LIBRARY lpsolve55 PATH_SUFFIXES "lp_solve")
    IF(LpSolve_LIBRARY AND "${LpSolve_LIBRARY}" MATCHES ".a$" AND NOT I_WANT_STATIC_LPSOLVE)
      SET(LpSolve_LIBRARY FALSE)
    ENDIF()
  ELSE()
    FIND_LIBRARY(LpSolve_LIBRARY lpsolve55)
  ENDIF()
  
  IF (LpSolve_LIBRARY)
    GET_FILENAME_COMPONENT(LpSolve_LIBRARY_DIRS ${LpSolve_LIBRARY} PATH)
    GET_FILENAME_COMPONENT(LpSolve_LIBRARIES ${LpSolve_LIBRARY} NAME)
    GET_FILENAME_COMPONENT(LpSolve_LIBRARY_DIRS_DIR ${LpSolve_LIBRARY_DIRS} PATH)
    SET(LpSolve_FOUND 1)
  ELSE(LpSolve_LIBRARY)
    MESSAGE("Cannot find LPSOLVE libraries!")
  ENDIF (LpSolve_LIBRARY)
  IF (NOT LpSolve_FIND_QUIETLY)
    MESSAGE(STATUS "Found LpSolve: ${LpSolve_LIBRARY}")
    MESSAGE(STATUS "LpSolve_LIBRARIES: ${LpSolve_LIBRARIES}")
  ENDIF (NOT LpSolve_FIND_QUIETLY)
  
ENDIF (NOT LpSolve_INCLUDE_DIR)
