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
  int n_data_1 = 1169;

  const char **data_collection_1 = (const char **)malloc(n_data_1 * sizeof(const char *));
  int n_data = 0;

  int listprob[7] = {1, 1, 1, 1, 1, 1, 1};
  /* 0: BoxStacks      #28  problems */
  /* 1: Capsules       #200 problems */
  /* 2: KaplasTower    #240 problems */
  /* 3: PrimitiveSoup  #200 problems */
  /* 4: Spheres        #200 problems */
  /* 5: Sphere1mm      #41  problems */
  /* 6: Chute*         #182 problems */
  /*   TOTAL          #1091 problems */

  if (listprob[0] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0035-31-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0049-31-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0068-52-1.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0093-62-2.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0093-90-12.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0094-90-10.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0094-90-11.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0094-90-9.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0099-77-4.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0102-84-7.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0102-88-8.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0120-69-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0121-69-1.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0122-73-2.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0122-82-5.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0132-74-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i0207-114-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-466-9.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-550-33.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-550-34.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-550-35.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-551-15.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-551-19.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-551-20.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-551-28.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-551-29.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-556-16.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/BoxStacks/Box_Stacks-i1000-557-13.hdf5";
  }

  if (listprob[1] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000375-39-9142.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000436-39-8780.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000615-40-8814.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000648-61-11670.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000679-49-9539.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000692-63-11389.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000944-61-11253.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i000967-60-11995.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001013-65-12052.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001048-26-7396.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001105-59-11788.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001121-16-5496.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001146-53-10984.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001207-15-5093.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001260-38-8577.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001260-44-10181.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001313-63-11250.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001326-83-12764.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001399-18-6630.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001486-46-10500.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001521-73-12378.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001623-87-12508.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001782-79-12546.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001783-24-7299.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001817-98-13530.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001849-30-8544.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001856-38-8856.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001878-101-13502.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001937-23-7903.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i001958-98-13908.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002024-101-14116.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002045-81-12536.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002087-39-8785.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002139-88-13172.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002305-58-11859.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002609-104-14011.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002649-127-14978.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002931-130-15002.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002935-33-8519.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002939-122-14976.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002983-36-8566.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i002988-50-10637.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003025-128-15691.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003463-60-11261.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003717-57-11858.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003802-87-13393.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003803-17-4627.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003917-86-13118.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i003978-24-7394.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i004000-107-14641.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i004047-108-14586.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i004105-87-12795.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i004865-106-14177.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i005319-53-10863.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i005511-106-14024.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i005639-52-10639.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i005867-61-11715.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i005975-119-15271.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i006055-81-12522.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i006273-122-15199.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i007021-107-14130.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i007238-67-11429.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i007319-132-16037.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i008058-114-14928.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i008322-91-13848.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009014-138-16674.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009063-134-16680.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009166-142-16673.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009210-162-18416.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009369-134-16681.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009441-98-14145.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i009702-142-16672.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010111-89-13170.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010121-141-16682.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010285-48-9526.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010570-166-18348.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010876-144-16865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i010950-144-16670.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i011090-150-17784.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i011671-142-16671.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i011844-178-18771.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i011884-96-13402.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i012168-146-16930.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i012323-160-17450.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i012411-150-16980.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i013338-191-19706.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i013467-192-19409.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i013566-191-19700.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i013782-193-19705.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i013975-175-18948.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i014376-191-19119.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i014624-187-19372.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i014672-185-19371.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i015836-189-19373.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i016154-95-13273.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i016599-111-14921.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i018456-15-5831.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019031-185-19384.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019053-238-21803.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019178-202-20907.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019557-205-20520.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019943-202-20521.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i019987-239-22333.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i020637-141-16864.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i020881-234-21802.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i020941-117-14714.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021069-204-20335.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021261-196-19938.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021528-209-21308.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021751-236-22552.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021760-184-19370.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021832-224-21468.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i021906-161-17485.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i022191-236-22336.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i022263-238-21867.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i022396-175-18587.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i022688-220-21466.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i023837-231-22337.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i023895-28-8197.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i023931-141-16588.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024009-222-21467.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024214-196-19537.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024429-165-18315.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024596-217-21460.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024845-233-22338.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i024952-210-20525.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i025055-206-19950.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i025268-234-22339.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i025466-219-21475.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i026036-163-18644.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i026988-159-18621.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i027334-175-18778.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i027883-214-21464.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i028106-213-21024.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i028355-161-18430.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i029459-222-21461.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i030935-221-21476.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i031480-151-17243.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034646-254-24463.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034700-252-24470.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034704-243-23567.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034738-253-24430.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034742-252-24474.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i034812-254-24475.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i036800-251-24016.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i040634-121-14783.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i042176-251-24566.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i045279-125-15077.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i045462-258-24431.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i046571-268-27003.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i048783-203-21225.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i048828-165-18590.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i049239-269-25096.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i050103-269-25094.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i050123-258-24290.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i053506-230-21795.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i054727-286-27868.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i055713-258-24719.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i055978-297-32953.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i057444-285-26526.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i057450-287-26527.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i057922-162-17467.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i058302-257-24249.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i059481-260-24386.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i059848-288-28645.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i066960-299-29270.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i067040-95-13295.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i067065-262-24375.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i067235-263-25066.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i068444-296-27982.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i068743-286-28666.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i069935-252-23646.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i072533-206-19948.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i076913-273-25064.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i076983-277-27001.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i077338-278-26518.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i081969-313-31323.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i082691-294-27983.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i082732-277-26631.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i082878-294-32954.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i086538-244-23641.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i087075-301-30114.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i087565-312-31792.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i088518-313-31315.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i088991-306-35993.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i093946-314-31327.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i094347-311-31320.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i095470-309-31073.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i097201-313-31328.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-117-14908.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-165-18501.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-166-18504.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-167-18591.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-275-25798.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-276-26001.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-277-25755.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-278-25945.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-279-25569.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-282-25770.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Capsules/Capsules-i100000-300-29417.hdf5";
  }

  if (listprob[2] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4422.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4434.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4463.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4475.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4526.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4530.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4567.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4588.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4619.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4658.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4822.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4834.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000001-114-4863.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-384-11577.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-384-11598.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-384-11599.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-384-11618.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-384-11619.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11663.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11664.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11665.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11687.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11920.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000002-386-11921.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000003-384-11617.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000003-386-11662.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000003-386-11683.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000005-380-11557.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000014-113-4415.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000030-114-4492.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000031-114-4417.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000031-114-4437.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000031-114-4532.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000031-114-4789.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000032-114-4512.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000049-384-11596.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000050-384-11616.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000051-384-11576.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000054-386-11661.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000054-386-11918.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000062-571-14236.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000062-571-14294.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000063-569-14171.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000063-571-14237.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000063-571-14256.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000063-571-14276.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000064-571-14271.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000065-570-14191.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000065-571-14235.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000066-569-14131.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000066-570-14214.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000066-571-14257.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000067-571-14251.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000068-568-13971.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000070-568-13911.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000070-569-14091.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000070-571-14291.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000071-569-14071.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000072-569-14111.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000074-477-13201.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000074-477-13305.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000080-568-13891.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-44.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-45.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-48.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-49.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-52.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-53.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-54.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-55.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-58.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-59.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000091-48-62.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000097-48-20.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000097-724-21279.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-209-4979.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-719-20217.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-720-20356.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-720-20497.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-720-20826.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-723-21019.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-723-21079.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-723-21099.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000098-723-21199.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000099-718-19974.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000099-719-20097.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000099-722-20999.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000099-723-21119.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000100-719-20237.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000101-721-20906.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000102-720-20257.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000102-720-20846.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000103-720-20866.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000106-211-5177.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000110-814-21559.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000110-815-21705.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000110-815-21785.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000110-818-23646.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000110-818-23726.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000111-818-22457.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000111-818-22557.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000111-818-22637.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000111-818-23526.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000111-818-23666.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000114-724-21359.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000114-814-21579.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000114-815-21825.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000114-818-22517.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000115-813-21439.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000115-815-21765.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000116-814-21479.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000117-814-21519.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000117-814-21539.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000118-815-21599.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000118-816-21865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000119-724-21399.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000197-48-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000218-48-123.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000223-48-43.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000247-899-30531.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000247-899-31129.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000247-899-31234.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000247-899-31569.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000247-899-32540.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-24038.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-24363.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-24481.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-24816.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-25035.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-25172.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-25581.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-26227.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-26255.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-27409.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-27505.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-27752.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-27962.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000248-898-28602.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000249-898-29491.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000259-48-143.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000303-48-184.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000359-48-264.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000419-48-244.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000521-48-204.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000651-575-15333.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000905-214-7676.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i000970-214-7677.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001054-214-7686.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001054-214-7688.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001057-214-7687.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001058-214-7680.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001072-214-7678.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001078-214-7684.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001078-214-7685.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001086-214-7682.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001086-214-7690.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001088-214-7691.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001089-214-7679.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001091-214-7694.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001091-214-7695.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001093-214-7681.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001093-214-7692.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001093-214-7693.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i001180-575-15311.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002552-302-7933.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002561-302-7929.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002572-302-7924.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002580-643-18915.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002587-643-18914.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002600-643-18951.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002625-302-7930.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002630-304-9384.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002644-304-9391.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002655-304-9395.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002662-304-9385.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002668-304-9382.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002675-304-9377.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002723-304-9390.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002723-643-18943.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002737-304-9388.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002744-304-9380.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002751-304-9379.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002761-304-9392.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002773-643-18853.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002777-304-9378.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002777-304-9394.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002787-304-9381.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002805-304-9383.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002809-643-18946.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002822-304-9376.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002839-643-18933.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002900-643-18948.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002907-643-18891.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002916-643-18947.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002919-643-18852.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002952-643-18932.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002965-643-18950.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002978-643-18942.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i002979-643-18949.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i003116-643-18944.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i003638-575-15331.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i003667-636-16991.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i004447-575-15291.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i004690-642-18831.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005331-643-18851.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005595-481-13869.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005670-481-13868.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005679-481-13867.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005859-481-13870.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i005971-575-15353.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006162-575-15352.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006404-575-15356.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006481-575-15351.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006703-575-15359.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006711-575-15357.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006717-575-15362.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006720-575-15364.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006729-575-15358.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006736-575-15370.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006743-575-15369.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006746-575-15366.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006755-575-15363.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006769-575-15368.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006780-575-15361.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i006786-575-15365.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008045-481-13864.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008071-481-13862.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008144-481-13863.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008260-481-13861.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008292-481-13865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i008367-481-13866.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i009872-643-18941.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i058962-481-13859.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13851.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13852.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13854.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13855.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13856.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13857.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/KaplasTower/KaplasTower-i100000-481-13858.hdf5";
  }

  if (listprob[3] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1018-109.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1022-105.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1032-178.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1038-182.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1078-202.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1099-203.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1106-207.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1153-221.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-116-1.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1172-225.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1197-228.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1203-227.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-121-3.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-122-6.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-123-5.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1230-245.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1239-231.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1247-234.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1269-241.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1278-249.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1284-247.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1299-257.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1308-259.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1309-248.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1340-266.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1354-272.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1364-271.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1367-273.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1388-278.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1398-283.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1429-282.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1446-289.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1448-300.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1450-294.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1451-296.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1513-317.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1521-305.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1557-318.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1560-329.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1566-328.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1587-338.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1588-339.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1593-337.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1639-347.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1658-349.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1677-355.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1686-353.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1702-361.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1718-362.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1719-356.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1770-368.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1778-367.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1784-373.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1796-370.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1803-379.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1843-381.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1845-393.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1866-386.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1877-405.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1878-407.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1880-401.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1902-414.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1925-422.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1934-420.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1993-427.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1995-431.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-1996-429.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2003-433.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2010-434.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2015-435.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2033-446.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2055-441.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2093-462.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2097-468.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2123-472.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-213-7.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2146-476.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-215-8.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2173-481.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2180-487.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-221-4.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2255-539.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2272-534.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2281-545.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2290-535.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2292-548.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2304-559.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2324-579.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2325-572.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2339-584.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2347-578.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2376-604.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2377-595.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2379-611.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2405-612.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2417-652.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2426-637.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2450-621.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2476-661.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2483-665.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2486-670.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2514-686.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2515-690.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2522-687.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2569-742.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2580-727.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2596-767.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2612-765.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2642-787.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2647-800.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2661-836.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2662-792.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2689-831.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2700-896.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2729-954.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2752-982.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2768-1000.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2785-1029.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2790-1090.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-280-12.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2800-1059.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2806-1119.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2810-1109.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2815-1115.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2827-1141.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2837-1209.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2849-1191.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-286-14.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2862-1282.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2863-1241.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-287-15.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2883-1413.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2918-1516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-292-17.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2939-1550.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-294-18.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2956-1729.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-2967-1749.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3001-1907.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3013-2116.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-302-20.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3050-2295.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-307-22.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-308-26.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3088-2618.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3097-2638.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3104-2764.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3114-2880.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3116-2958.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3120-2865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3121-2957.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3122-2888.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/"
        "PrimitiveSoup-ndof-6000-nc-3123-2922.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-313-27.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-314-28.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-357-29.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-361-30.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-37-0.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-445-31.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-448-32.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-463-33.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-484-34.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-494-35.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-529-36.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-543-37.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-546-38.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-555-39.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-561-41.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-570-44.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-585-45.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-592-48.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-611-49.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-619-50.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-621-51.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-657-54.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-658-53.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-669-55.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-703-57.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-733-61.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-763-68.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-804-73.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-838-130.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-846-157.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-851-76.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-855-128.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-859-158.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-864-133.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-874-145.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-887-149.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-890-154.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-892-159.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-908-122.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-913-84.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-925-119.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-939-164.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-944-116.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-957-170.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-965-115.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-966-93.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/PrimitiveSoup/PrimitiveSoup-ndof-6000-nc-973-112.hdf5";
  }

  if (listprob[4] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i101-347-677.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i102-347-665.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i105-476-1080.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i105-614-1590.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i107-632-1574.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i110-346-676.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i110-361-680.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i112-344-674.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i112-378-786.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i113-464-1094.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i115-344-673.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i116-573-1379.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i119-384-775.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i120-376-781.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i122-606-1516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i122-741-1774.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i125-567-1385.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i125-811-1885.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i128-669-1615.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i128-842-1960.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i133-649-1690.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i135-852-1997.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i136-770-1876.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i159-553-1361.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i160-702-1732.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i161-858-1978.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i163-883-2098.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i163-995-2429.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i164-853-1998.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i166-945-2127.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i175-923-2147.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i178-804-1883.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i180-429-832.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i181-1636-4763.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i184-564-1384.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i188-1574-4632.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i189-1766-4967.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i191-1024-2458.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i193-1692-4832.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i196-1746-4914.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i197-903-2009.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i203-1799-5078.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i205-1393-4325.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i210-1465-4404.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i219-1895-5217.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i219-969-2371.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i221-1740-4910.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i223-1671-4776.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i223-955-2375.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i227-1791-5133.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i228-1976-5355.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i230-1276-3781.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i230-1311-3190.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i230-1479-4361.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i231-1125-2497.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i232-2038-5587.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i236-1702-4837.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i236-2127-5739.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i239-1699-4843.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i245-2122-5814.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i246-1602-4687.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i246-2349-6296.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i247-2319-6173.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i250-2316-6163.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i251-2342-6253.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i255-2247-6088.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i257-1318-3522.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i259-1152-2824.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i262-1486-4456.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i267-1463-4475.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i276-1122-2545.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i278-1967-5491.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i280-1156-2937.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i282-2099-5699.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i284-2205-5980.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i285-2121-5740.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i289-1242-2956.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i298-1765-5027.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i299-1594-4684.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i299-2540-6826.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i301-1418-4311.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i306-2184-5851.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i309-2350-6298.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i318-2119-5726.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i318-2503-6624.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i325-1797-5134.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i328-2137-5743.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i334-1442-4423.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i337-1253-3617.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i337-2534-6803.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i341-1743-4911.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i361-1156-2823.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i364-2567-6881.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i366-1308-3031.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i367-1117-2536.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i370-2111-5734.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i372-1523-4521.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i372-1648-4772.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i379-2248-5997.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i388-2548-6762.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i393-2545-6819.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i409-2355-6425.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i428-1767-4971.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i430-921-2245.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i445-1202-2755.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i505-2548-6779.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i674-2194-5880.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i099-356-679.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2475-6676.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2494-6649.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2705-7108.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2706-7207.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2731-7284.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2740-7285.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2741-7323.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2761-7339.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2774-7342.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2774-7345.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2775-7408.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2779-7344.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2783-7343.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2826-7434.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2834-7445.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2871-7522.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2916-7531.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2917-7776.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2921-7775.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2923-7777.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2957-7936.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-2969-7954.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3000-7975.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3079-8175.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3109-8136.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3119-8134.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3126-8285.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3170-8308.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3182-8330.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3196-8516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3198-8436.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3203-8361.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3221-8378.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3291-8603.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3343-8662.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3352-9047.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3359-9031.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3363-8936.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3363-8937.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3363-8940.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3363-8941.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3414-9104.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3456-9299.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3457-9362.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3528-9503.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3528-9515.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3528-9523.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3535-9530.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3554-10007.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3558-10063.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3576-9668.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3583-9704.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3659-10320.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3661-10330.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3662-10348.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3707-10616.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3712-10409.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3788-10678.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3807-10864.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3809-11104.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3826-11116.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3835-11147.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3871-10998.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3890-11229.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3898-11571.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3913-11404.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3913-11516.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-3919-11415.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4025-11848.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4042-11920.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4058-12512.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4064-12551.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4076-12155.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4122-12736.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4149-14003.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4167-13905.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4168-12955.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4173-13676.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4180-13517.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4184-13704.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4269-14605.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4271-14617.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4281-14702.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4282-14652.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4283-14660.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4284-14684.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4285-14663.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4285-14696.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4287-14691.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4288-14681.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4289-14671.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres/Spheres-i1000-4290-14670.hdf5";
  }

  if (listprob[5] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3729-13.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3733-18.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3733-20.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3740-15.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3749-9.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3754-19.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3754-23.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3758-10.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3772-21.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3773-8.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3977-113.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3978-121.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3984-132.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3986-125.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3986-148.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3986-96.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3986-97.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3987-104.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3987-122.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-3987-133.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4196-1188.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4196-1378.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4197-1169.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4197-1244.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4197-1390.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4197-661.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4199-1330.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4199-1380.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4199-794.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4199-994.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4204-1198.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4205-1186.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4206-1194.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4207-1382.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4208-1391.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4209-1196.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4209-1388.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4210-1385.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4211-1179.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-4213-1241.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Spheres1mm/Spheres1mm-ndof-12000-nc-715-1.hdf5";
  }

  if (listprob[6] == 1) {
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-1002-nc-3-41.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10056-nc-2139-3087.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10128-nc-2080-3097.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10206-nc-2094-3115.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10296-nc-2248-3129.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10344-nc-2245-3136.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10368-nc-2177-3197.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10368-nc-2178-3203.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10368-nc-2195-3200.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10368-nc-2205-3166.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10368-nc-2327-3186.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10374-nc-2185-3206.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10524-nc-2229-3224.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10620-nc-2276-3231.hdf5"; /*LU failure
                                                                                    */
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2344-3272.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2351-3293.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2356-3262.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2379-3309.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2388-3274.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10752-nc-2441-3317.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10770-nc-2348-3331.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10794-nc-2386-3337.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10836-nc-2489-3347.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10878-nc-2490-3348.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10902-nc-2501-3349.hdf5";  // step
                                                                                    // failure
                                                                                    // with LU
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-10914-nc-2493-3350.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11034-nc-2471-3365.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11112-nc-2535-3371.hdf5";  // LU
                                                                                    // failure
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2513-3379.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2618-3397.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2637-3452.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2672-3405.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2684-3445.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2780-3424.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2798-3429.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11136-nc-2840-3433.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11154-nc-2601-3456.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11232-nc-2657-3469.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11520-nc-2694-3538.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11520-nc-2709-3504.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11520-nc-2742-3498.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11520-nc-2748-3573.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11808-nc-2782-3617.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11904-nc-2818-3675.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11904-nc-2821-3691.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11904-nc-2884-3660.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-11904-nc-2972-3655.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12072-nc-2918-3716.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12264-nc-2934-3752.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-2874-3784.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-2959-3807.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-2962-3809.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-2966-3814.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-3052-3842.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-3062-3840.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-3116-3828.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-3129-3830.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12288-nc-3197-3835.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12312-nc-2994-3849.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12486-nc-3076-3865.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12510-nc-3136-3868.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12576-nc-3146-3877.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12582-nc-3152-3878.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12666-nc-3177-3886.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12672-nc-3165-3888.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12672-nc-3187-3889.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-12672-nc-3224-3890.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-2688-nc-29-633.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-3306-nc-36-810.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-4014-nc-64-1048.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-4224-nc-117-1110.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-4224-nc-137-1150.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-4224-nc-82-1081.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-4608-nc-177-1260.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5040-nc-333-1444.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5376-nc-354-1497.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5376-nc-367-1521.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5376-nc-431-1569.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5496-nc-455-1593.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5502-nc-452-1595.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5526-nc-469-1599.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5724-nc-417-1626.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5730-nc-419-1628.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5760-nc-458-1651.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5760-nc-496-1660.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5760-nc-521-1696.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5760-nc-532-1692.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5916-nc-584-1722.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5964-nc-566-1729.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-5988-nc-563-1731.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6144-nc-597-1762.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6144-nc-601-1750.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6144-nc-623-1781.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6144-nc-641-1797.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6228-nc-718-1835.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-701-1897.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-704-1900.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-708-1891.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-727-1922.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-750-1942.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-759-1944.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6528-nc-761-1925.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6534-nc-747-1947.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6654-nc-812-1967.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6780-nc-827-1983.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6912-nc-846-2004.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6912-nc-912-2056.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6912-nc-913-2041.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-6912-nc-920-2070.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7134-nc-986-2094.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7218-nc-993-2106.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7266-nc-994-2110.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7296-nc-1049-2196.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7296-nc-906-2133.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7296-nc-926-2154.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7296-nc-945-2152.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7296-nc-966-2165.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7608-nc-1064-2238.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7680-nc-1018-2273.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7680-nc-1031-2279.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7680-nc-1037-2287.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7722-nc-1143-2332.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7866-nc-1148-2353.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-7956-nc-1067-2367.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8052-nc-1152-2376.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1123-2382.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1135-2380.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1142-2383.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1206-2434.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1260-2421.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1261-2406.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8064-nc-1268-2451.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8166-nc-1290-2464.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8448-nc-1298-2520.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8448-nc-1304-2512.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8448-nc-1382-2502.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8484-nc-1358-2579.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8502-nc-1356-2584.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8550-nc-1357-2592.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8832-nc-1397-2689.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8832-nc-1424-2685.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8832-nc-1448-2684.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8934-nc-1495-2717.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-8940-nc-1499-2719.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9150-nc-1456-2749.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1515-2756.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1549-2760.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1566-2820.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1580-2764.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1581-2766.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1623-2778.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1624-2782.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1637-2777.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9216-nc-1696-2790.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9240-nc-1610-2822.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9402-nc-1565-2843.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9444-nc-1619-2846.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9480-nc-1648-2850.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9480-nc-1654-2852.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9492-nc-1683-2856.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9552-nc-1646-2863.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9552-nc-1671-2862.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9576-nc-1721-2874.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9600-nc-1786-2943.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9600-nc-1793-2931.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9600-nc-1804-2941.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9600-nc-1815-2937.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9600-nc-1821-2945.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9648-nc-1983-2970.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9714-nc-1921-2972.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9762-nc-1910-2979.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9870-nc-1850-2990.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9900-nc-1951-2995.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9966-nc-1893-3006.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9966-nc-1899-3005.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-1956-3025.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-1973-3027.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-1991-3046.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-1995-3035.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-2042-3066.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-2103-3062.hdf5";
    data_collection_1[n_data++] =
        "./fclib-library/Global/siconos/Chute/Chute-ndof-9984-nc-2186-3077.hdf5";
  }

  data_collection_1[n_data++] = "---";
  return data_collection_1;
}
