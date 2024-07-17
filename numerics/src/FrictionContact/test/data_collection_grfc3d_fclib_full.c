/* Siconos is a program dedicated to modeling, simulation and control
 * of non smooth dynamical systems.
 *
 * Copyright 2024 INRIA.
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

#include <stdlib.h>  // for malloc

#include "test_utils.h"  // for data_collection

const char **data_collection() {
  int n_data_1 = 600;

  const char **data_collection_1 = (const char **)malloc(n_data_1 * sizeof(const char *));
  int n_data = 0;

  // List of rolling problems
  // int listprob[3] = {0, 0, 1};
  int listprob[5] = {1, 1, 1, 0, 0};
  // int listprob[5] = {0, 0, 0, 0, 1};
  /* 0: Chute          #155  problems */  // 45 problems does not satisfy Slater's conditions
  /* 1: PrimitiveSoup  #171 problems */
  /* 2: SpheresPile    #200 problems */
  /*   TOTAL           #526 problems */

  if (listprob[0] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-4-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-18-28.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-20-38.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-27-50.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-29-54.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-31-61.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-32-64.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-33-67.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-55-126.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-58-118.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-63-138.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-69-150.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-79-180.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1206-nc-88-195.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1236-nc-93-199.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1260-nc-90-203.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1362-nc-98-213.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-155-283.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-161-292.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-164-298.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-172-296.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1590-nc-178-305.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1722-nc-196-327.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1746-nc-200-331.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1758-nc-204-333.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-203-355.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-206-364.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-214-366.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-223-376.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-227-375.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-239-391.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-267-428.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-275-431.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1974-nc-270-438.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2064-nc-273-451.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2154-nc-282-461.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2166-nc-285-462.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2232-nc-287-470.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-321-501.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-330-517.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-334-515.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-339-516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2358-nc-365-558.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2388-nc-354-561.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2394-nc-351-563.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2478-nc-358-568.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2622-nc-383-592.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2622-nc-385-591.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-388-602.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-420-620.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-424-621.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-429-636.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-430-630.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-445-644.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2718-nc-457-678.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2886-nc-468-693.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2928-nc-476-701.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3006-nc-488-708.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3036-nc-487-711.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-506-729.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-518-730.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-519-757.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-522-763.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-526-749.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-531-765.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3084-nc-566-798.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3234-nc-576-815.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3282-nc-579-819.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3360-nc-612-824.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3444-nc-599-829.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3450-nc-609-831.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3450-nc-610-832.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-605-844.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-627-871.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-629-867.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-641-864.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3588-nc-651-909.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3672-nc-677-918.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3690-nc-658-920.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-709-959.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-712-953.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-727-974.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-734-996.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-737-980.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-750-997.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3990-nc-767-1045.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4026-nc-780-1053.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4212-nc-827-1073.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-800-1094.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-803-1082.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-806-1080.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-809-1104.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-811-1089.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-814-1100.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-815-1093.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-845-1143.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-869-1159.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4296-nc-834-1172.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4464-nc-853-1208.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-872-1233.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-876-1230.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-902-1255.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-908-1269.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-911-1250.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-915-1271.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-919-1267.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-932-1277.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-934-1286.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4638-nc-938-1311.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4782-nc-916-1324.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4920-nc-950-1341.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-951-1424.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-960-1374.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-963-1375.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-989-1400.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5136-nc-969-1447.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5316-nc-993-1472.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-994-1482.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-998-1501.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1008-1495.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1012-1503.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1032-1525.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1033-1561.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1036-1534.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1073-1536.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5424-nc-1072-1576.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5622-nc-1101-1601.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5724-nc-1119-1614.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1108-1620.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1110-1625.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1132-1634.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1160-1658.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1173-1664.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1179-1654.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1181-1647.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1191-1666.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1192-1668.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1214-1681.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1233-1675.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5904-nc-1259-1707.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5940-nc-1249-1718.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5946-nc-1234-1719.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6120-nc-1289-1741.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1281-1756.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1302-1763.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1316-1797.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1322-1803.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6240-nc-1326-1829.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6246-nc-1329-1830.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6288-nc-1298-1834.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6438-nc-1341-1844.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1353-1865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1360-1868.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1361-1873.hdf5";  // pinfeas_2
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1372-1870.hdf5";

    // /* ========================================== Slater's conditions are not satisfied
    // ==========================================*/
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-756-1024.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-757-1022.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4398-nc-829-1192.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4416-nc-840-1202.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4554-nc-868-1211.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4590-nc-875-1214.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-976-1393.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-977-1391.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1303-1770.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1297-1766.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1373-1902.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1396-1913.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1398-1898.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1404-1923.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1409-1918.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1437-1933.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1444-1934.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1465-1930.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6612-nc-1467-1951.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6618-nc-1474-1953.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6780-nc-1416-1972.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6780-nc-1431-1973.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1461-1993.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1499-2029.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1511-2028.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1515-2047.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1518-2021.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1525-2049.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1530-2039.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1567-2055.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6912-nc-1584-2062.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6936-nc-1579-2067.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7026-nc-1569-2074.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7080-nc-1618-2083.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7116-nc-1629-2089.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7170-nc-1635-2091.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7206-nc-1612-2094.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7224-nc-1634-2098.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7284-nc-1659-2105.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7290-nc-1665-2106.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7296-nc-1661-2116.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7296-nc-1672-2113.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7296-nc-1674-2110.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7296-nc-1676-2108.hdf5";
    // // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-7296-nc-1683-2126.hdf5";
    // /*
    // ===========================================================================================================================*/
  }

  if (listprob[1] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-37-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-104-4.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-106-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-137-5.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-139-6.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-141-8.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-195-10.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-196-9.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-200-11.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-201-12.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-202-13.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-204-15.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-208-17.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-209-18.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-212-19.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-218-20.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-227-22.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-228-21.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-239-24.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-241-25.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-249-29.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-253-28.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-257-30.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-290-31.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-291-33.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-294-34.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-330-36.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-333-35.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-347-37.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-350-38.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-351-39.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-394-40.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-422-41.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-431-42.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-454-43.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-471-44.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-501-45.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-515-46.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-521-47.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-528-49.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-529-48.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-544-51.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-553-52.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-556-53.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-582-54.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-606-55.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-636-56.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-638-57.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-643-59.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-644-60.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-686-61.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-774-62.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-782-63.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-796-64.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-816-66.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-822-65.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-838-67.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-842-68.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-858-71.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-862-70.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-885-72.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-921-73.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1001-74.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1037-75.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1057-76.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1065-77.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1084-78.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1114-79.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1120-80.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1139-82.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1145-81.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1159-84.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1199-88.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1202-230.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1204-214.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1231-228.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1234-226.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1251-252.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1259-222.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1274-209.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1283-193.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1287-199.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1299-201.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1302-198.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1309-168.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1312-262.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1314-177.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1326-254.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1333-175.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1334-161.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1342-158.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1345-267.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1346-275.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1360-100.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1366-283.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1367-282.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1369-294.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1370-291.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1383-299.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1390-306.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1403-150.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1420-146.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1439-142.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1446-143.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1455-313.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1461-107.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1464-111.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1484-320.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1485-139.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1486-318.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1488-327.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1522-332.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1566-343.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1587-350.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1592-349.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1599-348.hdf5";  // pour voir degradation
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1628-353.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1636-356.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1692-365.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1694-366.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1716-381.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1721-385.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1726-382.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1750-389.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1767-387.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1772-386.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1781-390.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1866-404.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1878-405.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1883-411.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1886-410.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1891-415.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1912-412.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1927-417.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1940-424.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1941-420.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1947-418.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1957-432.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1958-431.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1959-425.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1971-430.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1974-434.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1981-433.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2002-438.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2018-445.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2021-446.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2049-457.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2102-463.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2115-480.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2119-484.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2121-474.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2128-469.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2137-496.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2138-495.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2140-499.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2147-492.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2157-508.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2163-514.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2164-511.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2169-518.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2174-524.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2176-520.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2199-544.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2202-537.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2205-530.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2210-535.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2218-536.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2223-531.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2242-548.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2269-549.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2286-550.hdf5";
  }

  if (listprob[2] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-24-nc-2-1.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-42-nc-5-4.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-114-nc-28-5.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-204-nc-50-9.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-234-nc-57-11.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-240-nc-56-12.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-252-nc-64-15.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-252-nc-71-16.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-276-nc-72-17.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-276-nc-76-21.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-276-nc-77-19.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-282-nc-80-26.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-282-nc-81-24.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-282-nc-82-25.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-294-nc-84-29.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-294-nc-85-30.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-300-nc-78-33.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-300-nc-79-34.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-306-nc-74-37.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-318-nc-87-39.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-336-nc-91-48.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-336-nc-94-45.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-336-nc-95-44.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-336-nc-96-46.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-342-nc-90-49.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-342-nc-92-51.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-354-nc-103-58.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/SpheresPile-ndof-354-nc-98-55.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-360-nc-101-62.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-366-nc-106-64.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-366-nc-109-65.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-372-nc-108-66.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-378-nc-107-68.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-378-nc-110-70.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-378-nc-114-72.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-384-nc-112-74.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-384-nc-113-79.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-390-nc-116-81.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-408-nc-118-88.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-408-nc-125-86.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-414-nc-121-93.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-414-nc-122-89.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-414-nc-124-90.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-426-nc-128-97.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-426-nc-136-99.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-450-nc-147-106.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-456-nc-141-110.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-462-nc-130-117.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-462-nc-131-114.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-462-nc-132-116.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-462-nc-134-112.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-462-nc-138-111.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-480-nc-137-125.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-486-nc-144-127.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-492-nc-155-131.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-510-nc-157-138.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-522-nc-160-146.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-522-nc-162-149.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-522-nc-163-147.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-528-nc-171-150.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-540-nc-175-158.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-546-nc-166-163.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-552-nc-169-164.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-564-nc-168-168.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-576-nc-170-174.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-582-nc-180-177.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-588-nc-185-180.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-600-nc-188-187.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-600-nc-190-185.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-606-nc-187-189.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-612-nc-192-192.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-612-nc-196-191.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-618-nc-189-195.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-648-nc-199-220.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-654-nc-201-221.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-666-nc-198-227.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-666-nc-202-229.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-672-nc-204-232.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-678-nc-211-235.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-690-nc-222-243.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-696-nc-214-250.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-696-nc-221-251.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-702-nc-209-255.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-702-nc-217-252.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-708-nc-224-259.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-726-nc-229-261.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-732-nc-235-263.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-738-nc-231-266.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-750-nc-232-270.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-750-nc-233-272.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-750-nc-240-269.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-762-nc-244-275.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-774-nc-239-281.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-792-nc-253-291.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-798-nc-248-292.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-804-nc-256-295.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-810-nc-268-298.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-816-nc-269-299.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-816-nc-274-301.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-822-nc-270-305.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-858-nc-286-322.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-876-nc-284-326.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-888-nc-296-331.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-894-nc-293-335.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-894-nc-299-334.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-918-nc-303-343.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-942-nc-322-358.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-942-nc-324-357.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1002-nc-319-379.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1008-nc-310-383.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1008-nc-325-384.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1008-nc-329-385.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1014-nc-326-391.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1014-nc-334-390.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1014-nc-336-388.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1014-nc-338-386.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1014-nc-339-387.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1020-nc-330-397.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1032-nc-349-402.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1044-nc-358-411.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1044-nc-364-409.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1050-nc-348-416.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1050-nc-350-413.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1050-nc-352-417.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1056-nc-354-420.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1056-nc-359-418.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1068-nc-366-423.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1080-nc-344-427.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1080-nc-353-428.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1086-nc-374-430.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1086-nc-379-431.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1098-nc-345-437.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1098-nc-365-439.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1104-nc-367-440.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1104-nc-375-444.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1116-nc-376-448.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1116-nc-377-449.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1116-nc-382-450.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1128-nc-372-453.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1140-nc-371-460.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1140-nc-384-462.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1140-nc-388-464.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1152-nc-390-467.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1152-nc-393-468.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1158-nc-385-470.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1170-nc-397-477.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1170-nc-407-476.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1176-nc-395-479.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1182-nc-403-481.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1182-nc-405-487.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1200-nc-409-496.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1206-nc-419-499.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1212-nc-414-500.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1224-nc-413-504.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1224-nc-416-505.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1224-nc-421-506.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1242-nc-430-516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1248-nc-425-520.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1248-nc-429-521.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1248-nc-443-518.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1266-nc-424-527.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1266-nc-438-532.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1296-nc-437-545.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1302-nc-445-547.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1320-nc-446-557.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1320-nc-454-556.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1332-nc-449-565.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1332-nc-453-566.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1338-nc-455-567.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1338-nc-456-568.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1356-nc-463-573.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1362-nc-464-575.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1368-nc-465-576.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1374-nc-467-581.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1380-nc-469-585.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1398-nc-486-589.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1410-nc-480-599.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1416-nc-482-602.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1422-nc-484-607.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1422-nc-487-609.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1428-nc-491-610.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1434-nc-495-613.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1440-nc-496-615.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1440-nc-507-614.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1464-nc-519-626.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1482-nc-513-635.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1494-nc-521-637.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-520-657.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-522-660.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-524-690.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-527-652.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-528-689.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-530-658.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-533-762.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-534-725.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-536-865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-537-676.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-538-683.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-540-671.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/SpheresPile/"
        "SpheresPile-ndof-1500-nc-542-672.hdf5";
  }

  if (listprob[3] == 1) {
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-4-3.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-18-28.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-20-38.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-27-50.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-29-54.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-31-61.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-32-64.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-768-nc-33-67.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-55-126.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-58-118.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-63-138.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-69-150.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1152-nc-79-180.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1206-nc-88-195.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1236-nc-93-199.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1260-nc-90-203.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1362-nc-98-213.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-155-283.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-161-292.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-164-298.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1536-nc-172-296.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1590-nc-178-305.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1722-nc-196-327.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1746-nc-200-331.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1758-nc-204-333.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-203-355.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-206-364.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-214-366.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-223-376.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-227-375.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-239-391.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-267-428.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1920-nc-275-431.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-1974-nc-270-438.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2064-nc-273-451.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2154-nc-282-461.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2166-nc-285-462.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2232-nc-287-470.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-321-501.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-330-517.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-334-515.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2304-nc-339-516.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2358-nc-365-558.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2388-nc-354-561.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2394-nc-351-563.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2478-nc-358-568.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2622-nc-383-592.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2622-nc-385-591.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-388-602.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-420-620.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-424-621.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-429-636.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-430-630.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2688-nc-445-644.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2718-nc-457-678.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2886-nc-468-693.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-2928-nc-476-701.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3006-nc-488-708.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3036-nc-487-711.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-506-729.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-518-730.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-519-757.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-522-763.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-526-749.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3072-nc-531-765.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3084-nc-566-798.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3234-nc-576-815.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3282-nc-579-819.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3360-nc-612-824.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3444-nc-599-829.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3450-nc-609-831.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3450-nc-610-832.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-605-844.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-627-871.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-629-867.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3456-nc-641-864.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3588-nc-651-909.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3672-nc-677-918.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3690-nc-658-920.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-709-959.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-712-953.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-727-974.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-734-996.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-737-980.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3840-nc-750-997.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-3990-nc-767-1045.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4026-nc-780-1053.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4212-nc-827-1073.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-800-1094.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-803-1082.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-806-1080.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-809-1104.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-811-1089.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-814-1100.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-815-1093.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-845-1143.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4224-nc-869-1159.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4296-nc-834-1172.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4464-nc-853-1208.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-872-1233.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-876-1230.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-902-1255.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-908-1269.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-911-1250.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-915-1271.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-919-1267.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-932-1277.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4608-nc-934-1286.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4638-nc-938-1311.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4782-nc-916-1324.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4920-nc-950-1341.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-951-1424.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-960-1374.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-963-1375.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-4992-nc-989-1400.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5136-nc-969-1447.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5316-nc-993-1472.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-994-1482.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-998-1501.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1008-1495.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1012-1503.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1032-1525.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1033-1561.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1036-1534.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5376-nc-1073-1536.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5424-nc-1072-1576.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5622-nc-1101-1601.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5724-nc-1119-1614.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1108-1620.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1110-1625.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1132-1634.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1160-1658.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1173-1664.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1179-1654.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1181-1647.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1191-1666.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1192-1668.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1214-1681.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5760-nc-1233-1675.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5904-nc-1259-1707.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5940-nc-1249-1718.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-5946-nc-1234-1719.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6120-nc-1289-1741.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1281-1756.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1302-1763.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1316-1797.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6144-nc-1322-1803.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6240-nc-1326-1829.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6246-nc-1329-1830.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6288-nc-1298-1834.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6438-nc-1341-1844.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1353-1865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1360-1868.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1361-1873.hdf5";  // pinfeas_2
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/Chute/Chute-ndof-6528-nc-1372-1870.hdf5";
  }

  if (listprob[4] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-37-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-104-4.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-106-3.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-137-5.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-139-6.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-141-8.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-195-10.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-196-9.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-200-11.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-201-12.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-202-13.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-204-15.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-208-17.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-209-18.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-212-19.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-218-20.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-227-22.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-228-21.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-239-24.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-241-25.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-249-29.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-253-28.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-257-30.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-290-31.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-291-33.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-294-34.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-330-36.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-333-35.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-347-37.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-350-38.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-351-39.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-394-40.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-422-41.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-431-42.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-454-43.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-471-44.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-501-45.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-515-46.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-521-47.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-528-49.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-529-48.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-544-51.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-553-52.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-556-53.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-582-54.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-606-55.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-636-56.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-638-57.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-643-59.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-644-60.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-686-61.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-774-62.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-782-63.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-796-64.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-816-66.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-822-65.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-838-67.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-842-68.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-858-71.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-862-70.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-885-72.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-921-73.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1001-74.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1037-75.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1057-76.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1065-77.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1084-78.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1114-79.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1120-80.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1139-82.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1145-81.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1159-84.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1199-88.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1202-230.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1204-214.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1231-228.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1234-226.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1251-252.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1259-222.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1274-209.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1283-193.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1287-199.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1299-201.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1302-198.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1309-168.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1312-262.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1314-177.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1326-254.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1333-175.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1334-161.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1342-158.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1345-267.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1346-275.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1360-100.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1366-283.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1367-282.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1369-294.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1370-291.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1383-299.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1390-306.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1403-150.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1420-146.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1439-142.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1446-143.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1455-313.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1461-107.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1464-111.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1484-320.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1485-139.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1486-318.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1488-327.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1522-332.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1566-343.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1587-350.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1592-349.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1599-348.hdf5";  // pour voir degradation
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1628-353.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1636-356.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1692-365.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1694-366.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1716-381.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1721-385.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1726-382.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1750-389.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1767-387.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1772-386.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1781-390.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1866-404.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1878-405.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1883-411.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1886-410.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1891-415.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1912-412.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1927-417.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1940-424.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1941-420.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1947-418.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1957-432.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1958-431.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1959-425.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1971-430.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1974-434.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-1981-433.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2002-438.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2018-445.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2021-446.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2049-457.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2102-463.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2115-480.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2119-484.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2121-474.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2128-469.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2137-496.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2138-495.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2140-499.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2147-492.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2157-508.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2163-514.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2164-511.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2169-518.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2174-524.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2176-520.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2199-544.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2202-537.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2205-530.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2210-535.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2218-536.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2223-531.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2242-548.hdf5";
    // data_collection_1[n_data++] =
    // "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-2269-549.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/GlobalRolling/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2286-550.hdf5";
  }

  data_collection_1[n_data++] = "---";
  return data_collection_1;
}
