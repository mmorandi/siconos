/* Siconos is a program dedicated to modeling, simulation and control
 * of non smooth dynamical systems.
 *
 * Copyright 2016 INRIA.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
char *** test_collection(int, char **);

char *** test_collection(int n_data_1, char ** data_collection_1)
{
  int n_test=150;
  int n_entry = 50;
  char *** test_nsgs = (char ***)malloc(n_test*sizeof(char **));

  for (int n =0 ; n <n_test ; n++)
  {
    test_nsgs[n] = (char **)malloc(n_entry*sizeof(char *));
  }

  int n =0;
  for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_AC);
    test_nsgs[n][2] = "1e-5";
    test_nsgs[n][3] = "10000";
    test_nsgs[n][4] = "0";
    test_nsgs[n][5] = "0";
    test_nsgs[n][6] = "0";
    test_nsgs[n][7] = "iparam";    
    test_nsgs[n][8] = "1";
    test_nsgs[n][9] = "1";
    test_nsgs[n][10] = "---"; 
    n++;
  }
  for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_AC_TEST);
    test_nsgs[n][2] = "1e-5";
    test_nsgs[n][3] = "10000";
    test_nsgs[n][4] = "0";
    test_nsgs[n][5] = "0";
    test_nsgs[n][6] = "0";
    test_nsgs[n][7] = "iparam";    
    test_nsgs[n][8] = "1";
    test_nsgs[n][9] = "1";
    test_nsgs[n][10] = "---"; 
    n++;
  }
  for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_AC);
    test_nsgs[n][2] = "1e-3";
    test_nsgs[n][3] = "1000";
    test_nsgs[n][4] = "---"; 
    n++;
  }
 
  for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_AC_TEST);
    test_nsgs[n][2] = "1e-3";
    test_nsgs[n][3] = "1000";
    test_nsgs[n][4] = "---"; 
    n++;
  }
   for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_FB);
    test_nsgs[n][2] = "1e-3";
    test_nsgs[n][3] = "1000";
    test_nsgs[n][4] = "---"; 
    n++;
  }
 
   for ( int d =0; d <n_data_1; d++)
  {
    test_nsgs[n][0] = data_collection_1[d];
    test_nsgs[n][1] = (char *)malloc(50*sizeof(char));
    sprintf(test_nsgs[n][1], "%d", SICONOS_FRICTION_3D_NSN_NM);
    test_nsgs[n][2] = "1e-3";
    test_nsgs[n][3] = "1000";
    test_nsgs[n][4] = "---"; 
    n++;
  }
 


  

  test_nsgs[n][0] ="---";
  return test_nsgs;

}
