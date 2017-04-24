/* model.c
   ___________________________________________________

   Model File:  SBML_List.model

   Date:  Mon May 23 17:45:26 2011

   Created by:  "/Users/frederic_bois/bin/mod v5.4.0"
    -- a model preprocessor by Don Maszle
   ___________________________________________________

   Copyright (c) 1993-2011 Free Software Foundation, Inc.

   Model calculations for compartmental model:

   69 States:
     CYP2E1_Liver = 0;
     Benzene_Q_fat = 0;
     Benzene_Q_wp = 0;
     Benzene_Q_pp = 0;
     Benzene_Liver = 0;
     Benzene_Q_exh = 0;
     Benzene_CYP2E1_Liver = 0;
     PB1_CYP2E1_Liver = 0;
     PB2_Q_fat = 0;
     PB2_Q_wp = 0;
     PB2_Q_pp = 0;
     PB2_Liver = 0;
     PB2_Q_exh = 0;
     PB1_Q_fat = 0;
     PB1_Q_wp = 0;
     PB1_Q_pp = 0;
     PB1_Liver = 0;
     PB1_Q_exh = 0;
     Toluene_Q_fat = 0;
     Toluene_Q_wp = 0;
     Toluene_Q_pp = 0;
     Toluene_Liver = 0;
     Toluene_Q_exh = 0;
     Toluene_CYP2E1_Liver = 0;
     PT1_CYP2E1_Liver = 0;
     PT2_Q_fat = 0;
     PT2_Q_wp = 0;
     PT2_Q_pp = 0;
     PT2_Liver = 0;
     PT2_Q_exh = 0;
     PT1_Q_fat = 0;
     PT1_Q_wp = 0;
     PT1_Q_pp = 0;
     PT1_Liver = 0;
     PT1_Q_exh = 0;
     Ethylbenzene_Q_fat = 0;
     Ethylbenzene_Q_wp = 0;
     Ethylbenzene_Q_pp = 0;
     Ethylbenzene_Liver = 0;
     Ethylbenzene_Q_exh = 0;
     Ethylbenzene_CYP2E1_Liver = 0;
     PE1_CYP2E1_Liver = 0;
     PE2_Q_fat = 0;
     PE2_Q_wp = 0;
     PE2_Q_pp = 0;
     PE2_Liver = 0;
     PE2_Q_exh = 0;
     PE1_Q_fat = 0;
     PE1_Q_wp = 0;
     PE1_Q_pp = 0;
     PE1_Liver = 0;
     PE1_Q_exh = 0;
     Xylene_Q_fat = 0;
     Xylene_Q_wp = 0;
     Xylene_Q_pp = 0;
     Xylene_Liver = 0;
     Xylene_Q_exh = 0;
     Xylene_CYP2E1_Liver = 0;
     PX1_CYP2E1_Liver = 0;
     PX2_Q_fat = 0;
     PX2_Q_wp = 0;
     PX2_Q_pp = 0;
     PX2_Liver = 0;
     PX2_Q_exh = 0;
     PX1_Q_fat = 0;
     PX1_Q_wp = 0;
     PX1_Q_pp = 0;
     PX1_Liver = 0;
     PX1_Q_exh = 0;

   109 Outputs:
     Benzene_C_liv = 0;
     Benzene_C_fat = 0;
     Benzene_C_wp = 0;
     Benzene_C_pp = 0;
     Benzene_C_alv = 0;
     Benzene_C_exh = 0;
     Benzene_C_ven = 0;
     Benzene_C_ven_MGL = 0;
     Benzene_C_ven_MGL_wn = 0;
     sigma_obs -> 0.0;
     PB2_C_liv = 0;
     PB2_C_fat = 0;
     PB2_C_wp = 0;
     PB2_C_pp = 0;
     PB2_C_alv = 0;
     PB2_C_exh = 0;
     PB2_C_ven = 0;
     PB2_C_ven_MGL = 0;
     PB2_C_ven_MGL_wn = 0;
     PB1_C_liv = 0;
     PB1_C_fat = 0;
     PB1_C_wp = 0;
     PB1_C_pp = 0;
     PB1_C_alv = 0;
     PB1_C_exh = 0;
     PB1_C_ven = 0;
     PB1_C_ven_MGL = 0;
     PB1_C_ven_MGL_wn = 0;
     Toluene_C_liv = 0;
     Toluene_C_fat = 0;
     Toluene_C_wp = 0;
     Toluene_C_pp = 0;
     Toluene_C_alv = 0;
     Toluene_C_exh = 0;
     Toluene_C_ven = 0;
     Toluene_C_ven_MGL = 0;
     Toluene_C_ven_MGL_wn = 0;
     PT2_C_liv = 0;
     PT2_C_fat = 0;
     PT2_C_wp = 0;
     PT2_C_pp = 0;
     PT2_C_alv = 0;
     PT2_C_exh = 0;
     PT2_C_ven = 0;
     PT2_C_ven_MGL = 0;
     PT2_C_ven_MGL_wn = 0;
     PT1_C_liv = 0;
     PT1_C_fat = 0;
     PT1_C_wp = 0;
     PT1_C_pp = 0;
     PT1_C_alv = 0;
     PT1_C_exh = 0;
     PT1_C_ven = 0;
     PT1_C_ven_MGL = 0;
     PT1_C_ven_MGL_wn = 0;
     Ethylbenzene_C_liv = 0;
     Ethylbenzene_C_fat = 0;
     Ethylbenzene_C_wp = 0;
     Ethylbenzene_C_pp = 0;
     Ethylbenzene_C_alv = 0;
     Ethylbenzene_C_exh = 0;
     Ethylbenzene_C_ven = 0;
     Ethylbenzene_C_ven_MGL = 0;
     Ethylbenzene_C_ven_MGL_wn = 0;
     PE2_C_liv = 0;
     PE2_C_fat = 0;
     PE2_C_wp = 0;
     PE2_C_pp = 0;
     PE2_C_alv = 0;
     PE2_C_exh = 0;
     PE2_C_ven = 0;
     PE2_C_ven_MGL = 0;
     PE2_C_ven_MGL_wn = 0;
     PE1_C_liv = 0;
     PE1_C_fat = 0;
     PE1_C_wp = 0;
     PE1_C_pp = 0;
     PE1_C_alv = 0;
     PE1_C_exh = 0;
     PE1_C_ven = 0;
     PE1_C_ven_MGL = 0;
     PE1_C_ven_MGL_wn = 0;
     Xylene_C_liv = 0;
     Xylene_C_fat = 0;
     Xylene_C_wp = 0;
     Xylene_C_pp = 0;
     Xylene_C_alv = 0;
     Xylene_C_exh = 0;
     Xylene_C_ven = 0;
     Xylene_C_ven_MGL = 0;
     Xylene_C_ven_MGL_wn = 0;
     PX2_C_liv = 0;
     PX2_C_fat = 0;
     PX2_C_wp = 0;
     PX2_C_pp = 0;
     PX2_C_alv = 0;
     PX2_C_exh = 0;
     PX2_C_ven = 0;
     PX2_C_ven_MGL = 0;
     PX2_C_ven_MGL_wn = 0;
     PX1_C_liv = 0;
     PX1_C_fat = 0;
     PX1_C_wp = 0;
     PX1_C_pp = 0;
     PX1_C_alv = 0;
     PX1_C_exh = 0;
     PX1_C_ven = 0;
     PX1_C_ven_MGL = 0;
     PX1_C_ven_MGL_wn = 0;

   24 Inputs:
     Benzene_C_inh (is a function)
     Benzene_Q_ing (is a function)
     PB2_C_inh (is a function)
     PB2_Q_ing (is a function)
     PB1_C_inh (is a function)
     PB1_Q_ing (is a function)
     Toluene_C_inh (is a function)
     Toluene_Q_ing (is a function)
     PT2_C_inh (is a function)
     PT2_Q_ing (is a function)
     PT1_C_inh (is a function)
     PT1_Q_ing (is a function)
     Ethylbenzene_C_inh (is a function)
     Ethylbenzene_Q_ing (is a function)
     PE2_C_inh (is a function)
     PE2_Q_ing (is a function)
     PE1_C_inh (is a function)
     PE1_Q_ing (is a function)
     Xylene_C_inh (is a function)
     Xylene_Q_ing (is a function)
     PX2_C_inh (is a function)
     PX2_Q_ing (is a function)
     PX1_C_inh (is a function)
     PX1_Q_ing (is a function)

   113 Parameters:
     Liver = 1;
     Benzene_MW = 0;
     BodyV = 75;
     V_fat = 18;
     V_liv = 1.7;
     V_wp = 6;
     V_pp = 0;
     Pct_Flow_fat = 0.09;
     Pct_Flow_liv = 0.24;
     Pct_Flow_wp = 0.49;
     Pct_Flow_pp = 0.18;
     Flow_alv = 5.6;
     Flow_tot = 6.384;
     Benzene_PC_art = 0;
     Benzene_PC_fat = 0;
     Benzene_PC_liv = 0;
     Benzene_PC_wp = 0;
     Benzene_PC_pp = 0;
     sigma = 1;
     Flow_fat = 0;
     Flow_liv = 0;
     Flow_wp = 0;
     Flow_pp = 0;
     PB2_MW = 0;
     PB2_PC_art = 0;
     PB2_PC_fat = 0;
     PB2_PC_liv = 0;
     PB2_PC_wp = 0;
     PB2_PC_pp = 0;
     PB1_MW = 0;
     PB1_PC_art = 0;
     PB1_PC_fat = 0;
     PB1_PC_liv = 0;
     PB1_PC_wp = 0;
     PB1_PC_pp = 0;
     Benzene_J2_k2 = 0.1;
     Benzene_J1_k1 = 0.1;
     Benzene_J3_k3 = 0.1;
     Benzene_J4_k1 = 0.1;
     Benzene_J5_k2 = 0.1;
     Benzene_J6_k3 = 0.1;
     Toluene_MW = 0;
     Toluene_PC_art = 0;
     Toluene_PC_fat = 0;
     Toluene_PC_liv = 0;
     Toluene_PC_wp = 0;
     Toluene_PC_pp = 0;
     PT2_MW = 0;
     PT2_PC_art = 0;
     PT2_PC_fat = 0;
     PT2_PC_liv = 0;
     PT2_PC_wp = 0;
     PT2_PC_pp = 0;
     PT1_MW = 0;
     PT1_PC_art = 0;
     PT1_PC_fat = 0;
     PT1_PC_liv = 0;
     PT1_PC_wp = 0;
     PT1_PC_pp = 0;
     Toluene_J2_k2 = 0.1;
     Toluene_J1_k1 = 0.1;
     Toluene_J3_k3 = 0.1;
     Toluene_J4_k1 = 0.1;
     Toluene_J5_k2 = 0.1;
     Toluene_J6_k3 = 0.1;
     Ethylbenzene_MW = 0;
     Ethylbenzene_PC_art = 0;
     Ethylbenzene_PC_fat = 0;
     Ethylbenzene_PC_liv = 0;
     Ethylbenzene_PC_wp = 0;
     Ethylbenzene_PC_pp = 0;
     PE2_MW = 0;
     PE2_PC_art = 0;
     PE2_PC_fat = 0;
     PE2_PC_liv = 0;
     PE2_PC_wp = 0;
     PE2_PC_pp = 0;
     PE1_MW = 0;
     PE1_PC_art = 0;
     PE1_PC_fat = 0;
     PE1_PC_liv = 0;
     PE1_PC_wp = 0;
     PE1_PC_pp = 0;
     Ethylbenzene_J2_k2 = 0.1;
     Ethylbenzene_J1_k1 = 0.1;
     Ethylbenzene_J3_k3 = 0.1;
     Ethylbenzene_J4_k1 = 0.1;
     Ethylbenzene_J5_k2 = 0.1;
     Ethylbenzene_J6_k3 = 0.1;
     Xylene_MW = 0;
     Xylene_PC_art = 0;
     Xylene_PC_fat = 0;
     Xylene_PC_liv = 0;
     Xylene_PC_wp = 0;
     Xylene_PC_pp = 0;
     PX2_MW = 0;
     PX2_PC_art = 0;
     PX2_PC_fat = 0;
     PX2_PC_liv = 0;
     PX2_PC_wp = 0;
     PX2_PC_pp = 0;
     PX1_MW = 0;
     PX1_PC_art = 0;
     PX1_PC_fat = 0;
     PX1_PC_liv = 0;
     PX1_PC_wp = 0;
     PX1_PC_pp = 0;
     Xylene_J2_k2 = 0.1;
     Xylene_J1_k1 = 0.1;
     Xylene_J3_k3 = 0.1;
     Xylene_J4_k1 = 0.1;
     Xylene_J5_k2 = 0.1;
     Xylene_J6_k3 = 0.1;
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <float.h>
#include "modelu.h"
#include "random.h"
#include "yourcode.h"


/*----- Indices to Global Variables */

/* Model variables: States and other outputs */
#define ID_CYP2E1_Liver 0x0000
#define ID_Benzene_Q_fat 0x0001
#define ID_Benzene_Q_wp 0x0002
#define ID_Benzene_Q_pp 0x0003
#define ID_Benzene_Liver 0x0004
#define ID_Benzene_Q_exh 0x0005
#define ID_Benzene_CYP2E1_Liver 0x0006
#define ID_PB1_CYP2E1_Liver 0x0007
#define ID_PB2_Q_fat 0x0008
#define ID_PB2_Q_wp 0x0009
#define ID_PB2_Q_pp 0x000a
#define ID_PB2_Liver 0x000b
#define ID_PB2_Q_exh 0x000c
#define ID_PB1_Q_fat 0x000d
#define ID_PB1_Q_wp 0x000e
#define ID_PB1_Q_pp 0x000f
#define ID_PB1_Liver 0x0010
#define ID_PB1_Q_exh 0x0011
#define ID_Toluene_Q_fat 0x0012
#define ID_Toluene_Q_wp 0x0013
#define ID_Toluene_Q_pp 0x0014
#define ID_Toluene_Liver 0x0015
#define ID_Toluene_Q_exh 0x0016
#define ID_Toluene_CYP2E1_Liver 0x0017
#define ID_PT1_CYP2E1_Liver 0x0018
#define ID_PT2_Q_fat 0x0019
#define ID_PT2_Q_wp 0x001a
#define ID_PT2_Q_pp 0x001b
#define ID_PT2_Liver 0x001c
#define ID_PT2_Q_exh 0x001d
#define ID_PT1_Q_fat 0x001e
#define ID_PT1_Q_wp 0x001f
#define ID_PT1_Q_pp 0x0020
#define ID_PT1_Liver 0x0021
#define ID_PT1_Q_exh 0x0022
#define ID_Ethylbenzene_Q_fat 0x0023
#define ID_Ethylbenzene_Q_wp 0x0024
#define ID_Ethylbenzene_Q_pp 0x0025
#define ID_Ethylbenzene_Liver 0x0026
#define ID_Ethylbenzene_Q_exh 0x0027
#define ID_Ethylbenzene_CYP2E1_Liver 0x0028
#define ID_PE1_CYP2E1_Liver 0x0029
#define ID_PE2_Q_fat 0x002a
#define ID_PE2_Q_wp 0x002b
#define ID_PE2_Q_pp 0x002c
#define ID_PE2_Liver 0x002d
#define ID_PE2_Q_exh 0x002e
#define ID_PE1_Q_fat 0x002f
#define ID_PE1_Q_wp 0x0030
#define ID_PE1_Q_pp 0x0031
#define ID_PE1_Liver 0x0032
#define ID_PE1_Q_exh 0x0033
#define ID_Xylene_Q_fat 0x0034
#define ID_Xylene_Q_wp 0x0035
#define ID_Xylene_Q_pp 0x0036
#define ID_Xylene_Liver 0x0037
#define ID_Xylene_Q_exh 0x0038
#define ID_Xylene_CYP2E1_Liver 0x0039
#define ID_PX1_CYP2E1_Liver 0x003a
#define ID_PX2_Q_fat 0x003b
#define ID_PX2_Q_wp 0x003c
#define ID_PX2_Q_pp 0x003d
#define ID_PX2_Liver 0x003e
#define ID_PX2_Q_exh 0x003f
#define ID_PX1_Q_fat 0x0040
#define ID_PX1_Q_wp 0x0041
#define ID_PX1_Q_pp 0x0042
#define ID_PX1_Liver 0x0043
#define ID_PX1_Q_exh 0x0044
#define ID_Benzene_C_liv 0x0045
#define ID_Benzene_C_fat 0x0046
#define ID_Benzene_C_wp 0x0047
#define ID_Benzene_C_pp 0x0048
#define ID_Benzene_C_alv 0x0049
#define ID_Benzene_C_exh 0x004a
#define ID_Benzene_C_ven 0x004b
#define ID_Benzene_C_ven_MGL 0x004c
#define ID_Benzene_C_ven_MGL_wn 0x004d
#define ID_sigma_obs 0x004e
#define ID_PB2_C_liv 0x004f
#define ID_PB2_C_fat 0x0050
#define ID_PB2_C_wp 0x0051
#define ID_PB2_C_pp 0x0052
#define ID_PB2_C_alv 0x0053
#define ID_PB2_C_exh 0x0054
#define ID_PB2_C_ven 0x0055
#define ID_PB2_C_ven_MGL 0x0056
#define ID_PB2_C_ven_MGL_wn 0x0057
#define ID_PB1_C_liv 0x0058
#define ID_PB1_C_fat 0x0059
#define ID_PB1_C_wp 0x005a
#define ID_PB1_C_pp 0x005b
#define ID_PB1_C_alv 0x005c
#define ID_PB1_C_exh 0x005d
#define ID_PB1_C_ven 0x005e
#define ID_PB1_C_ven_MGL 0x005f
#define ID_PB1_C_ven_MGL_wn 0x0060
#define ID_Toluene_C_liv 0x0061
#define ID_Toluene_C_fat 0x0062
#define ID_Toluene_C_wp 0x0063
#define ID_Toluene_C_pp 0x0064
#define ID_Toluene_C_alv 0x0065
#define ID_Toluene_C_exh 0x0066
#define ID_Toluene_C_ven 0x0067
#define ID_Toluene_C_ven_MGL 0x0068
#define ID_Toluene_C_ven_MGL_wn 0x0069
#define ID_PT2_C_liv 0x006a
#define ID_PT2_C_fat 0x006b
#define ID_PT2_C_wp 0x006c
#define ID_PT2_C_pp 0x006d
#define ID_PT2_C_alv 0x006e
#define ID_PT2_C_exh 0x006f
#define ID_PT2_C_ven 0x0070
#define ID_PT2_C_ven_MGL 0x0071
#define ID_PT2_C_ven_MGL_wn 0x0072
#define ID_PT1_C_liv 0x0073
#define ID_PT1_C_fat 0x0074
#define ID_PT1_C_wp 0x0075
#define ID_PT1_C_pp 0x0076
#define ID_PT1_C_alv 0x0077
#define ID_PT1_C_exh 0x0078
#define ID_PT1_C_ven 0x0079
#define ID_PT1_C_ven_MGL 0x007a
#define ID_PT1_C_ven_MGL_wn 0x007b
#define ID_Ethylbenzene_C_liv 0x007c
#define ID_Ethylbenzene_C_fat 0x007d
#define ID_Ethylbenzene_C_wp 0x007e
#define ID_Ethylbenzene_C_pp 0x007f
#define ID_Ethylbenzene_C_alv 0x0080
#define ID_Ethylbenzene_C_exh 0x0081
#define ID_Ethylbenzene_C_ven 0x0082
#define ID_Ethylbenzene_C_ven_MGL 0x0083
#define ID_Ethylbenzene_C_ven_MGL_wn 0x0084
#define ID_PE2_C_liv 0x0085
#define ID_PE2_C_fat 0x0086
#define ID_PE2_C_wp 0x0087
#define ID_PE2_C_pp 0x0088
#define ID_PE2_C_alv 0x0089
#define ID_PE2_C_exh 0x008a
#define ID_PE2_C_ven 0x008b
#define ID_PE2_C_ven_MGL 0x008c
#define ID_PE2_C_ven_MGL_wn 0x008d
#define ID_PE1_C_liv 0x008e
#define ID_PE1_C_fat 0x008f
#define ID_PE1_C_wp 0x0090
#define ID_PE1_C_pp 0x0091
#define ID_PE1_C_alv 0x0092
#define ID_PE1_C_exh 0x0093
#define ID_PE1_C_ven 0x0094
#define ID_PE1_C_ven_MGL 0x0095
#define ID_PE1_C_ven_MGL_wn 0x0096
#define ID_Xylene_C_liv 0x0097
#define ID_Xylene_C_fat 0x0098
#define ID_Xylene_C_wp 0x0099
#define ID_Xylene_C_pp 0x009a
#define ID_Xylene_C_alv 0x009b
#define ID_Xylene_C_exh 0x009c
#define ID_Xylene_C_ven 0x009d
#define ID_Xylene_C_ven_MGL 0x009e
#define ID_Xylene_C_ven_MGL_wn 0x009f
#define ID_PX2_C_liv 0x00a0
#define ID_PX2_C_fat 0x00a1
#define ID_PX2_C_wp 0x00a2
#define ID_PX2_C_pp 0x00a3
#define ID_PX2_C_alv 0x00a4
#define ID_PX2_C_exh 0x00a5
#define ID_PX2_C_ven 0x00a6
#define ID_PX2_C_ven_MGL 0x00a7
#define ID_PX2_C_ven_MGL_wn 0x00a8
#define ID_PX1_C_liv 0x00a9
#define ID_PX1_C_fat 0x00aa
#define ID_PX1_C_wp 0x00ab
#define ID_PX1_C_pp 0x00ac
#define ID_PX1_C_alv 0x00ad
#define ID_PX1_C_exh 0x00ae
#define ID_PX1_C_ven 0x00af
#define ID_PX1_C_ven_MGL 0x00b0
#define ID_PX1_C_ven_MGL_wn 0x00b1

/* Inputs */
#define ID_Benzene_C_inh 0x0000
#define ID_Benzene_Q_ing 0x0001
#define ID_PB2_C_inh 0x0002
#define ID_PB2_Q_ing 0x0003
#define ID_PB1_C_inh 0x0004
#define ID_PB1_Q_ing 0x0005
#define ID_Toluene_C_inh 0x0006
#define ID_Toluene_Q_ing 0x0007
#define ID_PT2_C_inh 0x0008
#define ID_PT2_Q_ing 0x0009
#define ID_PT1_C_inh 0x000a
#define ID_PT1_Q_ing 0x000b
#define ID_Ethylbenzene_C_inh 0x000c
#define ID_Ethylbenzene_Q_ing 0x000d
#define ID_PE2_C_inh 0x000e
#define ID_PE2_Q_ing 0x000f
#define ID_PE1_C_inh 0x0010
#define ID_PE1_Q_ing 0x0011
#define ID_Xylene_C_inh 0x0012
#define ID_Xylene_Q_ing 0x0013
#define ID_PX2_C_inh 0x0014
#define ID_PX2_Q_ing 0x0015
#define ID_PX1_C_inh 0x0016
#define ID_PX1_Q_ing 0x0017

/* Parameters */
#define ID_Liver 0x00ca
#define ID_Benzene_MW 0x00cb
#define ID_BodyV 0x00cc
#define ID_V_fat 0x00cd
#define ID_V_liv 0x00ce
#define ID_V_wp 0x00cf
#define ID_V_pp 0x00d0
#define ID_Pct_Flow_fat 0x00d1
#define ID_Pct_Flow_liv 0x00d2
#define ID_Pct_Flow_wp 0x00d3
#define ID_Pct_Flow_pp 0x00d4
#define ID_Flow_alv 0x00d5
#define ID_Flow_tot 0x00d6
#define ID_Benzene_PC_art 0x00d7
#define ID_Benzene_PC_fat 0x00d8
#define ID_Benzene_PC_liv 0x00d9
#define ID_Benzene_PC_wp 0x00da
#define ID_Benzene_PC_pp 0x00db
#define ID_sigma 0x00dc
#define ID_Flow_fat 0x00dd
#define ID_Flow_liv 0x00de
#define ID_Flow_wp 0x00df
#define ID_Flow_pp 0x00e0
#define ID_PB2_MW 0x00e1
#define ID_PB2_PC_art 0x00e2
#define ID_PB2_PC_fat 0x00e3
#define ID_PB2_PC_liv 0x00e4
#define ID_PB2_PC_wp 0x00e5
#define ID_PB2_PC_pp 0x00e6
#define ID_PB1_MW 0x00e7
#define ID_PB1_PC_art 0x00e8
#define ID_PB1_PC_fat 0x00e9
#define ID_PB1_PC_liv 0x00ea
#define ID_PB1_PC_wp 0x00eb
#define ID_PB1_PC_pp 0x00ec
#define ID_Benzene_J2_k2 0x00ed
#define ID_Benzene_J1_k1 0x00ee
#define ID_Benzene_J3_k3 0x00ef
#define ID_Benzene_J4_k1 0x00f0
#define ID_Benzene_J5_k2 0x00f1
#define ID_Benzene_J6_k3 0x00f2
#define ID_Toluene_MW 0x00f3
#define ID_Toluene_PC_art 0x00f4
#define ID_Toluene_PC_fat 0x00f5
#define ID_Toluene_PC_liv 0x00f6
#define ID_Toluene_PC_wp 0x00f7
#define ID_Toluene_PC_pp 0x00f8
#define ID_PT2_MW 0x00f9
#define ID_PT2_PC_art 0x00fa
#define ID_PT2_PC_fat 0x00fb
#define ID_PT2_PC_liv 0x00fc
#define ID_PT2_PC_wp 0x00fd
#define ID_PT2_PC_pp 0x00fe
#define ID_PT1_MW 0x00ff
#define ID_PT1_PC_art 0x0100
#define ID_PT1_PC_fat 0x0101
#define ID_PT1_PC_liv 0x0102
#define ID_PT1_PC_wp 0x0103
#define ID_PT1_PC_pp 0x0104
#define ID_Toluene_J2_k2 0x0105
#define ID_Toluene_J1_k1 0x0106
#define ID_Toluene_J3_k3 0x0107
#define ID_Toluene_J4_k1 0x0108
#define ID_Toluene_J5_k2 0x0109
#define ID_Toluene_J6_k3 0x010a
#define ID_Ethylbenzene_MW 0x010b
#define ID_Ethylbenzene_PC_art 0x010c
#define ID_Ethylbenzene_PC_fat 0x010d
#define ID_Ethylbenzene_PC_liv 0x010e
#define ID_Ethylbenzene_PC_wp 0x010f
#define ID_Ethylbenzene_PC_pp 0x0110
#define ID_PE2_MW 0x0111
#define ID_PE2_PC_art 0x0112
#define ID_PE2_PC_fat 0x0113
#define ID_PE2_PC_liv 0x0114
#define ID_PE2_PC_wp 0x0115
#define ID_PE2_PC_pp 0x0116
#define ID_PE1_MW 0x0117
#define ID_PE1_PC_art 0x0118
#define ID_PE1_PC_fat 0x0119
#define ID_PE1_PC_liv 0x011a
#define ID_PE1_PC_wp 0x011b
#define ID_PE1_PC_pp 0x011c
#define ID_Ethylbenzene_J2_k2 0x011d
#define ID_Ethylbenzene_J1_k1 0x011e
#define ID_Ethylbenzene_J3_k3 0x011f
#define ID_Ethylbenzene_J4_k1 0x0120
#define ID_Ethylbenzene_J5_k2 0x0121
#define ID_Ethylbenzene_J6_k3 0x0122
#define ID_Xylene_MW 0x0123
#define ID_Xylene_PC_art 0x0124
#define ID_Xylene_PC_fat 0x0125
#define ID_Xylene_PC_liv 0x0126
#define ID_Xylene_PC_wp 0x0127
#define ID_Xylene_PC_pp 0x0128
#define ID_PX2_MW 0x0129
#define ID_PX2_PC_art 0x012a
#define ID_PX2_PC_fat 0x012b
#define ID_PX2_PC_liv 0x012c
#define ID_PX2_PC_wp 0x012d
#define ID_PX2_PC_pp 0x012e
#define ID_PX1_MW 0x012f
#define ID_PX1_PC_art 0x0130
#define ID_PX1_PC_fat 0x0131
#define ID_PX1_PC_liv 0x0132
#define ID_PX1_PC_wp 0x0133
#define ID_PX1_PC_pp 0x0134
#define ID_Xylene_J2_k2 0x0135
#define ID_Xylene_J1_k1 0x0136
#define ID_Xylene_J3_k3 0x0137
#define ID_Xylene_J4_k1 0x0138
#define ID_Xylene_J5_k2 0x0139
#define ID_Xylene_J6_k3 0x013a


/*----- Global Variables */

/* For export. Keep track of who we are. */
char szModelDescFilename[] = "SBML_List.model";
char szModelSourceFilename[] = __FILE__;
char szModelGenAndVersion[] = "/Users/frederic_bois/bin/mod v5.4.0";

/* Externs */
extern BOOL vbModelReinitd;

/* Model Dimensions */
int vnStates = 69;
int vnOutputs = 109;
int vnModelVars = 178;
int vnInputs = 24;
int vnParms = 113;

/* States and Outputs*/
double vrgModelVars[178];

/* Inputs */
IFN vrgInputs[24];

/* Parameters */
double Liver;
double Benzene_MW;
double BodyV;
double V_fat;
double V_liv;
double V_wp;
double V_pp;
double Pct_Flow_fat;
double Pct_Flow_liv;
double Pct_Flow_wp;
double Pct_Flow_pp;
double Flow_alv;
double Flow_tot;
double Benzene_PC_art;
double Benzene_PC_fat;
double Benzene_PC_liv;
double Benzene_PC_wp;
double Benzene_PC_pp;
double sigma;
double Flow_fat;
double Flow_liv;
double Flow_wp;
double Flow_pp;
double PB2_MW;
double PB2_PC_art;
double PB2_PC_fat;
double PB2_PC_liv;
double PB2_PC_wp;
double PB2_PC_pp;
double PB1_MW;
double PB1_PC_art;
double PB1_PC_fat;
double PB1_PC_liv;
double PB1_PC_wp;
double PB1_PC_pp;
double Benzene_J2_k2;
double Benzene_J1_k1;
double Benzene_J3_k3;
double Benzene_J4_k1;
double Benzene_J5_k2;
double Benzene_J6_k3;
double Toluene_MW;
double Toluene_PC_art;
double Toluene_PC_fat;
double Toluene_PC_liv;
double Toluene_PC_wp;
double Toluene_PC_pp;
double PT2_MW;
double PT2_PC_art;
double PT2_PC_fat;
double PT2_PC_liv;
double PT2_PC_wp;
double PT2_PC_pp;
double PT1_MW;
double PT1_PC_art;
double PT1_PC_fat;
double PT1_PC_liv;
double PT1_PC_wp;
double PT1_PC_pp;
double Toluene_J2_k2;
double Toluene_J1_k1;
double Toluene_J3_k3;
double Toluene_J4_k1;
double Toluene_J5_k2;
double Toluene_J6_k3;
double Ethylbenzene_MW;
double Ethylbenzene_PC_art;
double Ethylbenzene_PC_fat;
double Ethylbenzene_PC_liv;
double Ethylbenzene_PC_wp;
double Ethylbenzene_PC_pp;
double PE2_MW;
double PE2_PC_art;
double PE2_PC_fat;
double PE2_PC_liv;
double PE2_PC_wp;
double PE2_PC_pp;
double PE1_MW;
double PE1_PC_art;
double PE1_PC_fat;
double PE1_PC_liv;
double PE1_PC_wp;
double PE1_PC_pp;
double Ethylbenzene_J2_k2;
double Ethylbenzene_J1_k1;
double Ethylbenzene_J3_k3;
double Ethylbenzene_J4_k1;
double Ethylbenzene_J5_k2;
double Ethylbenzene_J6_k3;
double Xylene_MW;
double Xylene_PC_art;
double Xylene_PC_fat;
double Xylene_PC_liv;
double Xylene_PC_wp;
double Xylene_PC_pp;
double PX2_MW;
double PX2_PC_art;
double PX2_PC_fat;
double PX2_PC_liv;
double PX2_PC_wp;
double PX2_PC_pp;
double PX1_MW;
double PX1_PC_art;
double PX1_PC_fat;
double PX1_PC_liv;
double PX1_PC_wp;
double PX1_PC_pp;
double Xylene_J2_k2;
double Xylene_J1_k1;
double Xylene_J3_k3;
double Xylene_J4_k1;
double Xylene_J5_k2;
double Xylene_J6_k3;


/*----- Global Variable Map */

VMMAPSTRCT vrgvmGlo[] = {
  {"CYP2E1_Liver", (PVOID) &vrgModelVars[ID_CYP2E1_Liver], ID_STATE | ID_CYP2E1_Liver},
  {"Benzene_Q_fat", (PVOID) &vrgModelVars[ID_Benzene_Q_fat], ID_STATE | ID_Benzene_Q_fat},
  {"Benzene_Q_wp", (PVOID) &vrgModelVars[ID_Benzene_Q_wp], ID_STATE | ID_Benzene_Q_wp},
  {"Benzene_Q_pp", (PVOID) &vrgModelVars[ID_Benzene_Q_pp], ID_STATE | ID_Benzene_Q_pp},
  {"Benzene_Liver", (PVOID) &vrgModelVars[ID_Benzene_Liver], ID_STATE | ID_Benzene_Liver},
  {"Benzene_Q_exh", (PVOID) &vrgModelVars[ID_Benzene_Q_exh], ID_STATE | ID_Benzene_Q_exh},
  {"Benzene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Benzene_CYP2E1_Liver], ID_STATE | ID_Benzene_CYP2E1_Liver},
  {"PB1_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_PB1_CYP2E1_Liver], ID_STATE | ID_PB1_CYP2E1_Liver},
  {"PB2_Q_fat", (PVOID) &vrgModelVars[ID_PB2_Q_fat], ID_STATE | ID_PB2_Q_fat},
  {"PB2_Q_wp", (PVOID) &vrgModelVars[ID_PB2_Q_wp], ID_STATE | ID_PB2_Q_wp},
  {"PB2_Q_pp", (PVOID) &vrgModelVars[ID_PB2_Q_pp], ID_STATE | ID_PB2_Q_pp},
  {"PB2_Liver", (PVOID) &vrgModelVars[ID_PB2_Liver], ID_STATE | ID_PB2_Liver},
  {"PB2_Q_exh", (PVOID) &vrgModelVars[ID_PB2_Q_exh], ID_STATE | ID_PB2_Q_exh},
  {"PB1_Q_fat", (PVOID) &vrgModelVars[ID_PB1_Q_fat], ID_STATE | ID_PB1_Q_fat},
  {"PB1_Q_wp", (PVOID) &vrgModelVars[ID_PB1_Q_wp], ID_STATE | ID_PB1_Q_wp},
  {"PB1_Q_pp", (PVOID) &vrgModelVars[ID_PB1_Q_pp], ID_STATE | ID_PB1_Q_pp},
  {"PB1_Liver", (PVOID) &vrgModelVars[ID_PB1_Liver], ID_STATE | ID_PB1_Liver},
  {"PB1_Q_exh", (PVOID) &vrgModelVars[ID_PB1_Q_exh], ID_STATE | ID_PB1_Q_exh},
  {"Toluene_Q_fat", (PVOID) &vrgModelVars[ID_Toluene_Q_fat], ID_STATE | ID_Toluene_Q_fat},
  {"Toluene_Q_wp", (PVOID) &vrgModelVars[ID_Toluene_Q_wp], ID_STATE | ID_Toluene_Q_wp},
  {"Toluene_Q_pp", (PVOID) &vrgModelVars[ID_Toluene_Q_pp], ID_STATE | ID_Toluene_Q_pp},
  {"Toluene_Liver", (PVOID) &vrgModelVars[ID_Toluene_Liver], ID_STATE | ID_Toluene_Liver},
  {"Toluene_Q_exh", (PVOID) &vrgModelVars[ID_Toluene_Q_exh], ID_STATE | ID_Toluene_Q_exh},
  {"Toluene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Toluene_CYP2E1_Liver], ID_STATE | ID_Toluene_CYP2E1_Liver},
  {"PT1_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_PT1_CYP2E1_Liver], ID_STATE | ID_PT1_CYP2E1_Liver},
  {"PT2_Q_fat", (PVOID) &vrgModelVars[ID_PT2_Q_fat], ID_STATE | ID_PT2_Q_fat},
  {"PT2_Q_wp", (PVOID) &vrgModelVars[ID_PT2_Q_wp], ID_STATE | ID_PT2_Q_wp},
  {"PT2_Q_pp", (PVOID) &vrgModelVars[ID_PT2_Q_pp], ID_STATE | ID_PT2_Q_pp},
  {"PT2_Liver", (PVOID) &vrgModelVars[ID_PT2_Liver], ID_STATE | ID_PT2_Liver},
  {"PT2_Q_exh", (PVOID) &vrgModelVars[ID_PT2_Q_exh], ID_STATE | ID_PT2_Q_exh},
  {"PT1_Q_fat", (PVOID) &vrgModelVars[ID_PT1_Q_fat], ID_STATE | ID_PT1_Q_fat},
  {"PT1_Q_wp", (PVOID) &vrgModelVars[ID_PT1_Q_wp], ID_STATE | ID_PT1_Q_wp},
  {"PT1_Q_pp", (PVOID) &vrgModelVars[ID_PT1_Q_pp], ID_STATE | ID_PT1_Q_pp},
  {"PT1_Liver", (PVOID) &vrgModelVars[ID_PT1_Liver], ID_STATE | ID_PT1_Liver},
  {"PT1_Q_exh", (PVOID) &vrgModelVars[ID_PT1_Q_exh], ID_STATE | ID_PT1_Q_exh},
  {"Ethylbenzene_Q_fat", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_fat], ID_STATE | ID_Ethylbenzene_Q_fat},
  {"Ethylbenzene_Q_wp", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_wp], ID_STATE | ID_Ethylbenzene_Q_wp},
  {"Ethylbenzene_Q_pp", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_pp], ID_STATE | ID_Ethylbenzene_Q_pp},
  {"Ethylbenzene_Liver", (PVOID) &vrgModelVars[ID_Ethylbenzene_Liver], ID_STATE | ID_Ethylbenzene_Liver},
  {"Ethylbenzene_Q_exh", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_exh], ID_STATE | ID_Ethylbenzene_Q_exh},
  {"Ethylbenzene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Ethylbenzene_CYP2E1_Liver], ID_STATE | ID_Ethylbenzene_CYP2E1_Liver},
  {"PE1_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_PE1_CYP2E1_Liver], ID_STATE | ID_PE1_CYP2E1_Liver},
  {"PE2_Q_fat", (PVOID) &vrgModelVars[ID_PE2_Q_fat], ID_STATE | ID_PE2_Q_fat},
  {"PE2_Q_wp", (PVOID) &vrgModelVars[ID_PE2_Q_wp], ID_STATE | ID_PE2_Q_wp},
  {"PE2_Q_pp", (PVOID) &vrgModelVars[ID_PE2_Q_pp], ID_STATE | ID_PE2_Q_pp},
  {"PE2_Liver", (PVOID) &vrgModelVars[ID_PE2_Liver], ID_STATE | ID_PE2_Liver},
  {"PE2_Q_exh", (PVOID) &vrgModelVars[ID_PE2_Q_exh], ID_STATE | ID_PE2_Q_exh},
  {"PE1_Q_fat", (PVOID) &vrgModelVars[ID_PE1_Q_fat], ID_STATE | ID_PE1_Q_fat},
  {"PE1_Q_wp", (PVOID) &vrgModelVars[ID_PE1_Q_wp], ID_STATE | ID_PE1_Q_wp},
  {"PE1_Q_pp", (PVOID) &vrgModelVars[ID_PE1_Q_pp], ID_STATE | ID_PE1_Q_pp},
  {"PE1_Liver", (PVOID) &vrgModelVars[ID_PE1_Liver], ID_STATE | ID_PE1_Liver},
  {"PE1_Q_exh", (PVOID) &vrgModelVars[ID_PE1_Q_exh], ID_STATE | ID_PE1_Q_exh},
  {"Xylene_Q_fat", (PVOID) &vrgModelVars[ID_Xylene_Q_fat], ID_STATE | ID_Xylene_Q_fat},
  {"Xylene_Q_wp", (PVOID) &vrgModelVars[ID_Xylene_Q_wp], ID_STATE | ID_Xylene_Q_wp},
  {"Xylene_Q_pp", (PVOID) &vrgModelVars[ID_Xylene_Q_pp], ID_STATE | ID_Xylene_Q_pp},
  {"Xylene_Liver", (PVOID) &vrgModelVars[ID_Xylene_Liver], ID_STATE | ID_Xylene_Liver},
  {"Xylene_Q_exh", (PVOID) &vrgModelVars[ID_Xylene_Q_exh], ID_STATE | ID_Xylene_Q_exh},
  {"Xylene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Xylene_CYP2E1_Liver], ID_STATE | ID_Xylene_CYP2E1_Liver},
  {"PX1_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_PX1_CYP2E1_Liver], ID_STATE | ID_PX1_CYP2E1_Liver},
  {"PX2_Q_fat", (PVOID) &vrgModelVars[ID_PX2_Q_fat], ID_STATE | ID_PX2_Q_fat},
  {"PX2_Q_wp", (PVOID) &vrgModelVars[ID_PX2_Q_wp], ID_STATE | ID_PX2_Q_wp},
  {"PX2_Q_pp", (PVOID) &vrgModelVars[ID_PX2_Q_pp], ID_STATE | ID_PX2_Q_pp},
  {"PX2_Liver", (PVOID) &vrgModelVars[ID_PX2_Liver], ID_STATE | ID_PX2_Liver},
  {"PX2_Q_exh", (PVOID) &vrgModelVars[ID_PX2_Q_exh], ID_STATE | ID_PX2_Q_exh},
  {"PX1_Q_fat", (PVOID) &vrgModelVars[ID_PX1_Q_fat], ID_STATE | ID_PX1_Q_fat},
  {"PX1_Q_wp", (PVOID) &vrgModelVars[ID_PX1_Q_wp], ID_STATE | ID_PX1_Q_wp},
  {"PX1_Q_pp", (PVOID) &vrgModelVars[ID_PX1_Q_pp], ID_STATE | ID_PX1_Q_pp},
  {"PX1_Liver", (PVOID) &vrgModelVars[ID_PX1_Liver], ID_STATE | ID_PX1_Liver},
  {"PX1_Q_exh", (PVOID) &vrgModelVars[ID_PX1_Q_exh], ID_STATE | ID_PX1_Q_exh},
  {"Benzene_C_liv", (PVOID) &vrgModelVars[ID_Benzene_C_liv], ID_OUTPUT | ID_Benzene_C_liv},
  {"Benzene_C_fat", (PVOID) &vrgModelVars[ID_Benzene_C_fat], ID_OUTPUT | ID_Benzene_C_fat},
  {"Benzene_C_wp", (PVOID) &vrgModelVars[ID_Benzene_C_wp], ID_OUTPUT | ID_Benzene_C_wp},
  {"Benzene_C_pp", (PVOID) &vrgModelVars[ID_Benzene_C_pp], ID_OUTPUT | ID_Benzene_C_pp},
  {"Benzene_C_alv", (PVOID) &vrgModelVars[ID_Benzene_C_alv], ID_OUTPUT | ID_Benzene_C_alv},
  {"Benzene_C_exh", (PVOID) &vrgModelVars[ID_Benzene_C_exh], ID_OUTPUT | ID_Benzene_C_exh},
  {"Benzene_C_ven", (PVOID) &vrgModelVars[ID_Benzene_C_ven], ID_OUTPUT | ID_Benzene_C_ven},
  {"Benzene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Benzene_C_ven_MGL], ID_OUTPUT | ID_Benzene_C_ven_MGL},
  {"Benzene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Benzene_C_ven_MGL_wn], ID_OUTPUT | ID_Benzene_C_ven_MGL_wn},
  {"sigma_obs", (PVOID) &vrgModelVars[ID_sigma_obs], ID_OUTPUT | ID_sigma_obs},
  {"PB2_C_liv", (PVOID) &vrgModelVars[ID_PB2_C_liv], ID_OUTPUT | ID_PB2_C_liv},
  {"PB2_C_fat", (PVOID) &vrgModelVars[ID_PB2_C_fat], ID_OUTPUT | ID_PB2_C_fat},
  {"PB2_C_wp", (PVOID) &vrgModelVars[ID_PB2_C_wp], ID_OUTPUT | ID_PB2_C_wp},
  {"PB2_C_pp", (PVOID) &vrgModelVars[ID_PB2_C_pp], ID_OUTPUT | ID_PB2_C_pp},
  {"PB2_C_alv", (PVOID) &vrgModelVars[ID_PB2_C_alv], ID_OUTPUT | ID_PB2_C_alv},
  {"PB2_C_exh", (PVOID) &vrgModelVars[ID_PB2_C_exh], ID_OUTPUT | ID_PB2_C_exh},
  {"PB2_C_ven", (PVOID) &vrgModelVars[ID_PB2_C_ven], ID_OUTPUT | ID_PB2_C_ven},
  {"PB2_C_ven_MGL", (PVOID) &vrgModelVars[ID_PB2_C_ven_MGL], ID_OUTPUT | ID_PB2_C_ven_MGL},
  {"PB2_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PB2_C_ven_MGL_wn], ID_OUTPUT | ID_PB2_C_ven_MGL_wn},
  {"PB1_C_liv", (PVOID) &vrgModelVars[ID_PB1_C_liv], ID_OUTPUT | ID_PB1_C_liv},
  {"PB1_C_fat", (PVOID) &vrgModelVars[ID_PB1_C_fat], ID_OUTPUT | ID_PB1_C_fat},
  {"PB1_C_wp", (PVOID) &vrgModelVars[ID_PB1_C_wp], ID_OUTPUT | ID_PB1_C_wp},
  {"PB1_C_pp", (PVOID) &vrgModelVars[ID_PB1_C_pp], ID_OUTPUT | ID_PB1_C_pp},
  {"PB1_C_alv", (PVOID) &vrgModelVars[ID_PB1_C_alv], ID_OUTPUT | ID_PB1_C_alv},
  {"PB1_C_exh", (PVOID) &vrgModelVars[ID_PB1_C_exh], ID_OUTPUT | ID_PB1_C_exh},
  {"PB1_C_ven", (PVOID) &vrgModelVars[ID_PB1_C_ven], ID_OUTPUT | ID_PB1_C_ven},
  {"PB1_C_ven_MGL", (PVOID) &vrgModelVars[ID_PB1_C_ven_MGL], ID_OUTPUT | ID_PB1_C_ven_MGL},
  {"PB1_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PB1_C_ven_MGL_wn], ID_OUTPUT | ID_PB1_C_ven_MGL_wn},
  {"Toluene_C_liv", (PVOID) &vrgModelVars[ID_Toluene_C_liv], ID_OUTPUT | ID_Toluene_C_liv},
  {"Toluene_C_fat", (PVOID) &vrgModelVars[ID_Toluene_C_fat], ID_OUTPUT | ID_Toluene_C_fat},
  {"Toluene_C_wp", (PVOID) &vrgModelVars[ID_Toluene_C_wp], ID_OUTPUT | ID_Toluene_C_wp},
  {"Toluene_C_pp", (PVOID) &vrgModelVars[ID_Toluene_C_pp], ID_OUTPUT | ID_Toluene_C_pp},
  {"Toluene_C_alv", (PVOID) &vrgModelVars[ID_Toluene_C_alv], ID_OUTPUT | ID_Toluene_C_alv},
  {"Toluene_C_exh", (PVOID) &vrgModelVars[ID_Toluene_C_exh], ID_OUTPUT | ID_Toluene_C_exh},
  {"Toluene_C_ven", (PVOID) &vrgModelVars[ID_Toluene_C_ven], ID_OUTPUT | ID_Toluene_C_ven},
  {"Toluene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Toluene_C_ven_MGL], ID_OUTPUT | ID_Toluene_C_ven_MGL},
  {"Toluene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Toluene_C_ven_MGL_wn], ID_OUTPUT | ID_Toluene_C_ven_MGL_wn},
  {"PT2_C_liv", (PVOID) &vrgModelVars[ID_PT2_C_liv], ID_OUTPUT | ID_PT2_C_liv},
  {"PT2_C_fat", (PVOID) &vrgModelVars[ID_PT2_C_fat], ID_OUTPUT | ID_PT2_C_fat},
  {"PT2_C_wp", (PVOID) &vrgModelVars[ID_PT2_C_wp], ID_OUTPUT | ID_PT2_C_wp},
  {"PT2_C_pp", (PVOID) &vrgModelVars[ID_PT2_C_pp], ID_OUTPUT | ID_PT2_C_pp},
  {"PT2_C_alv", (PVOID) &vrgModelVars[ID_PT2_C_alv], ID_OUTPUT | ID_PT2_C_alv},
  {"PT2_C_exh", (PVOID) &vrgModelVars[ID_PT2_C_exh], ID_OUTPUT | ID_PT2_C_exh},
  {"PT2_C_ven", (PVOID) &vrgModelVars[ID_PT2_C_ven], ID_OUTPUT | ID_PT2_C_ven},
  {"PT2_C_ven_MGL", (PVOID) &vrgModelVars[ID_PT2_C_ven_MGL], ID_OUTPUT | ID_PT2_C_ven_MGL},
  {"PT2_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PT2_C_ven_MGL_wn], ID_OUTPUT | ID_PT2_C_ven_MGL_wn},
  {"PT1_C_liv", (PVOID) &vrgModelVars[ID_PT1_C_liv], ID_OUTPUT | ID_PT1_C_liv},
  {"PT1_C_fat", (PVOID) &vrgModelVars[ID_PT1_C_fat], ID_OUTPUT | ID_PT1_C_fat},
  {"PT1_C_wp", (PVOID) &vrgModelVars[ID_PT1_C_wp], ID_OUTPUT | ID_PT1_C_wp},
  {"PT1_C_pp", (PVOID) &vrgModelVars[ID_PT1_C_pp], ID_OUTPUT | ID_PT1_C_pp},
  {"PT1_C_alv", (PVOID) &vrgModelVars[ID_PT1_C_alv], ID_OUTPUT | ID_PT1_C_alv},
  {"PT1_C_exh", (PVOID) &vrgModelVars[ID_PT1_C_exh], ID_OUTPUT | ID_PT1_C_exh},
  {"PT1_C_ven", (PVOID) &vrgModelVars[ID_PT1_C_ven], ID_OUTPUT | ID_PT1_C_ven},
  {"PT1_C_ven_MGL", (PVOID) &vrgModelVars[ID_PT1_C_ven_MGL], ID_OUTPUT | ID_PT1_C_ven_MGL},
  {"PT1_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PT1_C_ven_MGL_wn], ID_OUTPUT | ID_PT1_C_ven_MGL_wn},
  {"Ethylbenzene_C_liv", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_liv], ID_OUTPUT | ID_Ethylbenzene_C_liv},
  {"Ethylbenzene_C_fat", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_fat], ID_OUTPUT | ID_Ethylbenzene_C_fat},
  {"Ethylbenzene_C_wp", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_wp], ID_OUTPUT | ID_Ethylbenzene_C_wp},
  {"Ethylbenzene_C_pp", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_pp], ID_OUTPUT | ID_Ethylbenzene_C_pp},
  {"Ethylbenzene_C_alv", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_alv], ID_OUTPUT | ID_Ethylbenzene_C_alv},
  {"Ethylbenzene_C_exh", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_exh], ID_OUTPUT | ID_Ethylbenzene_C_exh},
  {"Ethylbenzene_C_ven", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven], ID_OUTPUT | ID_Ethylbenzene_C_ven},
  {"Ethylbenzene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven_MGL], ID_OUTPUT | ID_Ethylbenzene_C_ven_MGL},
  {"Ethylbenzene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven_MGL_wn], ID_OUTPUT | ID_Ethylbenzene_C_ven_MGL_wn},
  {"PE2_C_liv", (PVOID) &vrgModelVars[ID_PE2_C_liv], ID_OUTPUT | ID_PE2_C_liv},
  {"PE2_C_fat", (PVOID) &vrgModelVars[ID_PE2_C_fat], ID_OUTPUT | ID_PE2_C_fat},
  {"PE2_C_wp", (PVOID) &vrgModelVars[ID_PE2_C_wp], ID_OUTPUT | ID_PE2_C_wp},
  {"PE2_C_pp", (PVOID) &vrgModelVars[ID_PE2_C_pp], ID_OUTPUT | ID_PE2_C_pp},
  {"PE2_C_alv", (PVOID) &vrgModelVars[ID_PE2_C_alv], ID_OUTPUT | ID_PE2_C_alv},
  {"PE2_C_exh", (PVOID) &vrgModelVars[ID_PE2_C_exh], ID_OUTPUT | ID_PE2_C_exh},
  {"PE2_C_ven", (PVOID) &vrgModelVars[ID_PE2_C_ven], ID_OUTPUT | ID_PE2_C_ven},
  {"PE2_C_ven_MGL", (PVOID) &vrgModelVars[ID_PE2_C_ven_MGL], ID_OUTPUT | ID_PE2_C_ven_MGL},
  {"PE2_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PE2_C_ven_MGL_wn], ID_OUTPUT | ID_PE2_C_ven_MGL_wn},
  {"PE1_C_liv", (PVOID) &vrgModelVars[ID_PE1_C_liv], ID_OUTPUT | ID_PE1_C_liv},
  {"PE1_C_fat", (PVOID) &vrgModelVars[ID_PE1_C_fat], ID_OUTPUT | ID_PE1_C_fat},
  {"PE1_C_wp", (PVOID) &vrgModelVars[ID_PE1_C_wp], ID_OUTPUT | ID_PE1_C_wp},
  {"PE1_C_pp", (PVOID) &vrgModelVars[ID_PE1_C_pp], ID_OUTPUT | ID_PE1_C_pp},
  {"PE1_C_alv", (PVOID) &vrgModelVars[ID_PE1_C_alv], ID_OUTPUT | ID_PE1_C_alv},
  {"PE1_C_exh", (PVOID) &vrgModelVars[ID_PE1_C_exh], ID_OUTPUT | ID_PE1_C_exh},
  {"PE1_C_ven", (PVOID) &vrgModelVars[ID_PE1_C_ven], ID_OUTPUT | ID_PE1_C_ven},
  {"PE1_C_ven_MGL", (PVOID) &vrgModelVars[ID_PE1_C_ven_MGL], ID_OUTPUT | ID_PE1_C_ven_MGL},
  {"PE1_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PE1_C_ven_MGL_wn], ID_OUTPUT | ID_PE1_C_ven_MGL_wn},
  {"Xylene_C_liv", (PVOID) &vrgModelVars[ID_Xylene_C_liv], ID_OUTPUT | ID_Xylene_C_liv},
  {"Xylene_C_fat", (PVOID) &vrgModelVars[ID_Xylene_C_fat], ID_OUTPUT | ID_Xylene_C_fat},
  {"Xylene_C_wp", (PVOID) &vrgModelVars[ID_Xylene_C_wp], ID_OUTPUT | ID_Xylene_C_wp},
  {"Xylene_C_pp", (PVOID) &vrgModelVars[ID_Xylene_C_pp], ID_OUTPUT | ID_Xylene_C_pp},
  {"Xylene_C_alv", (PVOID) &vrgModelVars[ID_Xylene_C_alv], ID_OUTPUT | ID_Xylene_C_alv},
  {"Xylene_C_exh", (PVOID) &vrgModelVars[ID_Xylene_C_exh], ID_OUTPUT | ID_Xylene_C_exh},
  {"Xylene_C_ven", (PVOID) &vrgModelVars[ID_Xylene_C_ven], ID_OUTPUT | ID_Xylene_C_ven},
  {"Xylene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Xylene_C_ven_MGL], ID_OUTPUT | ID_Xylene_C_ven_MGL},
  {"Xylene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Xylene_C_ven_MGL_wn], ID_OUTPUT | ID_Xylene_C_ven_MGL_wn},
  {"PX2_C_liv", (PVOID) &vrgModelVars[ID_PX2_C_liv], ID_OUTPUT | ID_PX2_C_liv},
  {"PX2_C_fat", (PVOID) &vrgModelVars[ID_PX2_C_fat], ID_OUTPUT | ID_PX2_C_fat},
  {"PX2_C_wp", (PVOID) &vrgModelVars[ID_PX2_C_wp], ID_OUTPUT | ID_PX2_C_wp},
  {"PX2_C_pp", (PVOID) &vrgModelVars[ID_PX2_C_pp], ID_OUTPUT | ID_PX2_C_pp},
  {"PX2_C_alv", (PVOID) &vrgModelVars[ID_PX2_C_alv], ID_OUTPUT | ID_PX2_C_alv},
  {"PX2_C_exh", (PVOID) &vrgModelVars[ID_PX2_C_exh], ID_OUTPUT | ID_PX2_C_exh},
  {"PX2_C_ven", (PVOID) &vrgModelVars[ID_PX2_C_ven], ID_OUTPUT | ID_PX2_C_ven},
  {"PX2_C_ven_MGL", (PVOID) &vrgModelVars[ID_PX2_C_ven_MGL], ID_OUTPUT | ID_PX2_C_ven_MGL},
  {"PX2_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PX2_C_ven_MGL_wn], ID_OUTPUT | ID_PX2_C_ven_MGL_wn},
  {"PX1_C_liv", (PVOID) &vrgModelVars[ID_PX1_C_liv], ID_OUTPUT | ID_PX1_C_liv},
  {"PX1_C_fat", (PVOID) &vrgModelVars[ID_PX1_C_fat], ID_OUTPUT | ID_PX1_C_fat},
  {"PX1_C_wp", (PVOID) &vrgModelVars[ID_PX1_C_wp], ID_OUTPUT | ID_PX1_C_wp},
  {"PX1_C_pp", (PVOID) &vrgModelVars[ID_PX1_C_pp], ID_OUTPUT | ID_PX1_C_pp},
  {"PX1_C_alv", (PVOID) &vrgModelVars[ID_PX1_C_alv], ID_OUTPUT | ID_PX1_C_alv},
  {"PX1_C_exh", (PVOID) &vrgModelVars[ID_PX1_C_exh], ID_OUTPUT | ID_PX1_C_exh},
  {"PX1_C_ven", (PVOID) &vrgModelVars[ID_PX1_C_ven], ID_OUTPUT | ID_PX1_C_ven},
  {"PX1_C_ven_MGL", (PVOID) &vrgModelVars[ID_PX1_C_ven_MGL], ID_OUTPUT | ID_PX1_C_ven_MGL},
  {"PX1_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_PX1_C_ven_MGL_wn], ID_OUTPUT | ID_PX1_C_ven_MGL_wn},
  {"Benzene_C_inh", (PVOID) &vrgInputs[ID_Benzene_C_inh], ID_INPUT | ID_Benzene_C_inh},
  {"Benzene_Q_ing", (PVOID) &vrgInputs[ID_Benzene_Q_ing], ID_INPUT | ID_Benzene_Q_ing},
  {"PB2_C_inh", (PVOID) &vrgInputs[ID_PB2_C_inh], ID_INPUT | ID_PB2_C_inh},
  {"PB2_Q_ing", (PVOID) &vrgInputs[ID_PB2_Q_ing], ID_INPUT | ID_PB2_Q_ing},
  {"PB1_C_inh", (PVOID) &vrgInputs[ID_PB1_C_inh], ID_INPUT | ID_PB1_C_inh},
  {"PB1_Q_ing", (PVOID) &vrgInputs[ID_PB1_Q_ing], ID_INPUT | ID_PB1_Q_ing},
  {"Toluene_C_inh", (PVOID) &vrgInputs[ID_Toluene_C_inh], ID_INPUT | ID_Toluene_C_inh},
  {"Toluene_Q_ing", (PVOID) &vrgInputs[ID_Toluene_Q_ing], ID_INPUT | ID_Toluene_Q_ing},
  {"PT2_C_inh", (PVOID) &vrgInputs[ID_PT2_C_inh], ID_INPUT | ID_PT2_C_inh},
  {"PT2_Q_ing", (PVOID) &vrgInputs[ID_PT2_Q_ing], ID_INPUT | ID_PT2_Q_ing},
  {"PT1_C_inh", (PVOID) &vrgInputs[ID_PT1_C_inh], ID_INPUT | ID_PT1_C_inh},
  {"PT1_Q_ing", (PVOID) &vrgInputs[ID_PT1_Q_ing], ID_INPUT | ID_PT1_Q_ing},
  {"Ethylbenzene_C_inh", (PVOID) &vrgInputs[ID_Ethylbenzene_C_inh], ID_INPUT | ID_Ethylbenzene_C_inh},
  {"Ethylbenzene_Q_ing", (PVOID) &vrgInputs[ID_Ethylbenzene_Q_ing], ID_INPUT | ID_Ethylbenzene_Q_ing},
  {"PE2_C_inh", (PVOID) &vrgInputs[ID_PE2_C_inh], ID_INPUT | ID_PE2_C_inh},
  {"PE2_Q_ing", (PVOID) &vrgInputs[ID_PE2_Q_ing], ID_INPUT | ID_PE2_Q_ing},
  {"PE1_C_inh", (PVOID) &vrgInputs[ID_PE1_C_inh], ID_INPUT | ID_PE1_C_inh},
  {"PE1_Q_ing", (PVOID) &vrgInputs[ID_PE1_Q_ing], ID_INPUT | ID_PE1_Q_ing},
  {"Xylene_C_inh", (PVOID) &vrgInputs[ID_Xylene_C_inh], ID_INPUT | ID_Xylene_C_inh},
  {"Xylene_Q_ing", (PVOID) &vrgInputs[ID_Xylene_Q_ing], ID_INPUT | ID_Xylene_Q_ing},
  {"PX2_C_inh", (PVOID) &vrgInputs[ID_PX2_C_inh], ID_INPUT | ID_PX2_C_inh},
  {"PX2_Q_ing", (PVOID) &vrgInputs[ID_PX2_Q_ing], ID_INPUT | ID_PX2_Q_ing},
  {"PX1_C_inh", (PVOID) &vrgInputs[ID_PX1_C_inh], ID_INPUT | ID_PX1_C_inh},
  {"PX1_Q_ing", (PVOID) &vrgInputs[ID_PX1_Q_ing], ID_INPUT | ID_PX1_Q_ing},
  {"Liver", (PVOID) &Liver, ID_PARM | ID_Liver},
  {"Benzene_MW", (PVOID) &Benzene_MW, ID_PARM | ID_Benzene_MW},
  {"BodyV", (PVOID) &BodyV, ID_PARM | ID_BodyV},
  {"V_fat", (PVOID) &V_fat, ID_PARM | ID_V_fat},
  {"V_liv", (PVOID) &V_liv, ID_PARM | ID_V_liv},
  {"V_wp", (PVOID) &V_wp, ID_PARM | ID_V_wp},
  {"V_pp", (PVOID) &V_pp, ID_PARM | ID_V_pp},
  {"Pct_Flow_fat", (PVOID) &Pct_Flow_fat, ID_PARM | ID_Pct_Flow_fat},
  {"Pct_Flow_liv", (PVOID) &Pct_Flow_liv, ID_PARM | ID_Pct_Flow_liv},
  {"Pct_Flow_wp", (PVOID) &Pct_Flow_wp, ID_PARM | ID_Pct_Flow_wp},
  {"Pct_Flow_pp", (PVOID) &Pct_Flow_pp, ID_PARM | ID_Pct_Flow_pp},
  {"Flow_alv", (PVOID) &Flow_alv, ID_PARM | ID_Flow_alv},
  {"Flow_tot", (PVOID) &Flow_tot, ID_PARM | ID_Flow_tot},
  {"Benzene_PC_art", (PVOID) &Benzene_PC_art, ID_PARM | ID_Benzene_PC_art},
  {"Benzene_PC_fat", (PVOID) &Benzene_PC_fat, ID_PARM | ID_Benzene_PC_fat},
  {"Benzene_PC_liv", (PVOID) &Benzene_PC_liv, ID_PARM | ID_Benzene_PC_liv},
  {"Benzene_PC_wp", (PVOID) &Benzene_PC_wp, ID_PARM | ID_Benzene_PC_wp},
  {"Benzene_PC_pp", (PVOID) &Benzene_PC_pp, ID_PARM | ID_Benzene_PC_pp},
  {"sigma", (PVOID) &sigma, ID_PARM | ID_sigma},
  {"Flow_fat", (PVOID) &Flow_fat, ID_PARM | ID_Flow_fat},
  {"Flow_liv", (PVOID) &Flow_liv, ID_PARM | ID_Flow_liv},
  {"Flow_wp", (PVOID) &Flow_wp, ID_PARM | ID_Flow_wp},
  {"Flow_pp", (PVOID) &Flow_pp, ID_PARM | ID_Flow_pp},
  {"PB2_MW", (PVOID) &PB2_MW, ID_PARM | ID_PB2_MW},
  {"PB2_PC_art", (PVOID) &PB2_PC_art, ID_PARM | ID_PB2_PC_art},
  {"PB2_PC_fat", (PVOID) &PB2_PC_fat, ID_PARM | ID_PB2_PC_fat},
  {"PB2_PC_liv", (PVOID) &PB2_PC_liv, ID_PARM | ID_PB2_PC_liv},
  {"PB2_PC_wp", (PVOID) &PB2_PC_wp, ID_PARM | ID_PB2_PC_wp},
  {"PB2_PC_pp", (PVOID) &PB2_PC_pp, ID_PARM | ID_PB2_PC_pp},
  {"PB1_MW", (PVOID) &PB1_MW, ID_PARM | ID_PB1_MW},
  {"PB1_PC_art", (PVOID) &PB1_PC_art, ID_PARM | ID_PB1_PC_art},
  {"PB1_PC_fat", (PVOID) &PB1_PC_fat, ID_PARM | ID_PB1_PC_fat},
  {"PB1_PC_liv", (PVOID) &PB1_PC_liv, ID_PARM | ID_PB1_PC_liv},
  {"PB1_PC_wp", (PVOID) &PB1_PC_wp, ID_PARM | ID_PB1_PC_wp},
  {"PB1_PC_pp", (PVOID) &PB1_PC_pp, ID_PARM | ID_PB1_PC_pp},
  {"Benzene_J2_k2", (PVOID) &Benzene_J2_k2, ID_PARM | ID_Benzene_J2_k2},
  {"Benzene_J1_k1", (PVOID) &Benzene_J1_k1, ID_PARM | ID_Benzene_J1_k1},
  {"Benzene_J3_k3", (PVOID) &Benzene_J3_k3, ID_PARM | ID_Benzene_J3_k3},
  {"Benzene_J4_k1", (PVOID) &Benzene_J4_k1, ID_PARM | ID_Benzene_J4_k1},
  {"Benzene_J5_k2", (PVOID) &Benzene_J5_k2, ID_PARM | ID_Benzene_J5_k2},
  {"Benzene_J6_k3", (PVOID) &Benzene_J6_k3, ID_PARM | ID_Benzene_J6_k3},
  {"Toluene_MW", (PVOID) &Toluene_MW, ID_PARM | ID_Toluene_MW},
  {"Toluene_PC_art", (PVOID) &Toluene_PC_art, ID_PARM | ID_Toluene_PC_art},
  {"Toluene_PC_fat", (PVOID) &Toluene_PC_fat, ID_PARM | ID_Toluene_PC_fat},
  {"Toluene_PC_liv", (PVOID) &Toluene_PC_liv, ID_PARM | ID_Toluene_PC_liv},
  {"Toluene_PC_wp", (PVOID) &Toluene_PC_wp, ID_PARM | ID_Toluene_PC_wp},
  {"Toluene_PC_pp", (PVOID) &Toluene_PC_pp, ID_PARM | ID_Toluene_PC_pp},
  {"PT2_MW", (PVOID) &PT2_MW, ID_PARM | ID_PT2_MW},
  {"PT2_PC_art", (PVOID) &PT2_PC_art, ID_PARM | ID_PT2_PC_art},
  {"PT2_PC_fat", (PVOID) &PT2_PC_fat, ID_PARM | ID_PT2_PC_fat},
  {"PT2_PC_liv", (PVOID) &PT2_PC_liv, ID_PARM | ID_PT2_PC_liv},
  {"PT2_PC_wp", (PVOID) &PT2_PC_wp, ID_PARM | ID_PT2_PC_wp},
  {"PT2_PC_pp", (PVOID) &PT2_PC_pp, ID_PARM | ID_PT2_PC_pp},
  {"PT1_MW", (PVOID) &PT1_MW, ID_PARM | ID_PT1_MW},
  {"PT1_PC_art", (PVOID) &PT1_PC_art, ID_PARM | ID_PT1_PC_art},
  {"PT1_PC_fat", (PVOID) &PT1_PC_fat, ID_PARM | ID_PT1_PC_fat},
  {"PT1_PC_liv", (PVOID) &PT1_PC_liv, ID_PARM | ID_PT1_PC_liv},
  {"PT1_PC_wp", (PVOID) &PT1_PC_wp, ID_PARM | ID_PT1_PC_wp},
  {"PT1_PC_pp", (PVOID) &PT1_PC_pp, ID_PARM | ID_PT1_PC_pp},
  {"Toluene_J2_k2", (PVOID) &Toluene_J2_k2, ID_PARM | ID_Toluene_J2_k2},
  {"Toluene_J1_k1", (PVOID) &Toluene_J1_k1, ID_PARM | ID_Toluene_J1_k1},
  {"Toluene_J3_k3", (PVOID) &Toluene_J3_k3, ID_PARM | ID_Toluene_J3_k3},
  {"Toluene_J4_k1", (PVOID) &Toluene_J4_k1, ID_PARM | ID_Toluene_J4_k1},
  {"Toluene_J5_k2", (PVOID) &Toluene_J5_k2, ID_PARM | ID_Toluene_J5_k2},
  {"Toluene_J6_k3", (PVOID) &Toluene_J6_k3, ID_PARM | ID_Toluene_J6_k3},
  {"Ethylbenzene_MW", (PVOID) &Ethylbenzene_MW, ID_PARM | ID_Ethylbenzene_MW},
  {"Ethylbenzene_PC_art", (PVOID) &Ethylbenzene_PC_art, ID_PARM | ID_Ethylbenzene_PC_art},
  {"Ethylbenzene_PC_fat", (PVOID) &Ethylbenzene_PC_fat, ID_PARM | ID_Ethylbenzene_PC_fat},
  {"Ethylbenzene_PC_liv", (PVOID) &Ethylbenzene_PC_liv, ID_PARM | ID_Ethylbenzene_PC_liv},
  {"Ethylbenzene_PC_wp", (PVOID) &Ethylbenzene_PC_wp, ID_PARM | ID_Ethylbenzene_PC_wp},
  {"Ethylbenzene_PC_pp", (PVOID) &Ethylbenzene_PC_pp, ID_PARM | ID_Ethylbenzene_PC_pp},
  {"PE2_MW", (PVOID) &PE2_MW, ID_PARM | ID_PE2_MW},
  {"PE2_PC_art", (PVOID) &PE2_PC_art, ID_PARM | ID_PE2_PC_art},
  {"PE2_PC_fat", (PVOID) &PE2_PC_fat, ID_PARM | ID_PE2_PC_fat},
  {"PE2_PC_liv", (PVOID) &PE2_PC_liv, ID_PARM | ID_PE2_PC_liv},
  {"PE2_PC_wp", (PVOID) &PE2_PC_wp, ID_PARM | ID_PE2_PC_wp},
  {"PE2_PC_pp", (PVOID) &PE2_PC_pp, ID_PARM | ID_PE2_PC_pp},
  {"PE1_MW", (PVOID) &PE1_MW, ID_PARM | ID_PE1_MW},
  {"PE1_PC_art", (PVOID) &PE1_PC_art, ID_PARM | ID_PE1_PC_art},
  {"PE1_PC_fat", (PVOID) &PE1_PC_fat, ID_PARM | ID_PE1_PC_fat},
  {"PE1_PC_liv", (PVOID) &PE1_PC_liv, ID_PARM | ID_PE1_PC_liv},
  {"PE1_PC_wp", (PVOID) &PE1_PC_wp, ID_PARM | ID_PE1_PC_wp},
  {"PE1_PC_pp", (PVOID) &PE1_PC_pp, ID_PARM | ID_PE1_PC_pp},
  {"Ethylbenzene_J2_k2", (PVOID) &Ethylbenzene_J2_k2, ID_PARM | ID_Ethylbenzene_J2_k2},
  {"Ethylbenzene_J1_k1", (PVOID) &Ethylbenzene_J1_k1, ID_PARM | ID_Ethylbenzene_J1_k1},
  {"Ethylbenzene_J3_k3", (PVOID) &Ethylbenzene_J3_k3, ID_PARM | ID_Ethylbenzene_J3_k3},
  {"Ethylbenzene_J4_k1", (PVOID) &Ethylbenzene_J4_k1, ID_PARM | ID_Ethylbenzene_J4_k1},
  {"Ethylbenzene_J5_k2", (PVOID) &Ethylbenzene_J5_k2, ID_PARM | ID_Ethylbenzene_J5_k2},
  {"Ethylbenzene_J6_k3", (PVOID) &Ethylbenzene_J6_k3, ID_PARM | ID_Ethylbenzene_J6_k3},
  {"Xylene_MW", (PVOID) &Xylene_MW, ID_PARM | ID_Xylene_MW},
  {"Xylene_PC_art", (PVOID) &Xylene_PC_art, ID_PARM | ID_Xylene_PC_art},
  {"Xylene_PC_fat", (PVOID) &Xylene_PC_fat, ID_PARM | ID_Xylene_PC_fat},
  {"Xylene_PC_liv", (PVOID) &Xylene_PC_liv, ID_PARM | ID_Xylene_PC_liv},
  {"Xylene_PC_wp", (PVOID) &Xylene_PC_wp, ID_PARM | ID_Xylene_PC_wp},
  {"Xylene_PC_pp", (PVOID) &Xylene_PC_pp, ID_PARM | ID_Xylene_PC_pp},
  {"PX2_MW", (PVOID) &PX2_MW, ID_PARM | ID_PX2_MW},
  {"PX2_PC_art", (PVOID) &PX2_PC_art, ID_PARM | ID_PX2_PC_art},
  {"PX2_PC_fat", (PVOID) &PX2_PC_fat, ID_PARM | ID_PX2_PC_fat},
  {"PX2_PC_liv", (PVOID) &PX2_PC_liv, ID_PARM | ID_PX2_PC_liv},
  {"PX2_PC_wp", (PVOID) &PX2_PC_wp, ID_PARM | ID_PX2_PC_wp},
  {"PX2_PC_pp", (PVOID) &PX2_PC_pp, ID_PARM | ID_PX2_PC_pp},
  {"PX1_MW", (PVOID) &PX1_MW, ID_PARM | ID_PX1_MW},
  {"PX1_PC_art", (PVOID) &PX1_PC_art, ID_PARM | ID_PX1_PC_art},
  {"PX1_PC_fat", (PVOID) &PX1_PC_fat, ID_PARM | ID_PX1_PC_fat},
  {"PX1_PC_liv", (PVOID) &PX1_PC_liv, ID_PARM | ID_PX1_PC_liv},
  {"PX1_PC_wp", (PVOID) &PX1_PC_wp, ID_PARM | ID_PX1_PC_wp},
  {"PX1_PC_pp", (PVOID) &PX1_PC_pp, ID_PARM | ID_PX1_PC_pp},
  {"Xylene_J2_k2", (PVOID) &Xylene_J2_k2, ID_PARM | ID_Xylene_J2_k2},
  {"Xylene_J1_k1", (PVOID) &Xylene_J1_k1, ID_PARM | ID_Xylene_J1_k1},
  {"Xylene_J3_k3", (PVOID) &Xylene_J3_k3, ID_PARM | ID_Xylene_J3_k3},
  {"Xylene_J4_k1", (PVOID) &Xylene_J4_k1, ID_PARM | ID_Xylene_J4_k1},
  {"Xylene_J5_k2", (PVOID) &Xylene_J5_k2, ID_PARM | ID_Xylene_J5_k2},
  {"Xylene_J6_k3", (PVOID) &Xylene_J6_k3, ID_PARM | ID_Xylene_J6_k3},
  {"", NULL, 0} /* End flag */
};  /* vrgpvmGlo[] */


/*----- InitModel
   Should be called to initialize model variables at
   the beginning of experiment before reading
   variants from the simulation spec file.
*/

void InitModel(void)
{
  /* Initialize things in the order that they appear in
     model definition file so that dependencies are
     handled correctly. */

  Liver = 1;
  vrgModelVars[ID_CYP2E1_Liver] = 0;
  vrgModelVars[ID_Benzene_Q_fat] = 0;
  vrgModelVars[ID_Benzene_Q_wp] = 0;
  vrgModelVars[ID_Benzene_Q_pp] = 0;
  vrgModelVars[ID_Benzene_Liver] = 0;
  vrgModelVars[ID_Benzene_Q_exh] = 0;
  vrgModelVars[ID_Benzene_C_liv] = 0;
  vrgModelVars[ID_Benzene_C_fat] = 0;
  vrgModelVars[ID_Benzene_C_wp] = 0;
  vrgModelVars[ID_Benzene_C_pp] = 0;
  vrgModelVars[ID_Benzene_C_alv] = 0;
  vrgModelVars[ID_Benzene_C_exh] = 0;
  vrgModelVars[ID_Benzene_C_ven] = 0;
  vrgModelVars[ID_Benzene_C_ven_MGL] = 0;
  vrgModelVars[ID_Benzene_C_ven_MGL_wn] = 0;
  vrgModelVars[ID_sigma_obs] = 0.0;
  vrgInputs[ID_Benzene_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzene_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzene_C_inh].bOn = FALSE;
  vrgInputs[ID_Benzene_C_inh].dMag = 0.000000;
  vrgInputs[ID_Benzene_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Benzene_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Benzene_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Benzene_C_inh].dTper = 0.000000;
  vrgInputs[ID_Benzene_C_inh].hMag = 0;
  vrgInputs[ID_Benzene_C_inh].hT0 = 0;
  vrgInputs[ID_Benzene_C_inh].hTexp = 0;
  vrgInputs[ID_Benzene_C_inh].hDecay = 0;
  vrgInputs[ID_Benzene_C_inh].hTper = 0;
  vrgInputs[ID_Benzene_C_inh].dVal = 0.0;
  vrgInputs[ID_Benzene_C_inh].nDoses = 0;
  vrgInputs[ID_Benzene_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzene_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzene_Q_ing].bOn = FALSE;
  vrgInputs[ID_Benzene_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Benzene_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Benzene_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Benzene_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Benzene_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Benzene_Q_ing].hMag = 0;
  vrgInputs[ID_Benzene_Q_ing].hT0 = 0;
  vrgInputs[ID_Benzene_Q_ing].hTexp = 0;
  vrgInputs[ID_Benzene_Q_ing].hDecay = 0;
  vrgInputs[ID_Benzene_Q_ing].hTper = 0;
  vrgInputs[ID_Benzene_Q_ing].dVal = 0.0;
  vrgInputs[ID_Benzene_Q_ing].nDoses = 0;
  Benzene_MW = 0;
  BodyV = 75;
  V_fat = 18;
  V_liv = 1.7;
  V_wp = 6;
  V_pp = 0;
  Pct_Flow_fat = 0.09;
  Pct_Flow_liv = 0.24;
  Pct_Flow_wp = 0.49;
  Pct_Flow_pp = 0.18;
  Flow_alv = 5.6;
  Flow_tot = 6.384;
  Benzene_PC_art = 0;
  Benzene_PC_fat = 0;
  Benzene_PC_liv = 0;
  Benzene_PC_wp = 0;
  Benzene_PC_pp = 0;
  sigma = 1;
  Flow_fat = 0;
  Flow_liv = 0;
  Flow_wp = 0;
  Flow_pp = 0;
  vrgModelVars[ID_Benzene_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PB1_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PB2_Q_fat] = 0;
  vrgModelVars[ID_PB2_Q_wp] = 0;
  vrgModelVars[ID_PB2_Q_pp] = 0;
  vrgModelVars[ID_PB2_Liver] = 0;
  vrgModelVars[ID_PB2_Q_exh] = 0;
  vrgModelVars[ID_PB2_C_liv] = 0;
  vrgModelVars[ID_PB2_C_fat] = 0;
  vrgModelVars[ID_PB2_C_wp] = 0;
  vrgModelVars[ID_PB2_C_pp] = 0;
  vrgModelVars[ID_PB2_C_alv] = 0;
  vrgModelVars[ID_PB2_C_exh] = 0;
  vrgModelVars[ID_PB2_C_ven] = 0;
  vrgModelVars[ID_PB2_C_ven_MGL] = 0;
  vrgModelVars[ID_PB2_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PB2_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PB2_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PB2_C_inh].bOn = FALSE;
  vrgInputs[ID_PB2_C_inh].dMag = 0.000000;
  vrgInputs[ID_PB2_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PB2_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PB2_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PB2_C_inh].dTper = 0.000000;
  vrgInputs[ID_PB2_C_inh].hMag = 0;
  vrgInputs[ID_PB2_C_inh].hT0 = 0;
  vrgInputs[ID_PB2_C_inh].hTexp = 0;
  vrgInputs[ID_PB2_C_inh].hDecay = 0;
  vrgInputs[ID_PB2_C_inh].hTper = 0;
  vrgInputs[ID_PB2_C_inh].dVal = 0.0;
  vrgInputs[ID_PB2_C_inh].nDoses = 0;
  vrgInputs[ID_PB2_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PB2_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PB2_Q_ing].bOn = FALSE;
  vrgInputs[ID_PB2_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PB2_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PB2_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PB2_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PB2_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PB2_Q_ing].hMag = 0;
  vrgInputs[ID_PB2_Q_ing].hT0 = 0;
  vrgInputs[ID_PB2_Q_ing].hTexp = 0;
  vrgInputs[ID_PB2_Q_ing].hDecay = 0;
  vrgInputs[ID_PB2_Q_ing].hTper = 0;
  vrgInputs[ID_PB2_Q_ing].dVal = 0.0;
  vrgInputs[ID_PB2_Q_ing].nDoses = 0;
  PB2_MW = 0;
  PB2_PC_art = 0;
  PB2_PC_fat = 0;
  PB2_PC_liv = 0;
  PB2_PC_wp = 0;
  PB2_PC_pp = 0;
  vrgModelVars[ID_PB1_Q_fat] = 0;
  vrgModelVars[ID_PB1_Q_wp] = 0;
  vrgModelVars[ID_PB1_Q_pp] = 0;
  vrgModelVars[ID_PB1_Liver] = 0;
  vrgModelVars[ID_PB1_Q_exh] = 0;
  vrgModelVars[ID_PB1_C_liv] = 0;
  vrgModelVars[ID_PB1_C_fat] = 0;
  vrgModelVars[ID_PB1_C_wp] = 0;
  vrgModelVars[ID_PB1_C_pp] = 0;
  vrgModelVars[ID_PB1_C_alv] = 0;
  vrgModelVars[ID_PB1_C_exh] = 0;
  vrgModelVars[ID_PB1_C_ven] = 0;
  vrgModelVars[ID_PB1_C_ven_MGL] = 0;
  vrgModelVars[ID_PB1_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PB1_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PB1_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PB1_C_inh].bOn = FALSE;
  vrgInputs[ID_PB1_C_inh].dMag = 0.000000;
  vrgInputs[ID_PB1_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PB1_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PB1_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PB1_C_inh].dTper = 0.000000;
  vrgInputs[ID_PB1_C_inh].hMag = 0;
  vrgInputs[ID_PB1_C_inh].hT0 = 0;
  vrgInputs[ID_PB1_C_inh].hTexp = 0;
  vrgInputs[ID_PB1_C_inh].hDecay = 0;
  vrgInputs[ID_PB1_C_inh].hTper = 0;
  vrgInputs[ID_PB1_C_inh].dVal = 0.0;
  vrgInputs[ID_PB1_C_inh].nDoses = 0;
  vrgInputs[ID_PB1_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PB1_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PB1_Q_ing].bOn = FALSE;
  vrgInputs[ID_PB1_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PB1_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PB1_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PB1_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PB1_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PB1_Q_ing].hMag = 0;
  vrgInputs[ID_PB1_Q_ing].hT0 = 0;
  vrgInputs[ID_PB1_Q_ing].hTexp = 0;
  vrgInputs[ID_PB1_Q_ing].hDecay = 0;
  vrgInputs[ID_PB1_Q_ing].hTper = 0;
  vrgInputs[ID_PB1_Q_ing].dVal = 0.0;
  vrgInputs[ID_PB1_Q_ing].nDoses = 0;
  PB1_MW = 0;
  PB1_PC_art = 0;
  PB1_PC_fat = 0;
  PB1_PC_liv = 0;
  PB1_PC_wp = 0;
  PB1_PC_pp = 0;
  Benzene_J2_k2 = 0.1;
  Benzene_J1_k1 = 0.1;
  Benzene_J3_k3 = 0.1;
  Benzene_J4_k1 = 0.1;
  Benzene_J5_k2 = 0.1;
  Benzene_J6_k3 = 0.1;
  vrgModelVars[ID_Toluene_Q_fat] = 0;
  vrgModelVars[ID_Toluene_Q_wp] = 0;
  vrgModelVars[ID_Toluene_Q_pp] = 0;
  vrgModelVars[ID_Toluene_Liver] = 0;
  vrgModelVars[ID_Toluene_Q_exh] = 0;
  vrgModelVars[ID_Toluene_C_liv] = 0;
  vrgModelVars[ID_Toluene_C_fat] = 0;
  vrgModelVars[ID_Toluene_C_wp] = 0;
  vrgModelVars[ID_Toluene_C_pp] = 0;
  vrgModelVars[ID_Toluene_C_alv] = 0;
  vrgModelVars[ID_Toluene_C_exh] = 0;
  vrgModelVars[ID_Toluene_C_ven] = 0;
  vrgModelVars[ID_Toluene_C_ven_MGL] = 0;
  vrgModelVars[ID_Toluene_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Toluene_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Toluene_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Toluene_C_inh].bOn = FALSE;
  vrgInputs[ID_Toluene_C_inh].dMag = 0.000000;
  vrgInputs[ID_Toluene_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Toluene_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Toluene_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Toluene_C_inh].dTper = 0.000000;
  vrgInputs[ID_Toluene_C_inh].hMag = 0;
  vrgInputs[ID_Toluene_C_inh].hT0 = 0;
  vrgInputs[ID_Toluene_C_inh].hTexp = 0;
  vrgInputs[ID_Toluene_C_inh].hDecay = 0;
  vrgInputs[ID_Toluene_C_inh].hTper = 0;
  vrgInputs[ID_Toluene_C_inh].dVal = 0.0;
  vrgInputs[ID_Toluene_C_inh].nDoses = 0;
  vrgInputs[ID_Toluene_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Toluene_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Toluene_Q_ing].bOn = FALSE;
  vrgInputs[ID_Toluene_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Toluene_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Toluene_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Toluene_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Toluene_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Toluene_Q_ing].hMag = 0;
  vrgInputs[ID_Toluene_Q_ing].hT0 = 0;
  vrgInputs[ID_Toluene_Q_ing].hTexp = 0;
  vrgInputs[ID_Toluene_Q_ing].hDecay = 0;
  vrgInputs[ID_Toluene_Q_ing].hTper = 0;
  vrgInputs[ID_Toluene_Q_ing].dVal = 0.0;
  vrgInputs[ID_Toluene_Q_ing].nDoses = 0;
  Toluene_MW = 0;
  Toluene_PC_art = 0;
  Toluene_PC_fat = 0;
  Toluene_PC_liv = 0;
  Toluene_PC_wp = 0;
  Toluene_PC_pp = 0;
  vrgModelVars[ID_Toluene_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PT1_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PT2_Q_fat] = 0;
  vrgModelVars[ID_PT2_Q_wp] = 0;
  vrgModelVars[ID_PT2_Q_pp] = 0;
  vrgModelVars[ID_PT2_Liver] = 0;
  vrgModelVars[ID_PT2_Q_exh] = 0;
  vrgModelVars[ID_PT2_C_liv] = 0;
  vrgModelVars[ID_PT2_C_fat] = 0;
  vrgModelVars[ID_PT2_C_wp] = 0;
  vrgModelVars[ID_PT2_C_pp] = 0;
  vrgModelVars[ID_PT2_C_alv] = 0;
  vrgModelVars[ID_PT2_C_exh] = 0;
  vrgModelVars[ID_PT2_C_ven] = 0;
  vrgModelVars[ID_PT2_C_ven_MGL] = 0;
  vrgModelVars[ID_PT2_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PT2_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PT2_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PT2_C_inh].bOn = FALSE;
  vrgInputs[ID_PT2_C_inh].dMag = 0.000000;
  vrgInputs[ID_PT2_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PT2_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PT2_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PT2_C_inh].dTper = 0.000000;
  vrgInputs[ID_PT2_C_inh].hMag = 0;
  vrgInputs[ID_PT2_C_inh].hT0 = 0;
  vrgInputs[ID_PT2_C_inh].hTexp = 0;
  vrgInputs[ID_PT2_C_inh].hDecay = 0;
  vrgInputs[ID_PT2_C_inh].hTper = 0;
  vrgInputs[ID_PT2_C_inh].dVal = 0.0;
  vrgInputs[ID_PT2_C_inh].nDoses = 0;
  vrgInputs[ID_PT2_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PT2_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PT2_Q_ing].bOn = FALSE;
  vrgInputs[ID_PT2_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PT2_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PT2_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PT2_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PT2_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PT2_Q_ing].hMag = 0;
  vrgInputs[ID_PT2_Q_ing].hT0 = 0;
  vrgInputs[ID_PT2_Q_ing].hTexp = 0;
  vrgInputs[ID_PT2_Q_ing].hDecay = 0;
  vrgInputs[ID_PT2_Q_ing].hTper = 0;
  vrgInputs[ID_PT2_Q_ing].dVal = 0.0;
  vrgInputs[ID_PT2_Q_ing].nDoses = 0;
  PT2_MW = 0;
  PT2_PC_art = 0;
  PT2_PC_fat = 0;
  PT2_PC_liv = 0;
  PT2_PC_wp = 0;
  PT2_PC_pp = 0;
  vrgModelVars[ID_PT1_Q_fat] = 0;
  vrgModelVars[ID_PT1_Q_wp] = 0;
  vrgModelVars[ID_PT1_Q_pp] = 0;
  vrgModelVars[ID_PT1_Liver] = 0;
  vrgModelVars[ID_PT1_Q_exh] = 0;
  vrgModelVars[ID_PT1_C_liv] = 0;
  vrgModelVars[ID_PT1_C_fat] = 0;
  vrgModelVars[ID_PT1_C_wp] = 0;
  vrgModelVars[ID_PT1_C_pp] = 0;
  vrgModelVars[ID_PT1_C_alv] = 0;
  vrgModelVars[ID_PT1_C_exh] = 0;
  vrgModelVars[ID_PT1_C_ven] = 0;
  vrgModelVars[ID_PT1_C_ven_MGL] = 0;
  vrgModelVars[ID_PT1_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PT1_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PT1_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PT1_C_inh].bOn = FALSE;
  vrgInputs[ID_PT1_C_inh].dMag = 0.000000;
  vrgInputs[ID_PT1_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PT1_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PT1_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PT1_C_inh].dTper = 0.000000;
  vrgInputs[ID_PT1_C_inh].hMag = 0;
  vrgInputs[ID_PT1_C_inh].hT0 = 0;
  vrgInputs[ID_PT1_C_inh].hTexp = 0;
  vrgInputs[ID_PT1_C_inh].hDecay = 0;
  vrgInputs[ID_PT1_C_inh].hTper = 0;
  vrgInputs[ID_PT1_C_inh].dVal = 0.0;
  vrgInputs[ID_PT1_C_inh].nDoses = 0;
  vrgInputs[ID_PT1_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PT1_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PT1_Q_ing].bOn = FALSE;
  vrgInputs[ID_PT1_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PT1_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PT1_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PT1_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PT1_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PT1_Q_ing].hMag = 0;
  vrgInputs[ID_PT1_Q_ing].hT0 = 0;
  vrgInputs[ID_PT1_Q_ing].hTexp = 0;
  vrgInputs[ID_PT1_Q_ing].hDecay = 0;
  vrgInputs[ID_PT1_Q_ing].hTper = 0;
  vrgInputs[ID_PT1_Q_ing].dVal = 0.0;
  vrgInputs[ID_PT1_Q_ing].nDoses = 0;
  PT1_MW = 0;
  PT1_PC_art = 0;
  PT1_PC_fat = 0;
  PT1_PC_liv = 0;
  PT1_PC_wp = 0;
  PT1_PC_pp = 0;
  Toluene_J2_k2 = 0.1;
  Toluene_J1_k1 = 0.1;
  Toluene_J3_k3 = 0.1;
  Toluene_J4_k1 = 0.1;
  Toluene_J5_k2 = 0.1;
  Toluene_J6_k3 = 0.1;
  vrgModelVars[ID_Ethylbenzene_Q_fat] = 0;
  vrgModelVars[ID_Ethylbenzene_Q_wp] = 0;
  vrgModelVars[ID_Ethylbenzene_Q_pp] = 0;
  vrgModelVars[ID_Ethylbenzene_Liver] = 0;
  vrgModelVars[ID_Ethylbenzene_Q_exh] = 0;
  vrgModelVars[ID_Ethylbenzene_C_liv] = 0;
  vrgModelVars[ID_Ethylbenzene_C_fat] = 0;
  vrgModelVars[ID_Ethylbenzene_C_wp] = 0;
  vrgModelVars[ID_Ethylbenzene_C_pp] = 0;
  vrgModelVars[ID_Ethylbenzene_C_alv] = 0;
  vrgModelVars[ID_Ethylbenzene_C_exh] = 0;
  vrgModelVars[ID_Ethylbenzene_C_ven] = 0;
  vrgModelVars[ID_Ethylbenzene_C_ven_MGL] = 0;
  vrgModelVars[ID_Ethylbenzene_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Ethylbenzene_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Ethylbenzene_C_inh].bOn = FALSE;
  vrgInputs[ID_Ethylbenzene_C_inh].dMag = 0.000000;
  vrgInputs[ID_Ethylbenzene_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Ethylbenzene_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Ethylbenzene_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Ethylbenzene_C_inh].dTper = 0.000000;
  vrgInputs[ID_Ethylbenzene_C_inh].hMag = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].hT0 = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].hTexp = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].hDecay = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].hTper = 0;
  vrgInputs[ID_Ethylbenzene_C_inh].dVal = 0.0;
  vrgInputs[ID_Ethylbenzene_C_inh].nDoses = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Ethylbenzene_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Ethylbenzene_Q_ing].bOn = FALSE;
  vrgInputs[ID_Ethylbenzene_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Ethylbenzene_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Ethylbenzene_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Ethylbenzene_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Ethylbenzene_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Ethylbenzene_Q_ing].hMag = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].hT0 = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].hTexp = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].hDecay = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].hTper = 0;
  vrgInputs[ID_Ethylbenzene_Q_ing].dVal = 0.0;
  vrgInputs[ID_Ethylbenzene_Q_ing].nDoses = 0;
  Ethylbenzene_MW = 0;
  Ethylbenzene_PC_art = 0;
  Ethylbenzene_PC_fat = 0;
  Ethylbenzene_PC_liv = 0;
  Ethylbenzene_PC_wp = 0;
  Ethylbenzene_PC_pp = 0;
  vrgModelVars[ID_Ethylbenzene_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PE1_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PE2_Q_fat] = 0;
  vrgModelVars[ID_PE2_Q_wp] = 0;
  vrgModelVars[ID_PE2_Q_pp] = 0;
  vrgModelVars[ID_PE2_Liver] = 0;
  vrgModelVars[ID_PE2_Q_exh] = 0;
  vrgModelVars[ID_PE2_C_liv] = 0;
  vrgModelVars[ID_PE2_C_fat] = 0;
  vrgModelVars[ID_PE2_C_wp] = 0;
  vrgModelVars[ID_PE2_C_pp] = 0;
  vrgModelVars[ID_PE2_C_alv] = 0;
  vrgModelVars[ID_PE2_C_exh] = 0;
  vrgModelVars[ID_PE2_C_ven] = 0;
  vrgModelVars[ID_PE2_C_ven_MGL] = 0;
  vrgModelVars[ID_PE2_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PE2_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PE2_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PE2_C_inh].bOn = FALSE;
  vrgInputs[ID_PE2_C_inh].dMag = 0.000000;
  vrgInputs[ID_PE2_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PE2_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PE2_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PE2_C_inh].dTper = 0.000000;
  vrgInputs[ID_PE2_C_inh].hMag = 0;
  vrgInputs[ID_PE2_C_inh].hT0 = 0;
  vrgInputs[ID_PE2_C_inh].hTexp = 0;
  vrgInputs[ID_PE2_C_inh].hDecay = 0;
  vrgInputs[ID_PE2_C_inh].hTper = 0;
  vrgInputs[ID_PE2_C_inh].dVal = 0.0;
  vrgInputs[ID_PE2_C_inh].nDoses = 0;
  vrgInputs[ID_PE2_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PE2_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PE2_Q_ing].bOn = FALSE;
  vrgInputs[ID_PE2_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PE2_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PE2_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PE2_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PE2_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PE2_Q_ing].hMag = 0;
  vrgInputs[ID_PE2_Q_ing].hT0 = 0;
  vrgInputs[ID_PE2_Q_ing].hTexp = 0;
  vrgInputs[ID_PE2_Q_ing].hDecay = 0;
  vrgInputs[ID_PE2_Q_ing].hTper = 0;
  vrgInputs[ID_PE2_Q_ing].dVal = 0.0;
  vrgInputs[ID_PE2_Q_ing].nDoses = 0;
  PE2_MW = 0;
  PE2_PC_art = 0;
  PE2_PC_fat = 0;
  PE2_PC_liv = 0;
  PE2_PC_wp = 0;
  PE2_PC_pp = 0;
  vrgModelVars[ID_PE1_Q_fat] = 0;
  vrgModelVars[ID_PE1_Q_wp] = 0;
  vrgModelVars[ID_PE1_Q_pp] = 0;
  vrgModelVars[ID_PE1_Liver] = 0;
  vrgModelVars[ID_PE1_Q_exh] = 0;
  vrgModelVars[ID_PE1_C_liv] = 0;
  vrgModelVars[ID_PE1_C_fat] = 0;
  vrgModelVars[ID_PE1_C_wp] = 0;
  vrgModelVars[ID_PE1_C_pp] = 0;
  vrgModelVars[ID_PE1_C_alv] = 0;
  vrgModelVars[ID_PE1_C_exh] = 0;
  vrgModelVars[ID_PE1_C_ven] = 0;
  vrgModelVars[ID_PE1_C_ven_MGL] = 0;
  vrgModelVars[ID_PE1_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PE1_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PE1_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PE1_C_inh].bOn = FALSE;
  vrgInputs[ID_PE1_C_inh].dMag = 0.000000;
  vrgInputs[ID_PE1_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PE1_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PE1_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PE1_C_inh].dTper = 0.000000;
  vrgInputs[ID_PE1_C_inh].hMag = 0;
  vrgInputs[ID_PE1_C_inh].hT0 = 0;
  vrgInputs[ID_PE1_C_inh].hTexp = 0;
  vrgInputs[ID_PE1_C_inh].hDecay = 0;
  vrgInputs[ID_PE1_C_inh].hTper = 0;
  vrgInputs[ID_PE1_C_inh].dVal = 0.0;
  vrgInputs[ID_PE1_C_inh].nDoses = 0;
  vrgInputs[ID_PE1_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PE1_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PE1_Q_ing].bOn = FALSE;
  vrgInputs[ID_PE1_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PE1_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PE1_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PE1_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PE1_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PE1_Q_ing].hMag = 0;
  vrgInputs[ID_PE1_Q_ing].hT0 = 0;
  vrgInputs[ID_PE1_Q_ing].hTexp = 0;
  vrgInputs[ID_PE1_Q_ing].hDecay = 0;
  vrgInputs[ID_PE1_Q_ing].hTper = 0;
  vrgInputs[ID_PE1_Q_ing].dVal = 0.0;
  vrgInputs[ID_PE1_Q_ing].nDoses = 0;
  PE1_MW = 0;
  PE1_PC_art = 0;
  PE1_PC_fat = 0;
  PE1_PC_liv = 0;
  PE1_PC_wp = 0;
  PE1_PC_pp = 0;
  Ethylbenzene_J2_k2 = 0.1;
  Ethylbenzene_J1_k1 = 0.1;
  Ethylbenzene_J3_k3 = 0.1;
  Ethylbenzene_J4_k1 = 0.1;
  Ethylbenzene_J5_k2 = 0.1;
  Ethylbenzene_J6_k3 = 0.1;
  vrgModelVars[ID_Xylene_Q_fat] = 0;
  vrgModelVars[ID_Xylene_Q_wp] = 0;
  vrgModelVars[ID_Xylene_Q_pp] = 0;
  vrgModelVars[ID_Xylene_Liver] = 0;
  vrgModelVars[ID_Xylene_Q_exh] = 0;
  vrgModelVars[ID_Xylene_C_liv] = 0;
  vrgModelVars[ID_Xylene_C_fat] = 0;
  vrgModelVars[ID_Xylene_C_wp] = 0;
  vrgModelVars[ID_Xylene_C_pp] = 0;
  vrgModelVars[ID_Xylene_C_alv] = 0;
  vrgModelVars[ID_Xylene_C_exh] = 0;
  vrgModelVars[ID_Xylene_C_ven] = 0;
  vrgModelVars[ID_Xylene_C_ven_MGL] = 0;
  vrgModelVars[ID_Xylene_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Xylene_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Xylene_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Xylene_C_inh].bOn = FALSE;
  vrgInputs[ID_Xylene_C_inh].dMag = 0.000000;
  vrgInputs[ID_Xylene_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Xylene_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Xylene_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Xylene_C_inh].dTper = 0.000000;
  vrgInputs[ID_Xylene_C_inh].hMag = 0;
  vrgInputs[ID_Xylene_C_inh].hT0 = 0;
  vrgInputs[ID_Xylene_C_inh].hTexp = 0;
  vrgInputs[ID_Xylene_C_inh].hDecay = 0;
  vrgInputs[ID_Xylene_C_inh].hTper = 0;
  vrgInputs[ID_Xylene_C_inh].dVal = 0.0;
  vrgInputs[ID_Xylene_C_inh].nDoses = 0;
  vrgInputs[ID_Xylene_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Xylene_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Xylene_Q_ing].bOn = FALSE;
  vrgInputs[ID_Xylene_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Xylene_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Xylene_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Xylene_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Xylene_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Xylene_Q_ing].hMag = 0;
  vrgInputs[ID_Xylene_Q_ing].hT0 = 0;
  vrgInputs[ID_Xylene_Q_ing].hTexp = 0;
  vrgInputs[ID_Xylene_Q_ing].hDecay = 0;
  vrgInputs[ID_Xylene_Q_ing].hTper = 0;
  vrgInputs[ID_Xylene_Q_ing].dVal = 0.0;
  vrgInputs[ID_Xylene_Q_ing].nDoses = 0;
  Xylene_MW = 0;
  Xylene_PC_art = 0;
  Xylene_PC_fat = 0;
  Xylene_PC_liv = 0;
  Xylene_PC_wp = 0;
  Xylene_PC_pp = 0;
  vrgModelVars[ID_Xylene_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PX1_CYP2E1_Liver] = 0;
  vrgModelVars[ID_PX2_Q_fat] = 0;
  vrgModelVars[ID_PX2_Q_wp] = 0;
  vrgModelVars[ID_PX2_Q_pp] = 0;
  vrgModelVars[ID_PX2_Liver] = 0;
  vrgModelVars[ID_PX2_Q_exh] = 0;
  vrgModelVars[ID_PX2_C_liv] = 0;
  vrgModelVars[ID_PX2_C_fat] = 0;
  vrgModelVars[ID_PX2_C_wp] = 0;
  vrgModelVars[ID_PX2_C_pp] = 0;
  vrgModelVars[ID_PX2_C_alv] = 0;
  vrgModelVars[ID_PX2_C_exh] = 0;
  vrgModelVars[ID_PX2_C_ven] = 0;
  vrgModelVars[ID_PX2_C_ven_MGL] = 0;
  vrgModelVars[ID_PX2_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PX2_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PX2_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PX2_C_inh].bOn = FALSE;
  vrgInputs[ID_PX2_C_inh].dMag = 0.000000;
  vrgInputs[ID_PX2_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PX2_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PX2_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PX2_C_inh].dTper = 0.000000;
  vrgInputs[ID_PX2_C_inh].hMag = 0;
  vrgInputs[ID_PX2_C_inh].hT0 = 0;
  vrgInputs[ID_PX2_C_inh].hTexp = 0;
  vrgInputs[ID_PX2_C_inh].hDecay = 0;
  vrgInputs[ID_PX2_C_inh].hTper = 0;
  vrgInputs[ID_PX2_C_inh].dVal = 0.0;
  vrgInputs[ID_PX2_C_inh].nDoses = 0;
  vrgInputs[ID_PX2_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PX2_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PX2_Q_ing].bOn = FALSE;
  vrgInputs[ID_PX2_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PX2_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PX2_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PX2_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PX2_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PX2_Q_ing].hMag = 0;
  vrgInputs[ID_PX2_Q_ing].hT0 = 0;
  vrgInputs[ID_PX2_Q_ing].hTexp = 0;
  vrgInputs[ID_PX2_Q_ing].hDecay = 0;
  vrgInputs[ID_PX2_Q_ing].hTper = 0;
  vrgInputs[ID_PX2_Q_ing].dVal = 0.0;
  vrgInputs[ID_PX2_Q_ing].nDoses = 0;
  PX2_MW = 0;
  PX2_PC_art = 0;
  PX2_PC_fat = 0;
  PX2_PC_liv = 0;
  PX2_PC_wp = 0;
  PX2_PC_pp = 0;
  vrgModelVars[ID_PX1_Q_fat] = 0;
  vrgModelVars[ID_PX1_Q_wp] = 0;
  vrgModelVars[ID_PX1_Q_pp] = 0;
  vrgModelVars[ID_PX1_Liver] = 0;
  vrgModelVars[ID_PX1_Q_exh] = 0;
  vrgModelVars[ID_PX1_C_liv] = 0;
  vrgModelVars[ID_PX1_C_fat] = 0;
  vrgModelVars[ID_PX1_C_wp] = 0;
  vrgModelVars[ID_PX1_C_pp] = 0;
  vrgModelVars[ID_PX1_C_alv] = 0;
  vrgModelVars[ID_PX1_C_exh] = 0;
  vrgModelVars[ID_PX1_C_ven] = 0;
  vrgModelVars[ID_PX1_C_ven_MGL] = 0;
  vrgModelVars[ID_PX1_C_ven_MGL_wn] = 0;
  vrgInputs[ID_PX1_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_PX1_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_PX1_C_inh].bOn = FALSE;
  vrgInputs[ID_PX1_C_inh].dMag = 0.000000;
  vrgInputs[ID_PX1_C_inh].dT0 = 0.000000;
  vrgInputs[ID_PX1_C_inh].dTexp = 0.000000;
  vrgInputs[ID_PX1_C_inh].dDecay = 0.000000;
  vrgInputs[ID_PX1_C_inh].dTper = 0.000000;
  vrgInputs[ID_PX1_C_inh].hMag = 0;
  vrgInputs[ID_PX1_C_inh].hT0 = 0;
  vrgInputs[ID_PX1_C_inh].hTexp = 0;
  vrgInputs[ID_PX1_C_inh].hDecay = 0;
  vrgInputs[ID_PX1_C_inh].hTper = 0;
  vrgInputs[ID_PX1_C_inh].dVal = 0.0;
  vrgInputs[ID_PX1_C_inh].nDoses = 0;
  vrgInputs[ID_PX1_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_PX1_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_PX1_Q_ing].bOn = FALSE;
  vrgInputs[ID_PX1_Q_ing].dMag = 0.000000;
  vrgInputs[ID_PX1_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_PX1_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_PX1_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_PX1_Q_ing].dTper = 0.000000;
  vrgInputs[ID_PX1_Q_ing].hMag = 0;
  vrgInputs[ID_PX1_Q_ing].hT0 = 0;
  vrgInputs[ID_PX1_Q_ing].hTexp = 0;
  vrgInputs[ID_PX1_Q_ing].hDecay = 0;
  vrgInputs[ID_PX1_Q_ing].hTper = 0;
  vrgInputs[ID_PX1_Q_ing].dVal = 0.0;
  vrgInputs[ID_PX1_Q_ing].nDoses = 0;
  PX1_MW = 0;
  PX1_PC_art = 0;
  PX1_PC_fat = 0;
  PX1_PC_liv = 0;
  PX1_PC_wp = 0;
  PX1_PC_pp = 0;
  Xylene_J2_k2 = 0.1;
  Xylene_J1_k1 = 0.1;
  Xylene_J3_k3 = 0.1;
  Xylene_J4_k1 = 0.1;
  Xylene_J5_k2 = 0.1;
  Xylene_J6_k3 = 0.1;

  vbModelReinitd = TRUE;

} /* InitModel */


/*----- Dynamics section */

void CalcDeriv (double  rgModelVars[], double  rgDerivs[], PDOUBLE pdTime)
{
  /* local */ double Benzene_Cout_fat;
  /* local */ double Benzene_Cout_wp;
  /* local */ double Benzene_Cout_pp;
  /* local */ double Benzene_Cout_liv;
  /* local */ double Benzene_dQ_ven;
  /* local */ double Benzene_C_art;
  /* local */ double PB2_Cout_fat;
  /* local */ double PB2_Cout_wp;
  /* local */ double PB2_Cout_pp;
  /* local */ double PB2_Cout_liv;
  /* local */ double PB2_dQ_ven;
  /* local */ double PB2_C_art;
  /* local */ double PB1_Cout_fat;
  /* local */ double PB1_Cout_wp;
  /* local */ double PB1_Cout_pp;
  /* local */ double PB1_Cout_liv;
  /* local */ double PB1_dQ_ven;
  /* local */ double PB1_C_art;
  /* local */ double Benzene_J2;
  /* local */ double Benzene_J1;
  /* local */ double Benzene_J3;
  /* local */ double Benzene_J4;
  /* local */ double Benzene_J5;
  /* local */ double Benzene_J6;
  /* local */ double Toluene_Cout_fat;
  /* local */ double Toluene_Cout_wp;
  /* local */ double Toluene_Cout_pp;
  /* local */ double Toluene_Cout_liv;
  /* local */ double Toluene_dQ_ven;
  /* local */ double Toluene_C_art;
  /* local */ double PT2_Cout_fat;
  /* local */ double PT2_Cout_wp;
  /* local */ double PT2_Cout_pp;
  /* local */ double PT2_Cout_liv;
  /* local */ double PT2_dQ_ven;
  /* local */ double PT2_C_art;
  /* local */ double PT1_Cout_fat;
  /* local */ double PT1_Cout_wp;
  /* local */ double PT1_Cout_pp;
  /* local */ double PT1_Cout_liv;
  /* local */ double PT1_dQ_ven;
  /* local */ double PT1_C_art;
  /* local */ double Toluene_J2;
  /* local */ double Toluene_J1;
  /* local */ double Toluene_J3;
  /* local */ double Toluene_J4;
  /* local */ double Toluene_J5;
  /* local */ double Toluene_J6;
  /* local */ double Ethylbenzene_Cout_fat;
  /* local */ double Ethylbenzene_Cout_wp;
  /* local */ double Ethylbenzene_Cout_pp;
  /* local */ double Ethylbenzene_Cout_liv;
  /* local */ double Ethylbenzene_dQ_ven;
  /* local */ double Ethylbenzene_C_art;
  /* local */ double PE2_Cout_fat;
  /* local */ double PE2_Cout_wp;
  /* local */ double PE2_Cout_pp;
  /* local */ double PE2_Cout_liv;
  /* local */ double PE2_dQ_ven;
  /* local */ double PE2_C_art;
  /* local */ double PE1_Cout_fat;
  /* local */ double PE1_Cout_wp;
  /* local */ double PE1_Cout_pp;
  /* local */ double PE1_Cout_liv;
  /* local */ double PE1_dQ_ven;
  /* local */ double PE1_C_art;
  /* local */ double Ethylbenzene_J2;
  /* local */ double Ethylbenzene_J1;
  /* local */ double Ethylbenzene_J3;
  /* local */ double Ethylbenzene_J4;
  /* local */ double Ethylbenzene_J5;
  /* local */ double Ethylbenzene_J6;
  /* local */ double Xylene_Cout_fat;
  /* local */ double Xylene_Cout_wp;
  /* local */ double Xylene_Cout_pp;
  /* local */ double Xylene_Cout_liv;
  /* local */ double Xylene_dQ_ven;
  /* local */ double Xylene_C_art;
  /* local */ double PX2_Cout_fat;
  /* local */ double PX2_Cout_wp;
  /* local */ double PX2_Cout_pp;
  /* local */ double PX2_Cout_liv;
  /* local */ double PX2_dQ_ven;
  /* local */ double PX2_C_art;
  /* local */ double PX1_Cout_fat;
  /* local */ double PX1_Cout_wp;
  /* local */ double PX1_Cout_pp;
  /* local */ double PX1_Cout_liv;
  /* local */ double PX1_dQ_ven;
  /* local */ double PX1_C_art;
  /* local */ double Xylene_J2;
  /* local */ double Xylene_J1;
  /* local */ double Xylene_J3;
  /* local */ double Xylene_J4;
  /* local */ double Xylene_J5;
  /* local */ double Xylene_J6;

  CalcInputs (pdTime); /* Get new input vals */


  Benzene_Cout_fat = rgModelVars[ID_Benzene_Q_fat] / ( V_fat * Benzene_PC_fat ) ;

  Benzene_Cout_wp = rgModelVars[ID_Benzene_Q_wp] / ( V_wp * Benzene_PC_wp ) ;

  Benzene_Cout_pp = rgModelVars[ID_Benzene_Q_pp] / ( V_pp * Benzene_PC_pp ) ;

  Benzene_Cout_liv = rgModelVars[ID_Benzene_Liver] / ( V_liv * Benzene_PC_liv ) ;

  Benzene_dQ_ven = Flow_fat * Benzene_Cout_fat + Flow_wp * Benzene_Cout_wp + Flow_pp * Benzene_Cout_pp + Flow_liv * Benzene_Cout_liv ;

  rgModelVars[ID_Benzene_C_ven] = Benzene_dQ_ven / Flow_tot ;

  Benzene_C_art = ( Flow_alv * vrgInputs[ID_Benzene_C_inh].dVal + Benzene_dQ_ven ) / ( Flow_tot + Flow_alv / Benzene_PC_art ) ;

  rgModelVars[ID_Benzene_C_alv] = Benzene_C_art / Benzene_PC_art ;

  rgModelVars[ID_Benzene_C_exh] = 0.7 * rgModelVars[ID_Benzene_C_alv] +0.3 * vrgInputs[ID_Benzene_C_inh].dVal ;

  PB2_Cout_fat = rgModelVars[ID_PB2_Q_fat] / ( V_fat * PB2_PC_fat ) ;

  PB2_Cout_wp = rgModelVars[ID_PB2_Q_wp] / ( V_wp * PB2_PC_wp ) ;

  PB2_Cout_pp = rgModelVars[ID_PB2_Q_pp] / ( V_pp * PB2_PC_pp ) ;

  PB2_Cout_liv = rgModelVars[ID_PB2_Liver] / ( V_liv * PB2_PC_liv ) ;

  PB2_dQ_ven = Flow_fat * PB2_Cout_fat + Flow_wp * PB2_Cout_wp + Flow_pp * PB2_Cout_pp + Flow_liv * PB2_Cout_liv ;

  rgModelVars[ID_PB2_C_ven] = PB2_dQ_ven / Flow_tot ;

  PB2_C_art = ( Flow_alv * vrgInputs[ID_PB2_C_inh].dVal + PB2_dQ_ven ) / ( Flow_tot + Flow_alv / PB2_PC_art ) ;

  rgModelVars[ID_PB2_C_alv] = PB2_C_art / PB2_PC_art ;

  rgModelVars[ID_PB2_C_exh] = 0.7 * rgModelVars[ID_PB2_C_alv] +0.3 * vrgInputs[ID_PB2_C_inh].dVal ;

  PB1_Cout_fat = rgModelVars[ID_PB1_Q_fat] / ( V_fat * PB1_PC_fat ) ;

  PB1_Cout_wp = rgModelVars[ID_PB1_Q_wp] / ( V_wp * PB1_PC_wp ) ;

  PB1_Cout_pp = rgModelVars[ID_PB1_Q_pp] / ( V_pp * PB1_PC_pp ) ;

  PB1_Cout_liv = rgModelVars[ID_PB1_Liver] / ( V_liv * PB1_PC_liv ) ;

  PB1_dQ_ven = Flow_fat * PB1_Cout_fat + Flow_wp * PB1_Cout_wp + Flow_pp * PB1_Cout_pp + Flow_liv * PB1_Cout_liv ;

  rgModelVars[ID_PB1_C_ven] = PB1_dQ_ven / Flow_tot ;

  PB1_C_art = ( Flow_alv * vrgInputs[ID_PB1_C_inh].dVal + PB1_dQ_ven ) / ( Flow_tot + Flow_alv / PB1_PC_art ) ;

  rgModelVars[ID_PB1_C_alv] = PB1_C_art / PB1_PC_art ;

  rgModelVars[ID_PB1_C_exh] = 0.7 * rgModelVars[ID_PB1_C_alv] +0.3 * vrgInputs[ID_PB1_C_inh].dVal ;

  Benzene_J2 = Benzene_J2_k2 * rgModelVars[ID_Benzene_CYP2E1_Liver] ;

  Benzene_J1 = Benzene_J1_k1 * rgModelVars[ID_Benzene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Benzene_J3 = Benzene_J3_k3 * rgModelVars[ID_Benzene_CYP2E1_Liver] ;

  Benzene_J4 = Benzene_J4_k1 * rgModelVars[ID_PB1_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Benzene_J5 = Benzene_J5_k2 * rgModelVars[ID_PB1_CYP2E1_Liver] ;

  Benzene_J6 = Benzene_J6_k3 * rgModelVars[ID_PB1_CYP2E1_Liver] ;

  Toluene_Cout_fat = rgModelVars[ID_Toluene_Q_fat] / ( V_fat * Toluene_PC_fat ) ;

  Toluene_Cout_wp = rgModelVars[ID_Toluene_Q_wp] / ( V_wp * Toluene_PC_wp ) ;

  Toluene_Cout_pp = rgModelVars[ID_Toluene_Q_pp] / ( V_pp * Toluene_PC_pp ) ;

  Toluene_Cout_liv = rgModelVars[ID_Toluene_Liver] / ( V_liv * Toluene_PC_liv ) ;

  Toluene_dQ_ven = Flow_fat * Toluene_Cout_fat + Flow_wp * Toluene_Cout_wp + Flow_pp * Toluene_Cout_pp + Flow_liv * Toluene_Cout_liv ;

  rgModelVars[ID_Toluene_C_ven] = Toluene_dQ_ven / Flow_tot ;

  Toluene_C_art = ( Flow_alv * vrgInputs[ID_Toluene_C_inh].dVal + Toluene_dQ_ven ) / ( Flow_tot + Flow_alv / Toluene_PC_art ) ;

  rgModelVars[ID_Toluene_C_alv] = Toluene_C_art / Toluene_PC_art ;

  rgModelVars[ID_Toluene_C_exh] = 0.7 * rgModelVars[ID_Toluene_C_alv] +0.3 * vrgInputs[ID_Toluene_C_inh].dVal ;

  PT2_Cout_fat = rgModelVars[ID_PT2_Q_fat] / ( V_fat * PT2_PC_fat ) ;

  PT2_Cout_wp = rgModelVars[ID_PT2_Q_wp] / ( V_wp * PT2_PC_wp ) ;

  PT2_Cout_pp = rgModelVars[ID_PT2_Q_pp] / ( V_pp * PT2_PC_pp ) ;

  PT2_Cout_liv = rgModelVars[ID_PT2_Liver] / ( V_liv * PT2_PC_liv ) ;

  PT2_dQ_ven = Flow_fat * PT2_Cout_fat + Flow_wp * PT2_Cout_wp + Flow_pp * PT2_Cout_pp + Flow_liv * PT2_Cout_liv ;

  rgModelVars[ID_PT2_C_ven] = PT2_dQ_ven / Flow_tot ;

  PT2_C_art = ( Flow_alv * vrgInputs[ID_PT2_C_inh].dVal + PT2_dQ_ven ) / ( Flow_tot + Flow_alv / PT2_PC_art ) ;

  rgModelVars[ID_PT2_C_alv] = PT2_C_art / PT2_PC_art ;

  rgModelVars[ID_PT2_C_exh] = 0.7 * rgModelVars[ID_PT2_C_alv] +0.3 * vrgInputs[ID_PT2_C_inh].dVal ;

  PT1_Cout_fat = rgModelVars[ID_PT1_Q_fat] / ( V_fat * PT1_PC_fat ) ;

  PT1_Cout_wp = rgModelVars[ID_PT1_Q_wp] / ( V_wp * PT1_PC_wp ) ;

  PT1_Cout_pp = rgModelVars[ID_PT1_Q_pp] / ( V_pp * PT1_PC_pp ) ;

  PT1_Cout_liv = rgModelVars[ID_PT1_Liver] / ( V_liv * PT1_PC_liv ) ;

  PT1_dQ_ven = Flow_fat * PT1_Cout_fat + Flow_wp * PT1_Cout_wp + Flow_pp * PT1_Cout_pp + Flow_liv * PT1_Cout_liv ;

  rgModelVars[ID_PT1_C_ven] = PT1_dQ_ven / Flow_tot ;

  PT1_C_art = ( Flow_alv * vrgInputs[ID_PT1_C_inh].dVal + PT1_dQ_ven ) / ( Flow_tot + Flow_alv / PT1_PC_art ) ;

  rgModelVars[ID_PT1_C_alv] = PT1_C_art / PT1_PC_art ;

  rgModelVars[ID_PT1_C_exh] = 0.7 * rgModelVars[ID_PT1_C_alv] +0.3 * vrgInputs[ID_PT1_C_inh].dVal ;

  Toluene_J2 = Toluene_J2_k2 * rgModelVars[ID_Toluene_CYP2E1_Liver] ;

  Toluene_J1 = Toluene_J1_k1 * rgModelVars[ID_Toluene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Toluene_J3 = Toluene_J3_k3 * rgModelVars[ID_Toluene_CYP2E1_Liver] ;

  Toluene_J4 = Toluene_J4_k1 * rgModelVars[ID_PT1_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Toluene_J5 = Toluene_J5_k2 * rgModelVars[ID_PT1_CYP2E1_Liver] ;

  Toluene_J6 = Toluene_J6_k3 * rgModelVars[ID_PT1_CYP2E1_Liver] ;

  Ethylbenzene_Cout_fat = rgModelVars[ID_Ethylbenzene_Q_fat] / ( V_fat * Ethylbenzene_PC_fat ) ;

  Ethylbenzene_Cout_wp = rgModelVars[ID_Ethylbenzene_Q_wp] / ( V_wp * Ethylbenzene_PC_wp ) ;

  Ethylbenzene_Cout_pp = rgModelVars[ID_Ethylbenzene_Q_pp] / ( V_pp * Ethylbenzene_PC_pp ) ;

  Ethylbenzene_Cout_liv = rgModelVars[ID_Ethylbenzene_Liver] / ( V_liv * Ethylbenzene_PC_liv ) ;

  Ethylbenzene_dQ_ven = Flow_fat * Ethylbenzene_Cout_fat + Flow_wp * Ethylbenzene_Cout_wp + Flow_pp * Ethylbenzene_Cout_pp + Flow_liv * Ethylbenzene_Cout_liv ;

  rgModelVars[ID_Ethylbenzene_C_ven] = Ethylbenzene_dQ_ven / Flow_tot ;

  Ethylbenzene_C_art = ( Flow_alv * vrgInputs[ID_Ethylbenzene_C_inh].dVal + Ethylbenzene_dQ_ven ) / ( Flow_tot + Flow_alv / Ethylbenzene_PC_art ) ;

  rgModelVars[ID_Ethylbenzene_C_alv] = Ethylbenzene_C_art / Ethylbenzene_PC_art ;

  rgModelVars[ID_Ethylbenzene_C_exh] = 0.7 * rgModelVars[ID_Ethylbenzene_C_alv] +0.3 * vrgInputs[ID_Ethylbenzene_C_inh].dVal ;

  PE2_Cout_fat = rgModelVars[ID_PE2_Q_fat] / ( V_fat * PE2_PC_fat ) ;

  PE2_Cout_wp = rgModelVars[ID_PE2_Q_wp] / ( V_wp * PE2_PC_wp ) ;

  PE2_Cout_pp = rgModelVars[ID_PE2_Q_pp] / ( V_pp * PE2_PC_pp ) ;

  PE2_Cout_liv = rgModelVars[ID_PE2_Liver] / ( V_liv * PE2_PC_liv ) ;

  PE2_dQ_ven = Flow_fat * PE2_Cout_fat + Flow_wp * PE2_Cout_wp + Flow_pp * PE2_Cout_pp + Flow_liv * PE2_Cout_liv ;

  rgModelVars[ID_PE2_C_ven] = PE2_dQ_ven / Flow_tot ;

  PE2_C_art = ( Flow_alv * vrgInputs[ID_PE2_C_inh].dVal + PE2_dQ_ven ) / ( Flow_tot + Flow_alv / PE2_PC_art ) ;

  rgModelVars[ID_PE2_C_alv] = PE2_C_art / PE2_PC_art ;

  rgModelVars[ID_PE2_C_exh] = 0.7 * rgModelVars[ID_PE2_C_alv] +0.3 * vrgInputs[ID_PE2_C_inh].dVal ;

  PE1_Cout_fat = rgModelVars[ID_PE1_Q_fat] / ( V_fat * PE1_PC_fat ) ;

  PE1_Cout_wp = rgModelVars[ID_PE1_Q_wp] / ( V_wp * PE1_PC_wp ) ;

  PE1_Cout_pp = rgModelVars[ID_PE1_Q_pp] / ( V_pp * PE1_PC_pp ) ;

  PE1_Cout_liv = rgModelVars[ID_PE1_Liver] / ( V_liv * PE1_PC_liv ) ;

  PE1_dQ_ven = Flow_fat * PE1_Cout_fat + Flow_wp * PE1_Cout_wp + Flow_pp * PE1_Cout_pp + Flow_liv * PE1_Cout_liv ;

  rgModelVars[ID_PE1_C_ven] = PE1_dQ_ven / Flow_tot ;

  PE1_C_art = ( Flow_alv * vrgInputs[ID_PE1_C_inh].dVal + PE1_dQ_ven ) / ( Flow_tot + Flow_alv / PE1_PC_art ) ;

  rgModelVars[ID_PE1_C_alv] = PE1_C_art / PE1_PC_art ;

  rgModelVars[ID_PE1_C_exh] = 0.7 * rgModelVars[ID_PE1_C_alv] +0.3 * vrgInputs[ID_PE1_C_inh].dVal ;

  Ethylbenzene_J2 = Ethylbenzene_J2_k2 * rgModelVars[ID_Ethylbenzene_CYP2E1_Liver] ;

  Ethylbenzene_J1 = Ethylbenzene_J1_k1 * rgModelVars[ID_Ethylbenzene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Ethylbenzene_J3 = Ethylbenzene_J3_k3 * rgModelVars[ID_Ethylbenzene_CYP2E1_Liver] ;

  Ethylbenzene_J4 = Ethylbenzene_J4_k1 * rgModelVars[ID_PE1_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Ethylbenzene_J5 = Ethylbenzene_J5_k2 * rgModelVars[ID_PE1_CYP2E1_Liver] ;

  Ethylbenzene_J6 = Ethylbenzene_J6_k3 * rgModelVars[ID_PE1_CYP2E1_Liver] ;

  Xylene_Cout_fat = rgModelVars[ID_Xylene_Q_fat] / ( V_fat * Xylene_PC_fat ) ;

  Xylene_Cout_wp = rgModelVars[ID_Xylene_Q_wp] / ( V_wp * Xylene_PC_wp ) ;

  Xylene_Cout_pp = rgModelVars[ID_Xylene_Q_pp] / ( V_pp * Xylene_PC_pp ) ;

  Xylene_Cout_liv = rgModelVars[ID_Xylene_Liver] / ( V_liv * Xylene_PC_liv ) ;

  Xylene_dQ_ven = Flow_fat * Xylene_Cout_fat + Flow_wp * Xylene_Cout_wp + Flow_pp * Xylene_Cout_pp + Flow_liv * Xylene_Cout_liv ;

  rgModelVars[ID_Xylene_C_ven] = Xylene_dQ_ven / Flow_tot ;

  Xylene_C_art = ( Flow_alv * vrgInputs[ID_Xylene_C_inh].dVal + Xylene_dQ_ven ) / ( Flow_tot + Flow_alv / Xylene_PC_art ) ;

  rgModelVars[ID_Xylene_C_alv] = Xylene_C_art / Xylene_PC_art ;

  rgModelVars[ID_Xylene_C_exh] = 0.7 * rgModelVars[ID_Xylene_C_alv] +0.3 * vrgInputs[ID_Xylene_C_inh].dVal ;

  PX2_Cout_fat = rgModelVars[ID_PX2_Q_fat] / ( V_fat * PX2_PC_fat ) ;

  PX2_Cout_wp = rgModelVars[ID_PX2_Q_wp] / ( V_wp * PX2_PC_wp ) ;

  PX2_Cout_pp = rgModelVars[ID_PX2_Q_pp] / ( V_pp * PX2_PC_pp ) ;

  PX2_Cout_liv = rgModelVars[ID_PX2_Liver] / ( V_liv * PX2_PC_liv ) ;

  PX2_dQ_ven = Flow_fat * PX2_Cout_fat + Flow_wp * PX2_Cout_wp + Flow_pp * PX2_Cout_pp + Flow_liv * PX2_Cout_liv ;

  rgModelVars[ID_PX2_C_ven] = PX2_dQ_ven / Flow_tot ;

  PX2_C_art = ( Flow_alv * vrgInputs[ID_PX2_C_inh].dVal + PX2_dQ_ven ) / ( Flow_tot + Flow_alv / PX2_PC_art ) ;

  rgModelVars[ID_PX2_C_alv] = PX2_C_art / PX2_PC_art ;

  rgModelVars[ID_PX2_C_exh] = 0.7 * rgModelVars[ID_PX2_C_alv] +0.3 * vrgInputs[ID_PX2_C_inh].dVal ;

  PX1_Cout_fat = rgModelVars[ID_PX1_Q_fat] / ( V_fat * PX1_PC_fat ) ;

  PX1_Cout_wp = rgModelVars[ID_PX1_Q_wp] / ( V_wp * PX1_PC_wp ) ;

  PX1_Cout_pp = rgModelVars[ID_PX1_Q_pp] / ( V_pp * PX1_PC_pp ) ;

  PX1_Cout_liv = rgModelVars[ID_PX1_Liver] / ( V_liv * PX1_PC_liv ) ;

  PX1_dQ_ven = Flow_fat * PX1_Cout_fat + Flow_wp * PX1_Cout_wp + Flow_pp * PX1_Cout_pp + Flow_liv * PX1_Cout_liv ;

  rgModelVars[ID_PX1_C_ven] = PX1_dQ_ven / Flow_tot ;

  PX1_C_art = ( Flow_alv * vrgInputs[ID_PX1_C_inh].dVal + PX1_dQ_ven ) / ( Flow_tot + Flow_alv / PX1_PC_art ) ;

  rgModelVars[ID_PX1_C_alv] = PX1_C_art / PX1_PC_art ;

  rgModelVars[ID_PX1_C_exh] = 0.7 * rgModelVars[ID_PX1_C_alv] +0.3 * vrgInputs[ID_PX1_C_inh].dVal ;

  Xylene_J2 = Xylene_J2_k2 * rgModelVars[ID_Xylene_CYP2E1_Liver] ;

  Xylene_J1 = Xylene_J1_k1 * rgModelVars[ID_Xylene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Xylene_J3 = Xylene_J3_k3 * rgModelVars[ID_Xylene_CYP2E1_Liver] ;

  Xylene_J4 = Xylene_J4_k1 * rgModelVars[ID_PX1_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Xylene_J5 = Xylene_J5_k2 * rgModelVars[ID_PX1_CYP2E1_Liver] ;

  Xylene_J6 = Xylene_J6_k3 * rgModelVars[ID_PX1_CYP2E1_Liver] ;

  rgDerivs[ID_Benzene_Q_exh] = Flow_alv * rgModelVars[ID_Benzene_C_alv] ;

  rgDerivs[ID_Benzene_Q_fat] = Flow_fat * ( Benzene_C_art - Benzene_Cout_fat ) ;

  rgDerivs[ID_Benzene_Q_wp] = Flow_wp * ( Benzene_C_art - Benzene_Cout_wp ) ;

  rgDerivs[ID_Benzene_Q_pp] = Flow_pp * ( Benzene_C_art - Benzene_Cout_pp ) ;

  rgDerivs[ID_Benzene_Liver] = vrgInputs[ID_Benzene_Q_ing].dVal + Flow_liv * ( Benzene_C_art - Benzene_Cout_liv ) + Benzene_J2 - Benzene_J1 ;

  rgDerivs[ID_PB2_Q_exh] = Flow_alv * rgModelVars[ID_PB2_C_alv] ;

  rgDerivs[ID_PB2_Q_fat] = Flow_fat * ( PB2_C_art - PB2_Cout_fat ) ;

  rgDerivs[ID_PB2_Q_wp] = Flow_wp * ( PB2_C_art - PB2_Cout_wp ) ;

  rgDerivs[ID_PB2_Q_pp] = Flow_pp * ( PB2_C_art - PB2_Cout_pp ) ;

  rgDerivs[ID_PB2_Liver] = vrgInputs[ID_PB2_Q_ing].dVal + Flow_liv * ( PB2_C_art - PB2_Cout_liv ) + Benzene_J6 ;

  rgDerivs[ID_PB1_Q_exh] = Flow_alv * rgModelVars[ID_PB1_C_alv] ;

  rgDerivs[ID_PB1_Q_fat] = Flow_fat * ( PB1_C_art - PB1_Cout_fat ) ;

  rgDerivs[ID_PB1_Q_wp] = Flow_wp * ( PB1_C_art - PB1_Cout_wp ) ;

  rgDerivs[ID_PB1_Q_pp] = Flow_pp * ( PB1_C_art - PB1_Cout_pp ) ;

  rgDerivs[ID_PB1_Liver] = vrgInputs[ID_PB1_Q_ing].dVal + Flow_liv * ( PB1_C_art - PB1_Cout_liv ) + Benzene_J3 - Benzene_J4 + Benzene_J5 ;

  rgDerivs[ID_Benzene_CYP2E1_Liver] = - Benzene_J2 + Benzene_J1 - Benzene_J3 ;

  rgDerivs[ID_CYP2E1_Liver] = + Benzene_J2 - Benzene_J1 + Benzene_J3 - Benzene_J4 + Benzene_J5 + Benzene_J6 + Toluene_J2 - Toluene_J1 + Toluene_J3 - Toluene_J4 + Toluene_J5 + Toluene_J6 + Ethylbenzene_J2 - Ethylbenzene_J1 + Ethylbenzene_J3 - Ethylbenzene_J4 + Ethylbenzene_J5 + Ethylbenzene_J6 + Xylene_J2 - Xylene_J1 + Xylene_J3 - Xylene_J4 + Xylene_J5 + Xylene_J6 ;

  rgDerivs[ID_PB1_CYP2E1_Liver] = + Benzene_J4 - Benzene_J5 - Benzene_J6 ;

  rgDerivs[ID_Toluene_Q_exh] = Flow_alv * rgModelVars[ID_Toluene_C_alv] ;

  rgDerivs[ID_Toluene_Q_fat] = Flow_fat * ( Toluene_C_art - Toluene_Cout_fat ) ;

  rgDerivs[ID_Toluene_Q_wp] = Flow_wp * ( Toluene_C_art - Toluene_Cout_wp ) ;

  rgDerivs[ID_Toluene_Q_pp] = Flow_pp * ( Toluene_C_art - Toluene_Cout_pp ) ;

  rgDerivs[ID_Toluene_Liver] = vrgInputs[ID_Toluene_Q_ing].dVal + Flow_liv * ( Toluene_C_art - Toluene_Cout_liv ) + Toluene_J2 - Toluene_J1 ;

  rgDerivs[ID_PT2_Q_exh] = Flow_alv * rgModelVars[ID_PT2_C_alv] ;

  rgDerivs[ID_PT2_Q_fat] = Flow_fat * ( PT2_C_art - PT2_Cout_fat ) ;

  rgDerivs[ID_PT2_Q_wp] = Flow_wp * ( PT2_C_art - PT2_Cout_wp ) ;

  rgDerivs[ID_PT2_Q_pp] = Flow_pp * ( PT2_C_art - PT2_Cout_pp ) ;

  rgDerivs[ID_PT2_Liver] = vrgInputs[ID_PT2_Q_ing].dVal + Flow_liv * ( PT2_C_art - PT2_Cout_liv ) + Toluene_J6 ;

  rgDerivs[ID_PT1_Q_exh] = Flow_alv * rgModelVars[ID_PT1_C_alv] ;

  rgDerivs[ID_PT1_Q_fat] = Flow_fat * ( PT1_C_art - PT1_Cout_fat ) ;

  rgDerivs[ID_PT1_Q_wp] = Flow_wp * ( PT1_C_art - PT1_Cout_wp ) ;

  rgDerivs[ID_PT1_Q_pp] = Flow_pp * ( PT1_C_art - PT1_Cout_pp ) ;

  rgDerivs[ID_PT1_Liver] = vrgInputs[ID_PT1_Q_ing].dVal + Flow_liv * ( PT1_C_art - PT1_Cout_liv ) + Toluene_J3 - Toluene_J4 + Toluene_J5 ;

  rgDerivs[ID_Toluene_CYP2E1_Liver] = - Toluene_J2 + Toluene_J1 - Toluene_J3 ;

  rgDerivs[ID_PT1_CYP2E1_Liver] = + Toluene_J4 - Toluene_J5 - Toluene_J6 ;

  rgDerivs[ID_Ethylbenzene_Q_exh] = Flow_alv * rgModelVars[ID_Ethylbenzene_C_alv] ;

  rgDerivs[ID_Ethylbenzene_Q_fat] = Flow_fat * ( Ethylbenzene_C_art - Ethylbenzene_Cout_fat ) ;

  rgDerivs[ID_Ethylbenzene_Q_wp] = Flow_wp * ( Ethylbenzene_C_art - Ethylbenzene_Cout_wp ) ;

  rgDerivs[ID_Ethylbenzene_Q_pp] = Flow_pp * ( Ethylbenzene_C_art - Ethylbenzene_Cout_pp ) ;

  rgDerivs[ID_Ethylbenzene_Liver] = vrgInputs[ID_Ethylbenzene_Q_ing].dVal + Flow_liv * ( Ethylbenzene_C_art - Ethylbenzene_Cout_liv ) + Ethylbenzene_J2 - Ethylbenzene_J1 ;

  rgDerivs[ID_PE2_Q_exh] = Flow_alv * rgModelVars[ID_PE2_C_alv] ;

  rgDerivs[ID_PE2_Q_fat] = Flow_fat * ( PE2_C_art - PE2_Cout_fat ) ;

  rgDerivs[ID_PE2_Q_wp] = Flow_wp * ( PE2_C_art - PE2_Cout_wp ) ;

  rgDerivs[ID_PE2_Q_pp] = Flow_pp * ( PE2_C_art - PE2_Cout_pp ) ;

  rgDerivs[ID_PE2_Liver] = vrgInputs[ID_PE2_Q_ing].dVal + Flow_liv * ( PE2_C_art - PE2_Cout_liv ) + Ethylbenzene_J6 ;

  rgDerivs[ID_PE1_Q_exh] = Flow_alv * rgModelVars[ID_PE1_C_alv] ;

  rgDerivs[ID_PE1_Q_fat] = Flow_fat * ( PE1_C_art - PE1_Cout_fat ) ;

  rgDerivs[ID_PE1_Q_wp] = Flow_wp * ( PE1_C_art - PE1_Cout_wp ) ;

  rgDerivs[ID_PE1_Q_pp] = Flow_pp * ( PE1_C_art - PE1_Cout_pp ) ;

  rgDerivs[ID_PE1_Liver] = vrgInputs[ID_PE1_Q_ing].dVal + Flow_liv * ( PE1_C_art - PE1_Cout_liv ) + Ethylbenzene_J3 - Ethylbenzene_J4 + Ethylbenzene_J5 ;

  rgDerivs[ID_Ethylbenzene_CYP2E1_Liver] = - Ethylbenzene_J2 + Ethylbenzene_J1 - Ethylbenzene_J3 ;

  rgDerivs[ID_PE1_CYP2E1_Liver] = + Ethylbenzene_J4 - Ethylbenzene_J5 - Ethylbenzene_J6 ;

  rgDerivs[ID_Xylene_Q_exh] = Flow_alv * rgModelVars[ID_Xylene_C_alv] ;

  rgDerivs[ID_Xylene_Q_fat] = Flow_fat * ( Xylene_C_art - Xylene_Cout_fat ) ;

  rgDerivs[ID_Xylene_Q_wp] = Flow_wp * ( Xylene_C_art - Xylene_Cout_wp ) ;

  rgDerivs[ID_Xylene_Q_pp] = Flow_pp * ( Xylene_C_art - Xylene_Cout_pp ) ;

  rgDerivs[ID_Xylene_Liver] = vrgInputs[ID_Xylene_Q_ing].dVal + Flow_liv * ( Xylene_C_art - Xylene_Cout_liv ) + Xylene_J2 - Xylene_J1 ;

  rgDerivs[ID_PX2_Q_exh] = Flow_alv * rgModelVars[ID_PX2_C_alv] ;

  rgDerivs[ID_PX2_Q_fat] = Flow_fat * ( PX2_C_art - PX2_Cout_fat ) ;

  rgDerivs[ID_PX2_Q_wp] = Flow_wp * ( PX2_C_art - PX2_Cout_wp ) ;

  rgDerivs[ID_PX2_Q_pp] = Flow_pp * ( PX2_C_art - PX2_Cout_pp ) ;

  rgDerivs[ID_PX2_Liver] = vrgInputs[ID_PX2_Q_ing].dVal + Flow_liv * ( PX2_C_art - PX2_Cout_liv ) + Xylene_J6 ;

  rgDerivs[ID_PX1_Q_exh] = Flow_alv * rgModelVars[ID_PX1_C_alv] ;

  rgDerivs[ID_PX1_Q_fat] = Flow_fat * ( PX1_C_art - PX1_Cout_fat ) ;

  rgDerivs[ID_PX1_Q_wp] = Flow_wp * ( PX1_C_art - PX1_Cout_wp ) ;

  rgDerivs[ID_PX1_Q_pp] = Flow_pp * ( PX1_C_art - PX1_Cout_pp ) ;

  rgDerivs[ID_PX1_Liver] = vrgInputs[ID_PX1_Q_ing].dVal + Flow_liv * ( PX1_C_art - PX1_Cout_liv ) + Xylene_J3 - Xylene_J4 + Xylene_J5 ;

  rgDerivs[ID_Xylene_CYP2E1_Liver] = - Xylene_J2 + Xylene_J1 - Xylene_J3 ;

  rgDerivs[ID_PX1_CYP2E1_Liver] = + Xylene_J4 - Xylene_J5 - Xylene_J6 ;

} /* CalcDeriv */


/*----- Model scaling */

void ScaleModel (PDOUBLE pdTime)
{

  V_pp = 0.9 * BodyV - V_fat - V_liv - V_wp ;

  Flow_fat = Pct_Flow_fat * Flow_tot ;

  Flow_liv = Pct_Flow_liv * Flow_tot ;

  Flow_pp = Pct_Flow_pp * Flow_tot ;

  Flow_wp = Flow_tot - Flow_fat - Flow_liv - Flow_pp ;

} /* ScaleModel */


/*----- Jacobian calculations */

void CalcJacob (double rgModelVars[], double *rgdSave[], PDOUBLE pdTime)
{

} /* CalcJacob */


/*----- Outputs calculations */

void CalcOutputs (double  rgModelVars[], double  rgDerivs[], PDOUBLE pdTime)
{

  rgModelVars[ID_Benzene_C_liv] = rgModelVars[ID_Benzene_Liver] / V_liv ;

  rgModelVars[ID_Benzene_C_fat] = rgModelVars[ID_Benzene_Q_fat] / V_fat ;

  rgModelVars[ID_Benzene_C_wp] = rgModelVars[ID_Benzene_Q_wp] / V_wp ;

  rgModelVars[ID_Benzene_C_pp] = rgModelVars[ID_Benzene_Q_pp] / V_pp ;

  rgModelVars[ID_Benzene_C_ven_MGL] = Benzene_MW * rgModelVars[ID_Benzene_C_ven] ;

  rgModelVars[ID_Benzene_C_ven_MGL_wn] = rgModelVars[ID_Benzene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_sigma_obs] = sigma ;

  rgModelVars[ID_PB2_C_liv] = rgModelVars[ID_PB2_Liver] / V_liv ;

  rgModelVars[ID_PB2_C_fat] = rgModelVars[ID_PB2_Q_fat] / V_fat ;

  rgModelVars[ID_PB2_C_wp] = rgModelVars[ID_PB2_Q_wp] / V_wp ;

  rgModelVars[ID_PB2_C_pp] = rgModelVars[ID_PB2_Q_pp] / V_pp ;

  rgModelVars[ID_PB2_C_ven_MGL] = PB2_MW * rgModelVars[ID_PB2_C_ven] ;

  rgModelVars[ID_PB2_C_ven_MGL_wn] = rgModelVars[ID_PB2_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PB1_C_liv] = rgModelVars[ID_PB1_Liver] / V_liv ;

  rgModelVars[ID_PB1_C_fat] = rgModelVars[ID_PB1_Q_fat] / V_fat ;

  rgModelVars[ID_PB1_C_wp] = rgModelVars[ID_PB1_Q_wp] / V_wp ;

  rgModelVars[ID_PB1_C_pp] = rgModelVars[ID_PB1_Q_pp] / V_pp ;

  rgModelVars[ID_PB1_C_ven_MGL] = PB1_MW * rgModelVars[ID_PB1_C_ven] ;

  rgModelVars[ID_PB1_C_ven_MGL_wn] = rgModelVars[ID_PB1_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Toluene_C_liv] = rgModelVars[ID_Toluene_Liver] / V_liv ;

  rgModelVars[ID_Toluene_C_fat] = rgModelVars[ID_Toluene_Q_fat] / V_fat ;

  rgModelVars[ID_Toluene_C_wp] = rgModelVars[ID_Toluene_Q_wp] / V_wp ;

  rgModelVars[ID_Toluene_C_pp] = rgModelVars[ID_Toluene_Q_pp] / V_pp ;

  rgModelVars[ID_Toluene_C_ven_MGL] = Toluene_MW * rgModelVars[ID_Toluene_C_ven] ;

  rgModelVars[ID_Toluene_C_ven_MGL_wn] = rgModelVars[ID_Toluene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PT2_C_liv] = rgModelVars[ID_PT2_Liver] / V_liv ;

  rgModelVars[ID_PT2_C_fat] = rgModelVars[ID_PT2_Q_fat] / V_fat ;

  rgModelVars[ID_PT2_C_wp] = rgModelVars[ID_PT2_Q_wp] / V_wp ;

  rgModelVars[ID_PT2_C_pp] = rgModelVars[ID_PT2_Q_pp] / V_pp ;

  rgModelVars[ID_PT2_C_ven_MGL] = PT2_MW * rgModelVars[ID_PT2_C_ven] ;

  rgModelVars[ID_PT2_C_ven_MGL_wn] = rgModelVars[ID_PT2_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PT1_C_liv] = rgModelVars[ID_PT1_Liver] / V_liv ;

  rgModelVars[ID_PT1_C_fat] = rgModelVars[ID_PT1_Q_fat] / V_fat ;

  rgModelVars[ID_PT1_C_wp] = rgModelVars[ID_PT1_Q_wp] / V_wp ;

  rgModelVars[ID_PT1_C_pp] = rgModelVars[ID_PT1_Q_pp] / V_pp ;

  rgModelVars[ID_PT1_C_ven_MGL] = PT1_MW * rgModelVars[ID_PT1_C_ven] ;

  rgModelVars[ID_PT1_C_ven_MGL_wn] = rgModelVars[ID_PT1_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Ethylbenzene_C_liv] = rgModelVars[ID_Ethylbenzene_Liver] / V_liv ;

  rgModelVars[ID_Ethylbenzene_C_fat] = rgModelVars[ID_Ethylbenzene_Q_fat] / V_fat ;

  rgModelVars[ID_Ethylbenzene_C_wp] = rgModelVars[ID_Ethylbenzene_Q_wp] / V_wp ;

  rgModelVars[ID_Ethylbenzene_C_pp] = rgModelVars[ID_Ethylbenzene_Q_pp] / V_pp ;

  rgModelVars[ID_Ethylbenzene_C_ven_MGL] = Ethylbenzene_MW * rgModelVars[ID_Ethylbenzene_C_ven] ;

  rgModelVars[ID_Ethylbenzene_C_ven_MGL_wn] = rgModelVars[ID_Ethylbenzene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PE2_C_liv] = rgModelVars[ID_PE2_Liver] / V_liv ;

  rgModelVars[ID_PE2_C_fat] = rgModelVars[ID_PE2_Q_fat] / V_fat ;

  rgModelVars[ID_PE2_C_wp] = rgModelVars[ID_PE2_Q_wp] / V_wp ;

  rgModelVars[ID_PE2_C_pp] = rgModelVars[ID_PE2_Q_pp] / V_pp ;

  rgModelVars[ID_PE2_C_ven_MGL] = PE2_MW * rgModelVars[ID_PE2_C_ven] ;

  rgModelVars[ID_PE2_C_ven_MGL_wn] = rgModelVars[ID_PE2_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PE1_C_liv] = rgModelVars[ID_PE1_Liver] / V_liv ;

  rgModelVars[ID_PE1_C_fat] = rgModelVars[ID_PE1_Q_fat] / V_fat ;

  rgModelVars[ID_PE1_C_wp] = rgModelVars[ID_PE1_Q_wp] / V_wp ;

  rgModelVars[ID_PE1_C_pp] = rgModelVars[ID_PE1_Q_pp] / V_pp ;

  rgModelVars[ID_PE1_C_ven_MGL] = PE1_MW * rgModelVars[ID_PE1_C_ven] ;

  rgModelVars[ID_PE1_C_ven_MGL_wn] = rgModelVars[ID_PE1_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Xylene_C_liv] = rgModelVars[ID_Xylene_Liver] / V_liv ;

  rgModelVars[ID_Xylene_C_fat] = rgModelVars[ID_Xylene_Q_fat] / V_fat ;

  rgModelVars[ID_Xylene_C_wp] = rgModelVars[ID_Xylene_Q_wp] / V_wp ;

  rgModelVars[ID_Xylene_C_pp] = rgModelVars[ID_Xylene_Q_pp] / V_pp ;

  rgModelVars[ID_Xylene_C_ven_MGL] = Xylene_MW * rgModelVars[ID_Xylene_C_ven] ;

  rgModelVars[ID_Xylene_C_ven_MGL_wn] = rgModelVars[ID_Xylene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PX2_C_liv] = rgModelVars[ID_PX2_Liver] / V_liv ;

  rgModelVars[ID_PX2_C_fat] = rgModelVars[ID_PX2_Q_fat] / V_fat ;

  rgModelVars[ID_PX2_C_wp] = rgModelVars[ID_PX2_Q_wp] / V_wp ;

  rgModelVars[ID_PX2_C_pp] = rgModelVars[ID_PX2_Q_pp] / V_pp ;

  rgModelVars[ID_PX2_C_ven_MGL] = PX2_MW * rgModelVars[ID_PX2_C_ven] ;

  rgModelVars[ID_PX2_C_ven_MGL_wn] = rgModelVars[ID_PX2_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_PX1_C_liv] = rgModelVars[ID_PX1_Liver] / V_liv ;

  rgModelVars[ID_PX1_C_fat] = rgModelVars[ID_PX1_Q_fat] / V_fat ;

  rgModelVars[ID_PX1_C_wp] = rgModelVars[ID_PX1_Q_wp] / V_wp ;

  rgModelVars[ID_PX1_C_pp] = rgModelVars[ID_PX1_Q_pp] / V_pp ;

  rgModelVars[ID_PX1_C_ven_MGL] = PX1_MW * rgModelVars[ID_PX1_C_ven] ;

  rgModelVars[ID_PX1_C_ven_MGL_wn] = rgModelVars[ID_PX1_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

}  /* CalcOutputs */


