# Install script for directory: /home/msingh9/vandle18/YSO_trace_analysis/merger

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/msingh9/vandle18/YSO_trace_analysis/merger/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/trace_analyzer_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger/source:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger_sparse_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger/source:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/anamerger_sparse_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/correction_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger/source:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/correction_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/merger_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/merger_pid")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_pid")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/merger_beta")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta"
         OLD_RPATH "/opt/root/6.18.04/lib:/opt/yaml-cpp/lib/cmake/yaml-cpp/../../../lib:/anaerger/source:/tree_dump:/trace_analyzer:/opt/yaml-cpp/lib:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source:/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer:/home/msingh9/vandle18/YSO_trace_analysis/merger/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/merger_beta")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/libmerger_data_dic.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmerger_data_dic.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/libMergerData_rdict.pcm")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/msingh9/vandle18/YSO_trace_analysis/merger/build/source/cmake_install.cmake")
  include("/home/msingh9/vandle18/YSO_trace_analysis/merger/build/anamerger/cmake_install.cmake")
  include("/home/msingh9/vandle18/YSO_trace_analysis/merger/build/trace_analyzer/cmake_install.cmake")
  include("/home/msingh9/vandle18/YSO_trace_analysis/merger/build/share/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/msingh9/vandle18/YSO_trace_analysis/merger/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
