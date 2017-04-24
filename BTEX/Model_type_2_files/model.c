/* model.c
   ___________________________________________________

   Model File:  SBML_List.model

   Date:  Mon May 23 16:07:33 2011

   Created by:  "/Users/frederic_bois/bin/mod v5.4.0"
    -- a model preprocessor by Don Maszle
   ___________________________________________________

   Copyright (c) 1993-2011 Free Software Foundation, Inc.

   Model calculations for compartmental model:

   50 States:
     CYP2E1_Liver = 0;
     Benzene_Q_fat = 0;
     Benzene_Q_wp = 0;
     Benzene_Q_pp = 0;
     Benzene_Liver = 0;
     Benzene_Q_exh = 0;
     Benzene_CYP2E1_Liver = 0;
     Benzene_oxide_Q_fat = 0;
     Benzene_oxide_Q_wp = 0;
     Benzene_oxide_Q_pp = 0;
     Benzene_oxide_Liver = 0;
     Benzene_oxide_Q_exh = 0;
     Benzene_CYP2B1_Liver = 0;
     CYP2B1_Liver = 0;
     Toluene_Q_fat = 0;
     Toluene_Q_wp = 0;
     Toluene_Q_pp = 0;
     Toluene_Liver = 0;
     Toluene_Q_exh = 0;
     Toluene_CYP2E1_Liver = 0;
     Benzyl_alcohol_Q_fat = 0;
     Benzyl_alcohol_Q_wp = 0;
     Benzyl_alcohol_Q_pp = 0;
     Benzyl_alcohol_Liver = 0;
     Benzyl_alcohol_Q_exh = 0;
     Toluene_CYP2B1_Liver = 0;
     Ethylbenzene_Q_fat = 0;
     Ethylbenzene_Q_wp = 0;
     Ethylbenzene_Q_pp = 0;
     Ethylbenzene_Liver = 0;
     Ethylbenzene_Q_exh = 0;
     Ethylbenzene_CYP2E1_Liver = 0;
     One_phenylethanol_Q_fat = 0;
     One_phenylethanol_Q_wp = 0;
     One_phenylethanol_Q_pp = 0;
     One_phenylethanol_Liver = 0;
     One_phenylethanol_Q_exh = 0;
     Ethylbenzene_CYP2B1_Liver = 0;
     Xylene_Q_fat = 0;
     Xylene_Q_wp = 0;
     Xylene_Q_pp = 0;
     Xylene_Liver = 0;
     Xylene_Q_exh = 0;
     Xylene_CYP2E1_Liver = 0;
     Methylbenzyl_alcohol_Q_fat = 0;
     Methylbenzyl_alcohol_Q_wp = 0;
     Methylbenzyl_alcohol_Q_pp = 0;
     Methylbenzyl_alcohol_Liver = 0;
     Methylbenzyl_alcohol_Q_exh = 0;
     Xylene_CYP2B1_Liver = 0;

   73 Outputs:
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
     Benzene_oxide_C_liv = 0;
     Benzene_oxide_C_fat = 0;
     Benzene_oxide_C_wp = 0;
     Benzene_oxide_C_pp = 0;
     Benzene_oxide_C_alv = 0;
     Benzene_oxide_C_exh = 0;
     Benzene_oxide_C_ven = 0;
     Benzene_oxide_C_ven_MGL = 0;
     Benzene_oxide_C_ven_MGL_wn = 0;
     Toluene_C_liv = 0;
     Toluene_C_fat = 0;
     Toluene_C_wp = 0;
     Toluene_C_pp = 0;
     Toluene_C_alv = 0;
     Toluene_C_exh = 0;
     Toluene_C_ven = 0;
     Toluene_C_ven_MGL = 0;
     Toluene_C_ven_MGL_wn = 0;
     Benzyl_alcohol_C_liv = 0;
     Benzyl_alcohol_C_fat = 0;
     Benzyl_alcohol_C_wp = 0;
     Benzyl_alcohol_C_pp = 0;
     Benzyl_alcohol_C_alv = 0;
     Benzyl_alcohol_C_exh = 0;
     Benzyl_alcohol_C_ven = 0;
     Benzyl_alcohol_C_ven_MGL = 0;
     Benzyl_alcohol_C_ven_MGL_wn = 0;
     Ethylbenzene_C_liv = 0;
     Ethylbenzene_C_fat = 0;
     Ethylbenzene_C_wp = 0;
     Ethylbenzene_C_pp = 0;
     Ethylbenzene_C_alv = 0;
     Ethylbenzene_C_exh = 0;
     Ethylbenzene_C_ven = 0;
     Ethylbenzene_C_ven_MGL = 0;
     Ethylbenzene_C_ven_MGL_wn = 0;
     One_phenylethanol_C_liv = 0;
     One_phenylethanol_C_fat = 0;
     One_phenylethanol_C_wp = 0;
     One_phenylethanol_C_pp = 0;
     One_phenylethanol_C_alv = 0;
     One_phenylethanol_C_exh = 0;
     One_phenylethanol_C_ven = 0;
     One_phenylethanol_C_ven_MGL = 0;
     One_phenylethanol_C_ven_MGL_wn = 0;
     Xylene_C_liv = 0;
     Xylene_C_fat = 0;
     Xylene_C_wp = 0;
     Xylene_C_pp = 0;
     Xylene_C_alv = 0;
     Xylene_C_exh = 0;
     Xylene_C_ven = 0;
     Xylene_C_ven_MGL = 0;
     Xylene_C_ven_MGL_wn = 0;
     Methylbenzyl_alcohol_C_liv = 0;
     Methylbenzyl_alcohol_C_fat = 0;
     Methylbenzyl_alcohol_C_wp = 0;
     Methylbenzyl_alcohol_C_pp = 0;
     Methylbenzyl_alcohol_C_alv = 0;
     Methylbenzyl_alcohol_C_exh = 0;
     Methylbenzyl_alcohol_C_ven = 0;
     Methylbenzyl_alcohol_C_ven_MGL = 0;
     Methylbenzyl_alcohol_C_ven_MGL_wn = 0;

   16 Inputs:
     Benzene_C_inh (is a function)
     Benzene_Q_ing (is a function)
     Benzene_oxide_C_inh (is a function)
     Benzene_oxide_Q_ing (is a function)
     Toluene_C_inh (is a function)
     Toluene_Q_ing (is a function)
     Benzyl_alcohol_C_inh (is a function)
     Benzyl_alcohol_Q_ing (is a function)
     Ethylbenzene_C_inh (is a function)
     Ethylbenzene_Q_ing (is a function)
     One_phenylethanol_C_inh (is a function)
     One_phenylethanol_Q_ing (is a function)
     Xylene_C_inh (is a function)
     Xylene_Q_ing (is a function)
     Methylbenzyl_alcohol_C_inh (is a function)
     Methylbenzyl_alcohol_Q_ing (is a function)

   89 Parameters:
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
     Benzene_oxide_MW = 0;
     Benzene_oxide_PC_art = 0;
     Benzene_oxide_PC_fat = 0;
     Benzene_oxide_PC_liv = 0;
     Benzene_oxide_PC_wp = 0;
     Benzene_oxide_PC_pp = 0;
     Benzene_J0_k2 = 0.1;
     Benzene_J0_k1 = 0.1;
     Benzene_J1_k = 0.1;
     Benzene_J0_k1_B = 0.1;
     Benzene_J0_k2_B = 0.1;
     Benzene_J1_k_B = 0.1;
     Toluene_MW = 0;
     Toluene_PC_art = 0;
     Toluene_PC_fat = 0;
     Toluene_PC_liv = 0;
     Toluene_PC_wp = 0;
     Toluene_PC_pp = 0;
     Benzyl_alcohol_MW = 0;
     Benzyl_alcohol_PC_art = 0;
     Benzyl_alcohol_PC_fat = 0;
     Benzyl_alcohol_PC_liv = 0;
     Benzyl_alcohol_PC_wp = 0;
     Benzyl_alcohol_PC_pp = 0;
     Toluene_J0_k2 = 0.1;
     Toluene_J0_k1 = 0.1;
     Toluene_J1_k = 0.1;
     Toluene_J0_k1_B = 0.1;
     Toluene_J0_k2_B = 0.1;
     Toluene_J1_k_B = 0.1;
     Ethylbenzene_MW = 0;
     Ethylbenzene_PC_art = 0;
     Ethylbenzene_PC_fat = 0;
     Ethylbenzene_PC_liv = 0;
     Ethylbenzene_PC_wp = 0;
     Ethylbenzene_PC_pp = 0;
     One_phenylethanol_MW = 0;
     One_phenylethanol_PC_art = 0;
     One_phenylethanol_PC_fat = 0;
     One_phenylethanol_PC_liv = 0;
     One_phenylethanol_PC_wp = 0;
     One_phenylethanol_PC_pp = 0;
     Ethylbenzene_J0_k2 = 0.1;
     Ethylbenzene_J0_k1 = 0.1;
     Ethylbenzene_J1_k = 0.1;
     Ethylbenzene_J0_k1_B = 0.1;
     Ethylbenzene_J0_k2_B = 0.1;
     Ethylbenzene_J1_k_B = 0.1;
     Xylene_MW = 0;
     Xylene_PC_art = 0;
     Xylene_PC_fat = 0;
     Xylene_PC_liv = 0;
     Xylene_PC_wp = 0;
     Xylene_PC_pp = 0;
     Methylbenzyl_alcohol_MW = 0;
     Methylbenzyl_alcohol_PC_art = 0;
     Methylbenzyl_alcohol_PC_fat = 0;
     Methylbenzyl_alcohol_PC_liv = 0;
     Methylbenzyl_alcohol_PC_wp = 0;
     Methylbenzyl_alcohol_PC_pp = 0;
     Xylene_J0_k2 = 0.1;
     Xylene_J0_k1 = 0.1;
     Xylene_J1_k = 0.1;
     Xylene_J0_k1_B = 0.1;
     Xylene_J0_k2_B = 0.1;
     Xylene_J1_k_B = 0.1;
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
#define ID_Benzene_oxide_Q_fat 0x0007
#define ID_Benzene_oxide_Q_wp 0x0008
#define ID_Benzene_oxide_Q_pp 0x0009
#define ID_Benzene_oxide_Liver 0x000a
#define ID_Benzene_oxide_Q_exh 0x000b
#define ID_Benzene_CYP2B1_Liver 0x000c
#define ID_CYP2B1_Liver 0x000d
#define ID_Toluene_Q_fat 0x000e
#define ID_Toluene_Q_wp 0x000f
#define ID_Toluene_Q_pp 0x0010
#define ID_Toluene_Liver 0x0011
#define ID_Toluene_Q_exh 0x0012
#define ID_Toluene_CYP2E1_Liver 0x0013
#define ID_Benzyl_alcohol_Q_fat 0x0014
#define ID_Benzyl_alcohol_Q_wp 0x0015
#define ID_Benzyl_alcohol_Q_pp 0x0016
#define ID_Benzyl_alcohol_Liver 0x0017
#define ID_Benzyl_alcohol_Q_exh 0x0018
#define ID_Toluene_CYP2B1_Liver 0x0019
#define ID_Ethylbenzene_Q_fat 0x001a
#define ID_Ethylbenzene_Q_wp 0x001b
#define ID_Ethylbenzene_Q_pp 0x001c
#define ID_Ethylbenzene_Liver 0x001d
#define ID_Ethylbenzene_Q_exh 0x001e
#define ID_Ethylbenzene_CYP2E1_Liver 0x001f
#define ID_One_phenylethanol_Q_fat 0x0020
#define ID_One_phenylethanol_Q_wp 0x0021
#define ID_One_phenylethanol_Q_pp 0x0022
#define ID_One_phenylethanol_Liver 0x0023
#define ID_One_phenylethanol_Q_exh 0x0024
#define ID_Ethylbenzene_CYP2B1_Liver 0x0025
#define ID_Xylene_Q_fat 0x0026
#define ID_Xylene_Q_wp 0x0027
#define ID_Xylene_Q_pp 0x0028
#define ID_Xylene_Liver 0x0029
#define ID_Xylene_Q_exh 0x002a
#define ID_Xylene_CYP2E1_Liver 0x002b
#define ID_Methylbenzyl_alcohol_Q_fat 0x002c
#define ID_Methylbenzyl_alcohol_Q_wp 0x002d
#define ID_Methylbenzyl_alcohol_Q_pp 0x002e
#define ID_Methylbenzyl_alcohol_Liver 0x002f
#define ID_Methylbenzyl_alcohol_Q_exh 0x0030
#define ID_Xylene_CYP2B1_Liver 0x0031
#define ID_Benzene_C_liv 0x0032
#define ID_Benzene_C_fat 0x0033
#define ID_Benzene_C_wp 0x0034
#define ID_Benzene_C_pp 0x0035
#define ID_Benzene_C_alv 0x0036
#define ID_Benzene_C_exh 0x0037
#define ID_Benzene_C_ven 0x0038
#define ID_Benzene_C_ven_MGL 0x0039
#define ID_Benzene_C_ven_MGL_wn 0x003a
#define ID_sigma_obs 0x003b
#define ID_Benzene_oxide_C_liv 0x003c
#define ID_Benzene_oxide_C_fat 0x003d
#define ID_Benzene_oxide_C_wp 0x003e
#define ID_Benzene_oxide_C_pp 0x003f
#define ID_Benzene_oxide_C_alv 0x0040
#define ID_Benzene_oxide_C_exh 0x0041
#define ID_Benzene_oxide_C_ven 0x0042
#define ID_Benzene_oxide_C_ven_MGL 0x0043
#define ID_Benzene_oxide_C_ven_MGL_wn 0x0044
#define ID_Toluene_C_liv 0x0045
#define ID_Toluene_C_fat 0x0046
#define ID_Toluene_C_wp 0x0047
#define ID_Toluene_C_pp 0x0048
#define ID_Toluene_C_alv 0x0049
#define ID_Toluene_C_exh 0x004a
#define ID_Toluene_C_ven 0x004b
#define ID_Toluene_C_ven_MGL 0x004c
#define ID_Toluene_C_ven_MGL_wn 0x004d
#define ID_Benzyl_alcohol_C_liv 0x004e
#define ID_Benzyl_alcohol_C_fat 0x004f
#define ID_Benzyl_alcohol_C_wp 0x0050
#define ID_Benzyl_alcohol_C_pp 0x0051
#define ID_Benzyl_alcohol_C_alv 0x0052
#define ID_Benzyl_alcohol_C_exh 0x0053
#define ID_Benzyl_alcohol_C_ven 0x0054
#define ID_Benzyl_alcohol_C_ven_MGL 0x0055
#define ID_Benzyl_alcohol_C_ven_MGL_wn 0x0056
#define ID_Ethylbenzene_C_liv 0x0057
#define ID_Ethylbenzene_C_fat 0x0058
#define ID_Ethylbenzene_C_wp 0x0059
#define ID_Ethylbenzene_C_pp 0x005a
#define ID_Ethylbenzene_C_alv 0x005b
#define ID_Ethylbenzene_C_exh 0x005c
#define ID_Ethylbenzene_C_ven 0x005d
#define ID_Ethylbenzene_C_ven_MGL 0x005e
#define ID_Ethylbenzene_C_ven_MGL_wn 0x005f
#define ID_One_phenylethanol_C_liv 0x0060
#define ID_One_phenylethanol_C_fat 0x0061
#define ID_One_phenylethanol_C_wp 0x0062
#define ID_One_phenylethanol_C_pp 0x0063
#define ID_One_phenylethanol_C_alv 0x0064
#define ID_One_phenylethanol_C_exh 0x0065
#define ID_One_phenylethanol_C_ven 0x0066
#define ID_One_phenylethanol_C_ven_MGL 0x0067
#define ID_One_phenylethanol_C_ven_MGL_wn 0x0068
#define ID_Xylene_C_liv 0x0069
#define ID_Xylene_C_fat 0x006a
#define ID_Xylene_C_wp 0x006b
#define ID_Xylene_C_pp 0x006c
#define ID_Xylene_C_alv 0x006d
#define ID_Xylene_C_exh 0x006e
#define ID_Xylene_C_ven 0x006f
#define ID_Xylene_C_ven_MGL 0x0070
#define ID_Xylene_C_ven_MGL_wn 0x0071
#define ID_Methylbenzyl_alcohol_C_liv 0x0072
#define ID_Methylbenzyl_alcohol_C_fat 0x0073
#define ID_Methylbenzyl_alcohol_C_wp 0x0074
#define ID_Methylbenzyl_alcohol_C_pp 0x0075
#define ID_Methylbenzyl_alcohol_C_alv 0x0076
#define ID_Methylbenzyl_alcohol_C_exh 0x0077
#define ID_Methylbenzyl_alcohol_C_ven 0x0078
#define ID_Methylbenzyl_alcohol_C_ven_MGL 0x0079
#define ID_Methylbenzyl_alcohol_C_ven_MGL_wn 0x007a

/* Inputs */
#define ID_Benzene_C_inh 0x0000
#define ID_Benzene_Q_ing 0x0001
#define ID_Benzene_oxide_C_inh 0x0002
#define ID_Benzene_oxide_Q_ing 0x0003
#define ID_Toluene_C_inh 0x0004
#define ID_Toluene_Q_ing 0x0005
#define ID_Benzyl_alcohol_C_inh 0x0006
#define ID_Benzyl_alcohol_Q_ing 0x0007
#define ID_Ethylbenzene_C_inh 0x0008
#define ID_Ethylbenzene_Q_ing 0x0009
#define ID_One_phenylethanol_C_inh 0x000a
#define ID_One_phenylethanol_Q_ing 0x000b
#define ID_Xylene_C_inh 0x000c
#define ID_Xylene_Q_ing 0x000d
#define ID_Methylbenzyl_alcohol_C_inh 0x000e
#define ID_Methylbenzyl_alcohol_Q_ing 0x000f

/* Parameters */
#define ID_Liver 0x008b
#define ID_Benzene_MW 0x008c
#define ID_BodyV 0x008d
#define ID_V_fat 0x008e
#define ID_V_liv 0x008f
#define ID_V_wp 0x0090
#define ID_V_pp 0x0091
#define ID_Pct_Flow_fat 0x0092
#define ID_Pct_Flow_liv 0x0093
#define ID_Pct_Flow_wp 0x0094
#define ID_Pct_Flow_pp 0x0095
#define ID_Flow_alv 0x0096
#define ID_Flow_tot 0x0097
#define ID_Benzene_PC_art 0x0098
#define ID_Benzene_PC_fat 0x0099
#define ID_Benzene_PC_liv 0x009a
#define ID_Benzene_PC_wp 0x009b
#define ID_Benzene_PC_pp 0x009c
#define ID_sigma 0x009d
#define ID_Flow_fat 0x009e
#define ID_Flow_liv 0x009f
#define ID_Flow_wp 0x00a0
#define ID_Flow_pp 0x00a1
#define ID_Benzene_oxide_MW 0x00a2
#define ID_Benzene_oxide_PC_art 0x00a3
#define ID_Benzene_oxide_PC_fat 0x00a4
#define ID_Benzene_oxide_PC_liv 0x00a5
#define ID_Benzene_oxide_PC_wp 0x00a6
#define ID_Benzene_oxide_PC_pp 0x00a7
#define ID_Benzene_J0_k2 0x00a8
#define ID_Benzene_J0_k1 0x00a9
#define ID_Benzene_J1_k 0x00aa
#define ID_Benzene_J0_k1_B 0x00ab
#define ID_Benzene_J0_k2_B 0x00ac
#define ID_Benzene_J1_k_B 0x00ad
#define ID_Toluene_MW 0x00ae
#define ID_Toluene_PC_art 0x00af
#define ID_Toluene_PC_fat 0x00b0
#define ID_Toluene_PC_liv 0x00b1
#define ID_Toluene_PC_wp 0x00b2
#define ID_Toluene_PC_pp 0x00b3
#define ID_Benzyl_alcohol_MW 0x00b4
#define ID_Benzyl_alcohol_PC_art 0x00b5
#define ID_Benzyl_alcohol_PC_fat 0x00b6
#define ID_Benzyl_alcohol_PC_liv 0x00b7
#define ID_Benzyl_alcohol_PC_wp 0x00b8
#define ID_Benzyl_alcohol_PC_pp 0x00b9
#define ID_Toluene_J0_k2 0x00ba
#define ID_Toluene_J0_k1 0x00bb
#define ID_Toluene_J1_k 0x00bc
#define ID_Toluene_J0_k1_B 0x00bd
#define ID_Toluene_J0_k2_B 0x00be
#define ID_Toluene_J1_k_B 0x00bf
#define ID_Ethylbenzene_MW 0x00c0
#define ID_Ethylbenzene_PC_art 0x00c1
#define ID_Ethylbenzene_PC_fat 0x00c2
#define ID_Ethylbenzene_PC_liv 0x00c3
#define ID_Ethylbenzene_PC_wp 0x00c4
#define ID_Ethylbenzene_PC_pp 0x00c5
#define ID_One_phenylethanol_MW 0x00c6
#define ID_One_phenylethanol_PC_art 0x00c7
#define ID_One_phenylethanol_PC_fat 0x00c8
#define ID_One_phenylethanol_PC_liv 0x00c9
#define ID_One_phenylethanol_PC_wp 0x00ca
#define ID_One_phenylethanol_PC_pp 0x00cb
#define ID_Ethylbenzene_J0_k2 0x00cc
#define ID_Ethylbenzene_J0_k1 0x00cd
#define ID_Ethylbenzene_J1_k 0x00ce
#define ID_Ethylbenzene_J0_k1_B 0x00cf
#define ID_Ethylbenzene_J0_k2_B 0x00d0
#define ID_Ethylbenzene_J1_k_B 0x00d1
#define ID_Xylene_MW 0x00d2
#define ID_Xylene_PC_art 0x00d3
#define ID_Xylene_PC_fat 0x00d4
#define ID_Xylene_PC_liv 0x00d5
#define ID_Xylene_PC_wp 0x00d6
#define ID_Xylene_PC_pp 0x00d7
#define ID_Methylbenzyl_alcohol_MW 0x00d8
#define ID_Methylbenzyl_alcohol_PC_art 0x00d9
#define ID_Methylbenzyl_alcohol_PC_fat 0x00da
#define ID_Methylbenzyl_alcohol_PC_liv 0x00db
#define ID_Methylbenzyl_alcohol_PC_wp 0x00dc
#define ID_Methylbenzyl_alcohol_PC_pp 0x00dd
#define ID_Xylene_J0_k2 0x00de
#define ID_Xylene_J0_k1 0x00df
#define ID_Xylene_J1_k 0x00e0
#define ID_Xylene_J0_k1_B 0x00e1
#define ID_Xylene_J0_k2_B 0x00e2
#define ID_Xylene_J1_k_B 0x00e3


/*----- Global Variables */

/* For export. Keep track of who we are. */
char szModelDescFilename[] = "SBML_List.model";
char szModelSourceFilename[] = __FILE__;
char szModelGenAndVersion[] = "/Users/frederic_bois/bin/mod v5.4.0";

/* Externs */
extern BOOL vbModelReinitd;

/* Model Dimensions */
int vnStates = 50;
int vnOutputs = 73;
int vnModelVars = 123;
int vnInputs = 16;
int vnParms = 89;

/* States and Outputs*/
double vrgModelVars[123];

/* Inputs */
IFN vrgInputs[16];

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
double Benzene_oxide_MW;
double Benzene_oxide_PC_art;
double Benzene_oxide_PC_fat;
double Benzene_oxide_PC_liv;
double Benzene_oxide_PC_wp;
double Benzene_oxide_PC_pp;
double Benzene_J0_k2;
double Benzene_J0_k1;
double Benzene_J1_k;
double Benzene_J0_k1_B;
double Benzene_J0_k2_B;
double Benzene_J1_k_B;
double Toluene_MW;
double Toluene_PC_art;
double Toluene_PC_fat;
double Toluene_PC_liv;
double Toluene_PC_wp;
double Toluene_PC_pp;
double Benzyl_alcohol_MW;
double Benzyl_alcohol_PC_art;
double Benzyl_alcohol_PC_fat;
double Benzyl_alcohol_PC_liv;
double Benzyl_alcohol_PC_wp;
double Benzyl_alcohol_PC_pp;
double Toluene_J0_k2;
double Toluene_J0_k1;
double Toluene_J1_k;
double Toluene_J0_k1_B;
double Toluene_J0_k2_B;
double Toluene_J1_k_B;
double Ethylbenzene_MW;
double Ethylbenzene_PC_art;
double Ethylbenzene_PC_fat;
double Ethylbenzene_PC_liv;
double Ethylbenzene_PC_wp;
double Ethylbenzene_PC_pp;
double One_phenylethanol_MW;
double One_phenylethanol_PC_art;
double One_phenylethanol_PC_fat;
double One_phenylethanol_PC_liv;
double One_phenylethanol_PC_wp;
double One_phenylethanol_PC_pp;
double Ethylbenzene_J0_k2;
double Ethylbenzene_J0_k1;
double Ethylbenzene_J1_k;
double Ethylbenzene_J0_k1_B;
double Ethylbenzene_J0_k2_B;
double Ethylbenzene_J1_k_B;
double Xylene_MW;
double Xylene_PC_art;
double Xylene_PC_fat;
double Xylene_PC_liv;
double Xylene_PC_wp;
double Xylene_PC_pp;
double Methylbenzyl_alcohol_MW;
double Methylbenzyl_alcohol_PC_art;
double Methylbenzyl_alcohol_PC_fat;
double Methylbenzyl_alcohol_PC_liv;
double Methylbenzyl_alcohol_PC_wp;
double Methylbenzyl_alcohol_PC_pp;
double Xylene_J0_k2;
double Xylene_J0_k1;
double Xylene_J1_k;
double Xylene_J0_k1_B;
double Xylene_J0_k2_B;
double Xylene_J1_k_B;


/*----- Global Variable Map */

VMMAPSTRCT vrgvmGlo[] = {
  {"CYP2E1_Liver", (PVOID) &vrgModelVars[ID_CYP2E1_Liver], ID_STATE | ID_CYP2E1_Liver},
  {"Benzene_Q_fat", (PVOID) &vrgModelVars[ID_Benzene_Q_fat], ID_STATE | ID_Benzene_Q_fat},
  {"Benzene_Q_wp", (PVOID) &vrgModelVars[ID_Benzene_Q_wp], ID_STATE | ID_Benzene_Q_wp},
  {"Benzene_Q_pp", (PVOID) &vrgModelVars[ID_Benzene_Q_pp], ID_STATE | ID_Benzene_Q_pp},
  {"Benzene_Liver", (PVOID) &vrgModelVars[ID_Benzene_Liver], ID_STATE | ID_Benzene_Liver},
  {"Benzene_Q_exh", (PVOID) &vrgModelVars[ID_Benzene_Q_exh], ID_STATE | ID_Benzene_Q_exh},
  {"Benzene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Benzene_CYP2E1_Liver], ID_STATE | ID_Benzene_CYP2E1_Liver},
  {"Benzene_oxide_Q_fat", (PVOID) &vrgModelVars[ID_Benzene_oxide_Q_fat], ID_STATE | ID_Benzene_oxide_Q_fat},
  {"Benzene_oxide_Q_wp", (PVOID) &vrgModelVars[ID_Benzene_oxide_Q_wp], ID_STATE | ID_Benzene_oxide_Q_wp},
  {"Benzene_oxide_Q_pp", (PVOID) &vrgModelVars[ID_Benzene_oxide_Q_pp], ID_STATE | ID_Benzene_oxide_Q_pp},
  {"Benzene_oxide_Liver", (PVOID) &vrgModelVars[ID_Benzene_oxide_Liver], ID_STATE | ID_Benzene_oxide_Liver},
  {"Benzene_oxide_Q_exh", (PVOID) &vrgModelVars[ID_Benzene_oxide_Q_exh], ID_STATE | ID_Benzene_oxide_Q_exh},
  {"Benzene_CYP2B1_Liver", (PVOID) &vrgModelVars[ID_Benzene_CYP2B1_Liver], ID_STATE | ID_Benzene_CYP2B1_Liver},
  {"CYP2B1_Liver", (PVOID) &vrgModelVars[ID_CYP2B1_Liver], ID_STATE | ID_CYP2B1_Liver},
  {"Toluene_Q_fat", (PVOID) &vrgModelVars[ID_Toluene_Q_fat], ID_STATE | ID_Toluene_Q_fat},
  {"Toluene_Q_wp", (PVOID) &vrgModelVars[ID_Toluene_Q_wp], ID_STATE | ID_Toluene_Q_wp},
  {"Toluene_Q_pp", (PVOID) &vrgModelVars[ID_Toluene_Q_pp], ID_STATE | ID_Toluene_Q_pp},
  {"Toluene_Liver", (PVOID) &vrgModelVars[ID_Toluene_Liver], ID_STATE | ID_Toluene_Liver},
  {"Toluene_Q_exh", (PVOID) &vrgModelVars[ID_Toluene_Q_exh], ID_STATE | ID_Toluene_Q_exh},
  {"Toluene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Toluene_CYP2E1_Liver], ID_STATE | ID_Toluene_CYP2E1_Liver},
  {"Benzyl_alcohol_Q_fat", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_Q_fat], ID_STATE | ID_Benzyl_alcohol_Q_fat},
  {"Benzyl_alcohol_Q_wp", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_Q_wp], ID_STATE | ID_Benzyl_alcohol_Q_wp},
  {"Benzyl_alcohol_Q_pp", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_Q_pp], ID_STATE | ID_Benzyl_alcohol_Q_pp},
  {"Benzyl_alcohol_Liver", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_Liver], ID_STATE | ID_Benzyl_alcohol_Liver},
  {"Benzyl_alcohol_Q_exh", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_Q_exh], ID_STATE | ID_Benzyl_alcohol_Q_exh},
  {"Toluene_CYP2B1_Liver", (PVOID) &vrgModelVars[ID_Toluene_CYP2B1_Liver], ID_STATE | ID_Toluene_CYP2B1_Liver},
  {"Ethylbenzene_Q_fat", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_fat], ID_STATE | ID_Ethylbenzene_Q_fat},
  {"Ethylbenzene_Q_wp", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_wp], ID_STATE | ID_Ethylbenzene_Q_wp},
  {"Ethylbenzene_Q_pp", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_pp], ID_STATE | ID_Ethylbenzene_Q_pp},
  {"Ethylbenzene_Liver", (PVOID) &vrgModelVars[ID_Ethylbenzene_Liver], ID_STATE | ID_Ethylbenzene_Liver},
  {"Ethylbenzene_Q_exh", (PVOID) &vrgModelVars[ID_Ethylbenzene_Q_exh], ID_STATE | ID_Ethylbenzene_Q_exh},
  {"Ethylbenzene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Ethylbenzene_CYP2E1_Liver], ID_STATE | ID_Ethylbenzene_CYP2E1_Liver},
  {"One_phenylethanol_Q_fat", (PVOID) &vrgModelVars[ID_One_phenylethanol_Q_fat], ID_STATE | ID_One_phenylethanol_Q_fat},
  {"One_phenylethanol_Q_wp", (PVOID) &vrgModelVars[ID_One_phenylethanol_Q_wp], ID_STATE | ID_One_phenylethanol_Q_wp},
  {"One_phenylethanol_Q_pp", (PVOID) &vrgModelVars[ID_One_phenylethanol_Q_pp], ID_STATE | ID_One_phenylethanol_Q_pp},
  {"One_phenylethanol_Liver", (PVOID) &vrgModelVars[ID_One_phenylethanol_Liver], ID_STATE | ID_One_phenylethanol_Liver},
  {"One_phenylethanol_Q_exh", (PVOID) &vrgModelVars[ID_One_phenylethanol_Q_exh], ID_STATE | ID_One_phenylethanol_Q_exh},
  {"Ethylbenzene_CYP2B1_Liver", (PVOID) &vrgModelVars[ID_Ethylbenzene_CYP2B1_Liver], ID_STATE | ID_Ethylbenzene_CYP2B1_Liver},
  {"Xylene_Q_fat", (PVOID) &vrgModelVars[ID_Xylene_Q_fat], ID_STATE | ID_Xylene_Q_fat},
  {"Xylene_Q_wp", (PVOID) &vrgModelVars[ID_Xylene_Q_wp], ID_STATE | ID_Xylene_Q_wp},
  {"Xylene_Q_pp", (PVOID) &vrgModelVars[ID_Xylene_Q_pp], ID_STATE | ID_Xylene_Q_pp},
  {"Xylene_Liver", (PVOID) &vrgModelVars[ID_Xylene_Liver], ID_STATE | ID_Xylene_Liver},
  {"Xylene_Q_exh", (PVOID) &vrgModelVars[ID_Xylene_Q_exh], ID_STATE | ID_Xylene_Q_exh},
  {"Xylene_CYP2E1_Liver", (PVOID) &vrgModelVars[ID_Xylene_CYP2E1_Liver], ID_STATE | ID_Xylene_CYP2E1_Liver},
  {"Methylbenzyl_alcohol_Q_fat", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_Q_fat], ID_STATE | ID_Methylbenzyl_alcohol_Q_fat},
  {"Methylbenzyl_alcohol_Q_wp", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_Q_wp], ID_STATE | ID_Methylbenzyl_alcohol_Q_wp},
  {"Methylbenzyl_alcohol_Q_pp", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_Q_pp], ID_STATE | ID_Methylbenzyl_alcohol_Q_pp},
  {"Methylbenzyl_alcohol_Liver", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_Liver], ID_STATE | ID_Methylbenzyl_alcohol_Liver},
  {"Methylbenzyl_alcohol_Q_exh", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_Q_exh], ID_STATE | ID_Methylbenzyl_alcohol_Q_exh},
  {"Xylene_CYP2B1_Liver", (PVOID) &vrgModelVars[ID_Xylene_CYP2B1_Liver], ID_STATE | ID_Xylene_CYP2B1_Liver},
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
  {"Benzene_oxide_C_liv", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_liv], ID_OUTPUT | ID_Benzene_oxide_C_liv},
  {"Benzene_oxide_C_fat", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_fat], ID_OUTPUT | ID_Benzene_oxide_C_fat},
  {"Benzene_oxide_C_wp", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_wp], ID_OUTPUT | ID_Benzene_oxide_C_wp},
  {"Benzene_oxide_C_pp", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_pp], ID_OUTPUT | ID_Benzene_oxide_C_pp},
  {"Benzene_oxide_C_alv", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_alv], ID_OUTPUT | ID_Benzene_oxide_C_alv},
  {"Benzene_oxide_C_exh", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_exh], ID_OUTPUT | ID_Benzene_oxide_C_exh},
  {"Benzene_oxide_C_ven", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_ven], ID_OUTPUT | ID_Benzene_oxide_C_ven},
  {"Benzene_oxide_C_ven_MGL", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_ven_MGL], ID_OUTPUT | ID_Benzene_oxide_C_ven_MGL},
  {"Benzene_oxide_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Benzene_oxide_C_ven_MGL_wn], ID_OUTPUT | ID_Benzene_oxide_C_ven_MGL_wn},
  {"Toluene_C_liv", (PVOID) &vrgModelVars[ID_Toluene_C_liv], ID_OUTPUT | ID_Toluene_C_liv},
  {"Toluene_C_fat", (PVOID) &vrgModelVars[ID_Toluene_C_fat], ID_OUTPUT | ID_Toluene_C_fat},
  {"Toluene_C_wp", (PVOID) &vrgModelVars[ID_Toluene_C_wp], ID_OUTPUT | ID_Toluene_C_wp},
  {"Toluene_C_pp", (PVOID) &vrgModelVars[ID_Toluene_C_pp], ID_OUTPUT | ID_Toluene_C_pp},
  {"Toluene_C_alv", (PVOID) &vrgModelVars[ID_Toluene_C_alv], ID_OUTPUT | ID_Toluene_C_alv},
  {"Toluene_C_exh", (PVOID) &vrgModelVars[ID_Toluene_C_exh], ID_OUTPUT | ID_Toluene_C_exh},
  {"Toluene_C_ven", (PVOID) &vrgModelVars[ID_Toluene_C_ven], ID_OUTPUT | ID_Toluene_C_ven},
  {"Toluene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Toluene_C_ven_MGL], ID_OUTPUT | ID_Toluene_C_ven_MGL},
  {"Toluene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Toluene_C_ven_MGL_wn], ID_OUTPUT | ID_Toluene_C_ven_MGL_wn},
  {"Benzyl_alcohol_C_liv", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_liv], ID_OUTPUT | ID_Benzyl_alcohol_C_liv},
  {"Benzyl_alcohol_C_fat", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_fat], ID_OUTPUT | ID_Benzyl_alcohol_C_fat},
  {"Benzyl_alcohol_C_wp", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_wp], ID_OUTPUT | ID_Benzyl_alcohol_C_wp},
  {"Benzyl_alcohol_C_pp", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_pp], ID_OUTPUT | ID_Benzyl_alcohol_C_pp},
  {"Benzyl_alcohol_C_alv", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_alv], ID_OUTPUT | ID_Benzyl_alcohol_C_alv},
  {"Benzyl_alcohol_C_exh", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_exh], ID_OUTPUT | ID_Benzyl_alcohol_C_exh},
  {"Benzyl_alcohol_C_ven", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_ven], ID_OUTPUT | ID_Benzyl_alcohol_C_ven},
  {"Benzyl_alcohol_C_ven_MGL", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_ven_MGL], ID_OUTPUT | ID_Benzyl_alcohol_C_ven_MGL},
  {"Benzyl_alcohol_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Benzyl_alcohol_C_ven_MGL_wn], ID_OUTPUT | ID_Benzyl_alcohol_C_ven_MGL_wn},
  {"Ethylbenzene_C_liv", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_liv], ID_OUTPUT | ID_Ethylbenzene_C_liv},
  {"Ethylbenzene_C_fat", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_fat], ID_OUTPUT | ID_Ethylbenzene_C_fat},
  {"Ethylbenzene_C_wp", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_wp], ID_OUTPUT | ID_Ethylbenzene_C_wp},
  {"Ethylbenzene_C_pp", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_pp], ID_OUTPUT | ID_Ethylbenzene_C_pp},
  {"Ethylbenzene_C_alv", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_alv], ID_OUTPUT | ID_Ethylbenzene_C_alv},
  {"Ethylbenzene_C_exh", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_exh], ID_OUTPUT | ID_Ethylbenzene_C_exh},
  {"Ethylbenzene_C_ven", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven], ID_OUTPUT | ID_Ethylbenzene_C_ven},
  {"Ethylbenzene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven_MGL], ID_OUTPUT | ID_Ethylbenzene_C_ven_MGL},
  {"Ethylbenzene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Ethylbenzene_C_ven_MGL_wn], ID_OUTPUT | ID_Ethylbenzene_C_ven_MGL_wn},
  {"One_phenylethanol_C_liv", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_liv], ID_OUTPUT | ID_One_phenylethanol_C_liv},
  {"One_phenylethanol_C_fat", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_fat], ID_OUTPUT | ID_One_phenylethanol_C_fat},
  {"One_phenylethanol_C_wp", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_wp], ID_OUTPUT | ID_One_phenylethanol_C_wp},
  {"One_phenylethanol_C_pp", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_pp], ID_OUTPUT | ID_One_phenylethanol_C_pp},
  {"One_phenylethanol_C_alv", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_alv], ID_OUTPUT | ID_One_phenylethanol_C_alv},
  {"One_phenylethanol_C_exh", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_exh], ID_OUTPUT | ID_One_phenylethanol_C_exh},
  {"One_phenylethanol_C_ven", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_ven], ID_OUTPUT | ID_One_phenylethanol_C_ven},
  {"One_phenylethanol_C_ven_MGL", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_ven_MGL], ID_OUTPUT | ID_One_phenylethanol_C_ven_MGL},
  {"One_phenylethanol_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_One_phenylethanol_C_ven_MGL_wn], ID_OUTPUT | ID_One_phenylethanol_C_ven_MGL_wn},
  {"Xylene_C_liv", (PVOID) &vrgModelVars[ID_Xylene_C_liv], ID_OUTPUT | ID_Xylene_C_liv},
  {"Xylene_C_fat", (PVOID) &vrgModelVars[ID_Xylene_C_fat], ID_OUTPUT | ID_Xylene_C_fat},
  {"Xylene_C_wp", (PVOID) &vrgModelVars[ID_Xylene_C_wp], ID_OUTPUT | ID_Xylene_C_wp},
  {"Xylene_C_pp", (PVOID) &vrgModelVars[ID_Xylene_C_pp], ID_OUTPUT | ID_Xylene_C_pp},
  {"Xylene_C_alv", (PVOID) &vrgModelVars[ID_Xylene_C_alv], ID_OUTPUT | ID_Xylene_C_alv},
  {"Xylene_C_exh", (PVOID) &vrgModelVars[ID_Xylene_C_exh], ID_OUTPUT | ID_Xylene_C_exh},
  {"Xylene_C_ven", (PVOID) &vrgModelVars[ID_Xylene_C_ven], ID_OUTPUT | ID_Xylene_C_ven},
  {"Xylene_C_ven_MGL", (PVOID) &vrgModelVars[ID_Xylene_C_ven_MGL], ID_OUTPUT | ID_Xylene_C_ven_MGL},
  {"Xylene_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Xylene_C_ven_MGL_wn], ID_OUTPUT | ID_Xylene_C_ven_MGL_wn},
  {"Methylbenzyl_alcohol_C_liv", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_liv], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_liv},
  {"Methylbenzyl_alcohol_C_fat", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_fat], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_fat},
  {"Methylbenzyl_alcohol_C_wp", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_wp], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_wp},
  {"Methylbenzyl_alcohol_C_pp", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_pp], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_pp},
  {"Methylbenzyl_alcohol_C_alv", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_alv], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_alv},
  {"Methylbenzyl_alcohol_C_exh", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_exh], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_exh},
  {"Methylbenzyl_alcohol_C_ven", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_ven], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_ven},
  {"Methylbenzyl_alcohol_C_ven_MGL", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_ven_MGL},
  {"Methylbenzyl_alcohol_C_ven_MGL_wn", (PVOID) &vrgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL_wn], ID_OUTPUT | ID_Methylbenzyl_alcohol_C_ven_MGL_wn},
  {"Benzene_C_inh", (PVOID) &vrgInputs[ID_Benzene_C_inh], ID_INPUT | ID_Benzene_C_inh},
  {"Benzene_Q_ing", (PVOID) &vrgInputs[ID_Benzene_Q_ing], ID_INPUT | ID_Benzene_Q_ing},
  {"Benzene_oxide_C_inh", (PVOID) &vrgInputs[ID_Benzene_oxide_C_inh], ID_INPUT | ID_Benzene_oxide_C_inh},
  {"Benzene_oxide_Q_ing", (PVOID) &vrgInputs[ID_Benzene_oxide_Q_ing], ID_INPUT | ID_Benzene_oxide_Q_ing},
  {"Toluene_C_inh", (PVOID) &vrgInputs[ID_Toluene_C_inh], ID_INPUT | ID_Toluene_C_inh},
  {"Toluene_Q_ing", (PVOID) &vrgInputs[ID_Toluene_Q_ing], ID_INPUT | ID_Toluene_Q_ing},
  {"Benzyl_alcohol_C_inh", (PVOID) &vrgInputs[ID_Benzyl_alcohol_C_inh], ID_INPUT | ID_Benzyl_alcohol_C_inh},
  {"Benzyl_alcohol_Q_ing", (PVOID) &vrgInputs[ID_Benzyl_alcohol_Q_ing], ID_INPUT | ID_Benzyl_alcohol_Q_ing},
  {"Ethylbenzene_C_inh", (PVOID) &vrgInputs[ID_Ethylbenzene_C_inh], ID_INPUT | ID_Ethylbenzene_C_inh},
  {"Ethylbenzene_Q_ing", (PVOID) &vrgInputs[ID_Ethylbenzene_Q_ing], ID_INPUT | ID_Ethylbenzene_Q_ing},
  {"One_phenylethanol_C_inh", (PVOID) &vrgInputs[ID_One_phenylethanol_C_inh], ID_INPUT | ID_One_phenylethanol_C_inh},
  {"One_phenylethanol_Q_ing", (PVOID) &vrgInputs[ID_One_phenylethanol_Q_ing], ID_INPUT | ID_One_phenylethanol_Q_ing},
  {"Xylene_C_inh", (PVOID) &vrgInputs[ID_Xylene_C_inh], ID_INPUT | ID_Xylene_C_inh},
  {"Xylene_Q_ing", (PVOID) &vrgInputs[ID_Xylene_Q_ing], ID_INPUT | ID_Xylene_Q_ing},
  {"Methylbenzyl_alcohol_C_inh", (PVOID) &vrgInputs[ID_Methylbenzyl_alcohol_C_inh], ID_INPUT | ID_Methylbenzyl_alcohol_C_inh},
  {"Methylbenzyl_alcohol_Q_ing", (PVOID) &vrgInputs[ID_Methylbenzyl_alcohol_Q_ing], ID_INPUT | ID_Methylbenzyl_alcohol_Q_ing},
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
  {"Benzene_oxide_MW", (PVOID) &Benzene_oxide_MW, ID_PARM | ID_Benzene_oxide_MW},
  {"Benzene_oxide_PC_art", (PVOID) &Benzene_oxide_PC_art, ID_PARM | ID_Benzene_oxide_PC_art},
  {"Benzene_oxide_PC_fat", (PVOID) &Benzene_oxide_PC_fat, ID_PARM | ID_Benzene_oxide_PC_fat},
  {"Benzene_oxide_PC_liv", (PVOID) &Benzene_oxide_PC_liv, ID_PARM | ID_Benzene_oxide_PC_liv},
  {"Benzene_oxide_PC_wp", (PVOID) &Benzene_oxide_PC_wp, ID_PARM | ID_Benzene_oxide_PC_wp},
  {"Benzene_oxide_PC_pp", (PVOID) &Benzene_oxide_PC_pp, ID_PARM | ID_Benzene_oxide_PC_pp},
  {"Benzene_J0_k2", (PVOID) &Benzene_J0_k2, ID_PARM | ID_Benzene_J0_k2},
  {"Benzene_J0_k1", (PVOID) &Benzene_J0_k1, ID_PARM | ID_Benzene_J0_k1},
  {"Benzene_J1_k", (PVOID) &Benzene_J1_k, ID_PARM | ID_Benzene_J1_k},
  {"Benzene_J0_k1_B", (PVOID) &Benzene_J0_k1_B, ID_PARM | ID_Benzene_J0_k1_B},
  {"Benzene_J0_k2_B", (PVOID) &Benzene_J0_k2_B, ID_PARM | ID_Benzene_J0_k2_B},
  {"Benzene_J1_k_B", (PVOID) &Benzene_J1_k_B, ID_PARM | ID_Benzene_J1_k_B},
  {"Toluene_MW", (PVOID) &Toluene_MW, ID_PARM | ID_Toluene_MW},
  {"Toluene_PC_art", (PVOID) &Toluene_PC_art, ID_PARM | ID_Toluene_PC_art},
  {"Toluene_PC_fat", (PVOID) &Toluene_PC_fat, ID_PARM | ID_Toluene_PC_fat},
  {"Toluene_PC_liv", (PVOID) &Toluene_PC_liv, ID_PARM | ID_Toluene_PC_liv},
  {"Toluene_PC_wp", (PVOID) &Toluene_PC_wp, ID_PARM | ID_Toluene_PC_wp},
  {"Toluene_PC_pp", (PVOID) &Toluene_PC_pp, ID_PARM | ID_Toluene_PC_pp},
  {"Benzyl_alcohol_MW", (PVOID) &Benzyl_alcohol_MW, ID_PARM | ID_Benzyl_alcohol_MW},
  {"Benzyl_alcohol_PC_art", (PVOID) &Benzyl_alcohol_PC_art, ID_PARM | ID_Benzyl_alcohol_PC_art},
  {"Benzyl_alcohol_PC_fat", (PVOID) &Benzyl_alcohol_PC_fat, ID_PARM | ID_Benzyl_alcohol_PC_fat},
  {"Benzyl_alcohol_PC_liv", (PVOID) &Benzyl_alcohol_PC_liv, ID_PARM | ID_Benzyl_alcohol_PC_liv},
  {"Benzyl_alcohol_PC_wp", (PVOID) &Benzyl_alcohol_PC_wp, ID_PARM | ID_Benzyl_alcohol_PC_wp},
  {"Benzyl_alcohol_PC_pp", (PVOID) &Benzyl_alcohol_PC_pp, ID_PARM | ID_Benzyl_alcohol_PC_pp},
  {"Toluene_J0_k2", (PVOID) &Toluene_J0_k2, ID_PARM | ID_Toluene_J0_k2},
  {"Toluene_J0_k1", (PVOID) &Toluene_J0_k1, ID_PARM | ID_Toluene_J0_k1},
  {"Toluene_J1_k", (PVOID) &Toluene_J1_k, ID_PARM | ID_Toluene_J1_k},
  {"Toluene_J0_k1_B", (PVOID) &Toluene_J0_k1_B, ID_PARM | ID_Toluene_J0_k1_B},
  {"Toluene_J0_k2_B", (PVOID) &Toluene_J0_k2_B, ID_PARM | ID_Toluene_J0_k2_B},
  {"Toluene_J1_k_B", (PVOID) &Toluene_J1_k_B, ID_PARM | ID_Toluene_J1_k_B},
  {"Ethylbenzene_MW", (PVOID) &Ethylbenzene_MW, ID_PARM | ID_Ethylbenzene_MW},
  {"Ethylbenzene_PC_art", (PVOID) &Ethylbenzene_PC_art, ID_PARM | ID_Ethylbenzene_PC_art},
  {"Ethylbenzene_PC_fat", (PVOID) &Ethylbenzene_PC_fat, ID_PARM | ID_Ethylbenzene_PC_fat},
  {"Ethylbenzene_PC_liv", (PVOID) &Ethylbenzene_PC_liv, ID_PARM | ID_Ethylbenzene_PC_liv},
  {"Ethylbenzene_PC_wp", (PVOID) &Ethylbenzene_PC_wp, ID_PARM | ID_Ethylbenzene_PC_wp},
  {"Ethylbenzene_PC_pp", (PVOID) &Ethylbenzene_PC_pp, ID_PARM | ID_Ethylbenzene_PC_pp},
  {"One_phenylethanol_MW", (PVOID) &One_phenylethanol_MW, ID_PARM | ID_One_phenylethanol_MW},
  {"One_phenylethanol_PC_art", (PVOID) &One_phenylethanol_PC_art, ID_PARM | ID_One_phenylethanol_PC_art},
  {"One_phenylethanol_PC_fat", (PVOID) &One_phenylethanol_PC_fat, ID_PARM | ID_One_phenylethanol_PC_fat},
  {"One_phenylethanol_PC_liv", (PVOID) &One_phenylethanol_PC_liv, ID_PARM | ID_One_phenylethanol_PC_liv},
  {"One_phenylethanol_PC_wp", (PVOID) &One_phenylethanol_PC_wp, ID_PARM | ID_One_phenylethanol_PC_wp},
  {"One_phenylethanol_PC_pp", (PVOID) &One_phenylethanol_PC_pp, ID_PARM | ID_One_phenylethanol_PC_pp},
  {"Ethylbenzene_J0_k2", (PVOID) &Ethylbenzene_J0_k2, ID_PARM | ID_Ethylbenzene_J0_k2},
  {"Ethylbenzene_J0_k1", (PVOID) &Ethylbenzene_J0_k1, ID_PARM | ID_Ethylbenzene_J0_k1},
  {"Ethylbenzene_J1_k", (PVOID) &Ethylbenzene_J1_k, ID_PARM | ID_Ethylbenzene_J1_k},
  {"Ethylbenzene_J0_k1_B", (PVOID) &Ethylbenzene_J0_k1_B, ID_PARM | ID_Ethylbenzene_J0_k1_B},
  {"Ethylbenzene_J0_k2_B", (PVOID) &Ethylbenzene_J0_k2_B, ID_PARM | ID_Ethylbenzene_J0_k2_B},
  {"Ethylbenzene_J1_k_B", (PVOID) &Ethylbenzene_J1_k_B, ID_PARM | ID_Ethylbenzene_J1_k_B},
  {"Xylene_MW", (PVOID) &Xylene_MW, ID_PARM | ID_Xylene_MW},
  {"Xylene_PC_art", (PVOID) &Xylene_PC_art, ID_PARM | ID_Xylene_PC_art},
  {"Xylene_PC_fat", (PVOID) &Xylene_PC_fat, ID_PARM | ID_Xylene_PC_fat},
  {"Xylene_PC_liv", (PVOID) &Xylene_PC_liv, ID_PARM | ID_Xylene_PC_liv},
  {"Xylene_PC_wp", (PVOID) &Xylene_PC_wp, ID_PARM | ID_Xylene_PC_wp},
  {"Xylene_PC_pp", (PVOID) &Xylene_PC_pp, ID_PARM | ID_Xylene_PC_pp},
  {"Methylbenzyl_alcohol_MW", (PVOID) &Methylbenzyl_alcohol_MW, ID_PARM | ID_Methylbenzyl_alcohol_MW},
  {"Methylbenzyl_alcohol_PC_art", (PVOID) &Methylbenzyl_alcohol_PC_art, ID_PARM | ID_Methylbenzyl_alcohol_PC_art},
  {"Methylbenzyl_alcohol_PC_fat", (PVOID) &Methylbenzyl_alcohol_PC_fat, ID_PARM | ID_Methylbenzyl_alcohol_PC_fat},
  {"Methylbenzyl_alcohol_PC_liv", (PVOID) &Methylbenzyl_alcohol_PC_liv, ID_PARM | ID_Methylbenzyl_alcohol_PC_liv},
  {"Methylbenzyl_alcohol_PC_wp", (PVOID) &Methylbenzyl_alcohol_PC_wp, ID_PARM | ID_Methylbenzyl_alcohol_PC_wp},
  {"Methylbenzyl_alcohol_PC_pp", (PVOID) &Methylbenzyl_alcohol_PC_pp, ID_PARM | ID_Methylbenzyl_alcohol_PC_pp},
  {"Xylene_J0_k2", (PVOID) &Xylene_J0_k2, ID_PARM | ID_Xylene_J0_k2},
  {"Xylene_J0_k1", (PVOID) &Xylene_J0_k1, ID_PARM | ID_Xylene_J0_k1},
  {"Xylene_J1_k", (PVOID) &Xylene_J1_k, ID_PARM | ID_Xylene_J1_k},
  {"Xylene_J0_k1_B", (PVOID) &Xylene_J0_k1_B, ID_PARM | ID_Xylene_J0_k1_B},
  {"Xylene_J0_k2_B", (PVOID) &Xylene_J0_k2_B, ID_PARM | ID_Xylene_J0_k2_B},
  {"Xylene_J1_k_B", (PVOID) &Xylene_J1_k_B, ID_PARM | ID_Xylene_J1_k_B},
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
  vrgModelVars[ID_Benzene_oxide_Q_fat] = 0;
  vrgModelVars[ID_Benzene_oxide_Q_wp] = 0;
  vrgModelVars[ID_Benzene_oxide_Q_pp] = 0;
  vrgModelVars[ID_Benzene_oxide_Liver] = 0;
  vrgModelVars[ID_Benzene_oxide_Q_exh] = 0;
  vrgModelVars[ID_Benzene_oxide_C_liv] = 0;
  vrgModelVars[ID_Benzene_oxide_C_fat] = 0;
  vrgModelVars[ID_Benzene_oxide_C_wp] = 0;
  vrgModelVars[ID_Benzene_oxide_C_pp] = 0;
  vrgModelVars[ID_Benzene_oxide_C_alv] = 0;
  vrgModelVars[ID_Benzene_oxide_C_exh] = 0;
  vrgModelVars[ID_Benzene_oxide_C_ven] = 0;
  vrgModelVars[ID_Benzene_oxide_C_ven_MGL] = 0;
  vrgModelVars[ID_Benzene_oxide_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzene_oxide_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzene_oxide_C_inh].bOn = FALSE;
  vrgInputs[ID_Benzene_oxide_C_inh].dMag = 0.000000;
  vrgInputs[ID_Benzene_oxide_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Benzene_oxide_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Benzene_oxide_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Benzene_oxide_C_inh].dTper = 0.000000;
  vrgInputs[ID_Benzene_oxide_C_inh].hMag = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].hT0 = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].hTexp = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].hDecay = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].hTper = 0;
  vrgInputs[ID_Benzene_oxide_C_inh].dVal = 0.0;
  vrgInputs[ID_Benzene_oxide_C_inh].nDoses = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzene_oxide_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzene_oxide_Q_ing].bOn = FALSE;
  vrgInputs[ID_Benzene_oxide_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Benzene_oxide_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Benzene_oxide_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Benzene_oxide_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Benzene_oxide_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Benzene_oxide_Q_ing].hMag = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].hT0 = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].hTexp = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].hDecay = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].hTper = 0;
  vrgInputs[ID_Benzene_oxide_Q_ing].dVal = 0.0;
  vrgInputs[ID_Benzene_oxide_Q_ing].nDoses = 0;
  Benzene_oxide_MW = 0;
  Benzene_oxide_PC_art = 0;
  Benzene_oxide_PC_fat = 0;
  Benzene_oxide_PC_liv = 0;
  Benzene_oxide_PC_wp = 0;
  Benzene_oxide_PC_pp = 0;
  vrgModelVars[ID_Benzene_CYP2B1_Liver] = 0;
  vrgModelVars[ID_CYP2B1_Liver] = 0;
  Benzene_J0_k2 = 0.1;
  Benzene_J0_k1 = 0.1;
  Benzene_J1_k = 0.1;
  Benzene_J0_k1_B = 0.1;
  Benzene_J0_k2_B = 0.1;
  Benzene_J1_k_B = 0.1;
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
  vrgModelVars[ID_Benzyl_alcohol_Q_fat] = 0;
  vrgModelVars[ID_Benzyl_alcohol_Q_wp] = 0;
  vrgModelVars[ID_Benzyl_alcohol_Q_pp] = 0;
  vrgModelVars[ID_Benzyl_alcohol_Liver] = 0;
  vrgModelVars[ID_Benzyl_alcohol_Q_exh] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_liv] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_fat] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_wp] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_pp] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_alv] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_exh] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_ven] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_ven_MGL] = 0;
  vrgModelVars[ID_Benzyl_alcohol_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].bOn = FALSE;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dMag = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dTper = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_C_inh].hMag = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].hT0 = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].hTexp = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].hDecay = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].hTper = 0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].dVal = 0.0;
  vrgInputs[ID_Benzyl_alcohol_C_inh].nDoses = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].bOn = FALSE;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].hMag = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].hT0 = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].hTexp = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].hDecay = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].hTper = 0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].dVal = 0.0;
  vrgInputs[ID_Benzyl_alcohol_Q_ing].nDoses = 0;
  Benzyl_alcohol_MW = 0;
  Benzyl_alcohol_PC_art = 0;
  Benzyl_alcohol_PC_fat = 0;
  Benzyl_alcohol_PC_liv = 0;
  Benzyl_alcohol_PC_wp = 0;
  Benzyl_alcohol_PC_pp = 0;
  vrgModelVars[ID_Toluene_CYP2B1_Liver] = 0;
  Toluene_J0_k2 = 0.1;
  Toluene_J0_k1 = 0.1;
  Toluene_J1_k = 0.1;
  Toluene_J0_k1_B = 0.1;
  Toluene_J0_k2_B = 0.1;
  Toluene_J1_k_B = 0.1;
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
  vrgModelVars[ID_One_phenylethanol_Q_fat] = 0;
  vrgModelVars[ID_One_phenylethanol_Q_wp] = 0;
  vrgModelVars[ID_One_phenylethanol_Q_pp] = 0;
  vrgModelVars[ID_One_phenylethanol_Liver] = 0;
  vrgModelVars[ID_One_phenylethanol_Q_exh] = 0;
  vrgModelVars[ID_One_phenylethanol_C_liv] = 0;
  vrgModelVars[ID_One_phenylethanol_C_fat] = 0;
  vrgModelVars[ID_One_phenylethanol_C_wp] = 0;
  vrgModelVars[ID_One_phenylethanol_C_pp] = 0;
  vrgModelVars[ID_One_phenylethanol_C_alv] = 0;
  vrgModelVars[ID_One_phenylethanol_C_exh] = 0;
  vrgModelVars[ID_One_phenylethanol_C_ven] = 0;
  vrgModelVars[ID_One_phenylethanol_C_ven_MGL] = 0;
  vrgModelVars[ID_One_phenylethanol_C_ven_MGL_wn] = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_One_phenylethanol_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_One_phenylethanol_C_inh].bOn = FALSE;
  vrgInputs[ID_One_phenylethanol_C_inh].dMag = 0.000000;
  vrgInputs[ID_One_phenylethanol_C_inh].dT0 = 0.000000;
  vrgInputs[ID_One_phenylethanol_C_inh].dTexp = 0.000000;
  vrgInputs[ID_One_phenylethanol_C_inh].dDecay = 0.000000;
  vrgInputs[ID_One_phenylethanol_C_inh].dTper = 0.000000;
  vrgInputs[ID_One_phenylethanol_C_inh].hMag = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].hT0 = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].hTexp = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].hDecay = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].hTper = 0;
  vrgInputs[ID_One_phenylethanol_C_inh].dVal = 0.0;
  vrgInputs[ID_One_phenylethanol_C_inh].nDoses = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_One_phenylethanol_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_One_phenylethanol_Q_ing].bOn = FALSE;
  vrgInputs[ID_One_phenylethanol_Q_ing].dMag = 0.000000;
  vrgInputs[ID_One_phenylethanol_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_One_phenylethanol_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_One_phenylethanol_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_One_phenylethanol_Q_ing].dTper = 0.000000;
  vrgInputs[ID_One_phenylethanol_Q_ing].hMag = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].hT0 = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].hTexp = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].hDecay = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].hTper = 0;
  vrgInputs[ID_One_phenylethanol_Q_ing].dVal = 0.0;
  vrgInputs[ID_One_phenylethanol_Q_ing].nDoses = 0;
  One_phenylethanol_MW = 0;
  One_phenylethanol_PC_art = 0;
  One_phenylethanol_PC_fat = 0;
  One_phenylethanol_PC_liv = 0;
  One_phenylethanol_PC_wp = 0;
  One_phenylethanol_PC_pp = 0;
  vrgModelVars[ID_Ethylbenzene_CYP2B1_Liver] = 0;
  Ethylbenzene_J0_k2 = 0.1;
  Ethylbenzene_J0_k1 = 0.1;
  Ethylbenzene_J1_k = 0.1;
  Ethylbenzene_J0_k1_B = 0.1;
  Ethylbenzene_J0_k2_B = 0.1;
  Ethylbenzene_J1_k_B = 0.1;
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
  vrgModelVars[ID_Methylbenzyl_alcohol_Q_fat] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_Q_wp] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_Q_pp] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_Liver] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_Q_exh] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_liv] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_fat] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_wp] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_pp] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_alv] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_exh] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_ven] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL] = 0;
  vrgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL_wn] = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].iType = IFN_CONSTANT;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dTStartPeriod = 0.0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].bOn = FALSE;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dMag = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dT0 = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dTexp = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dDecay = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dTper = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].hMag = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].hT0 = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].hTexp = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].hDecay = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].hTper = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dVal = 0.0;
  vrgInputs[ID_Methylbenzyl_alcohol_C_inh].nDoses = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].iType = IFN_CONSTANT;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dTStartPeriod = 0.0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].bOn = FALSE;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dMag = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dT0 = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dTexp = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dDecay = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dTper = 0.000000;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].hMag = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].hT0 = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].hTexp = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].hDecay = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].hTper = 0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dVal = 0.0;
  vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].nDoses = 0;
  Methylbenzyl_alcohol_MW = 0;
  Methylbenzyl_alcohol_PC_art = 0;
  Methylbenzyl_alcohol_PC_fat = 0;
  Methylbenzyl_alcohol_PC_liv = 0;
  Methylbenzyl_alcohol_PC_wp = 0;
  Methylbenzyl_alcohol_PC_pp = 0;
  vrgModelVars[ID_Xylene_CYP2B1_Liver] = 0;
  Xylene_J0_k2 = 0.1;
  Xylene_J0_k1 = 0.1;
  Xylene_J1_k = 0.1;
  Xylene_J0_k1_B = 0.1;
  Xylene_J0_k2_B = 0.1;
  Xylene_J1_k_B = 0.1;

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
  /* local */ double Benzene_oxide_Cout_fat;
  /* local */ double Benzene_oxide_Cout_wp;
  /* local */ double Benzene_oxide_Cout_pp;
  /* local */ double Benzene_oxide_Cout_liv;
  /* local */ double Benzene_oxide_dQ_ven;
  /* local */ double Benzene_oxide_C_art;
  /* local */ double Benzene_J0;
  /* local */ double Benzene_J1;
  /* local */ double Benzene_J2;
  /* local */ double Benzene_J1_B;
  /* local */ double Benzene_J0_B;
  /* local */ double Benzene_J2_B;
  /* local */ double Toluene_Cout_fat;
  /* local */ double Toluene_Cout_wp;
  /* local */ double Toluene_Cout_pp;
  /* local */ double Toluene_Cout_liv;
  /* local */ double Toluene_dQ_ven;
  /* local */ double Toluene_C_art;
  /* local */ double Benzyl_alcohol_Cout_fat;
  /* local */ double Benzyl_alcohol_Cout_wp;
  /* local */ double Benzyl_alcohol_Cout_pp;
  /* local */ double Benzyl_alcohol_Cout_liv;
  /* local */ double Benzyl_alcohol_dQ_ven;
  /* local */ double Benzyl_alcohol_C_art;
  /* local */ double Toluene_J0;
  /* local */ double Toluene_J1;
  /* local */ double Toluene_J2;
  /* local */ double Toluene_J1_B;
  /* local */ double Toluene_J0_B;
  /* local */ double Toluene_J2_B;
  /* local */ double Ethylbenzene_Cout_fat;
  /* local */ double Ethylbenzene_Cout_wp;
  /* local */ double Ethylbenzene_Cout_pp;
  /* local */ double Ethylbenzene_Cout_liv;
  /* local */ double Ethylbenzene_dQ_ven;
  /* local */ double Ethylbenzene_C_art;
  /* local */ double One_phenylethanol_Cout_fat;
  /* local */ double One_phenylethanol_Cout_wp;
  /* local */ double One_phenylethanol_Cout_pp;
  /* local */ double One_phenylethanol_Cout_liv;
  /* local */ double One_phenylethanol_dQ_ven;
  /* local */ double One_phenylethanol_C_art;
  /* local */ double Ethylbenzene_J0;
  /* local */ double Ethylbenzene_J1;
  /* local */ double Ethylbenzene_J2;
  /* local */ double Ethylbenzene_J1_B;
  /* local */ double Ethylbenzene_J0_B;
  /* local */ double Ethylbenzene_J2_B;
  /* local */ double Xylene_Cout_fat;
  /* local */ double Xylene_Cout_wp;
  /* local */ double Xylene_Cout_pp;
  /* local */ double Xylene_Cout_liv;
  /* local */ double Xylene_dQ_ven;
  /* local */ double Xylene_C_art;
  /* local */ double Methylbenzyl_alcohol_Cout_fat;
  /* local */ double Methylbenzyl_alcohol_Cout_wp;
  /* local */ double Methylbenzyl_alcohol_Cout_pp;
  /* local */ double Methylbenzyl_alcohol_Cout_liv;
  /* local */ double Methylbenzyl_alcohol_dQ_ven;
  /* local */ double Methylbenzyl_alcohol_C_art;
  /* local */ double Xylene_J0;
  /* local */ double Xylene_J1;
  /* local */ double Xylene_J2;
  /* local */ double Xylene_J1_B;
  /* local */ double Xylene_J0_B;
  /* local */ double Xylene_J2_B;

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

  Benzene_oxide_Cout_fat = rgModelVars[ID_Benzene_oxide_Q_fat] / ( V_fat * Benzene_oxide_PC_fat ) ;

  Benzene_oxide_Cout_wp = rgModelVars[ID_Benzene_oxide_Q_wp] / ( V_wp * Benzene_oxide_PC_wp ) ;

  Benzene_oxide_Cout_pp = rgModelVars[ID_Benzene_oxide_Q_pp] / ( V_pp * Benzene_oxide_PC_pp ) ;

  Benzene_oxide_Cout_liv = rgModelVars[ID_Benzene_oxide_Liver] / ( V_liv * Benzene_oxide_PC_liv ) ;

  Benzene_oxide_dQ_ven = Flow_fat * Benzene_oxide_Cout_fat + Flow_wp * Benzene_oxide_Cout_wp + Flow_pp * Benzene_oxide_Cout_pp + Flow_liv * Benzene_oxide_Cout_liv ;

  rgModelVars[ID_Benzene_oxide_C_ven] = Benzene_oxide_dQ_ven / Flow_tot ;

  Benzene_oxide_C_art = ( Flow_alv * vrgInputs[ID_Benzene_oxide_C_inh].dVal + Benzene_oxide_dQ_ven ) / ( Flow_tot + Flow_alv / Benzene_oxide_PC_art ) ;

  rgModelVars[ID_Benzene_oxide_C_alv] = Benzene_oxide_C_art / Benzene_oxide_PC_art ;

  rgModelVars[ID_Benzene_oxide_C_exh] = 0.7 * rgModelVars[ID_Benzene_oxide_C_alv] +0.3 * vrgInputs[ID_Benzene_oxide_C_inh].dVal ;

  Benzene_J0 = Benzene_J0_k2 * rgModelVars[ID_Benzene_CYP2E1_Liver] ;

  Benzene_J1 = Benzene_J0_k1 * rgModelVars[ID_Benzene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Benzene_J2 = Benzene_J1_k * rgModelVars[ID_Benzene_CYP2E1_Liver] ;

  Benzene_J1_B = Benzene_J0_k1_B * rgModelVars[ID_Benzene_Liver] * rgModelVars[ID_CYP2B1_Liver] ;

  Benzene_J0_B = Benzene_J0_k2_B * rgModelVars[ID_Benzene_CYP2B1_Liver] ;

  Benzene_J2_B = Benzene_J1_k_B * rgModelVars[ID_Benzene_CYP2B1_Liver] ;

  Toluene_Cout_fat = rgModelVars[ID_Toluene_Q_fat] / ( V_fat * Toluene_PC_fat ) ;

  Toluene_Cout_wp = rgModelVars[ID_Toluene_Q_wp] / ( V_wp * Toluene_PC_wp ) ;

  Toluene_Cout_pp = rgModelVars[ID_Toluene_Q_pp] / ( V_pp * Toluene_PC_pp ) ;

  Toluene_Cout_liv = rgModelVars[ID_Toluene_Liver] / ( V_liv * Toluene_PC_liv ) ;

  Toluene_dQ_ven = Flow_fat * Toluene_Cout_fat + Flow_wp * Toluene_Cout_wp + Flow_pp * Toluene_Cout_pp + Flow_liv * Toluene_Cout_liv ;

  rgModelVars[ID_Toluene_C_ven] = Toluene_dQ_ven / Flow_tot ;

  Toluene_C_art = ( Flow_alv * vrgInputs[ID_Toluene_C_inh].dVal + Toluene_dQ_ven ) / ( Flow_tot + Flow_alv / Toluene_PC_art ) ;

  rgModelVars[ID_Toluene_C_alv] = Toluene_C_art / Toluene_PC_art ;

  rgModelVars[ID_Toluene_C_exh] = 0.7 * rgModelVars[ID_Toluene_C_alv] +0.3 * vrgInputs[ID_Toluene_C_inh].dVal ;

  Benzyl_alcohol_Cout_fat = rgModelVars[ID_Benzyl_alcohol_Q_fat] / ( V_fat * Benzyl_alcohol_PC_fat ) ;

  Benzyl_alcohol_Cout_wp = rgModelVars[ID_Benzyl_alcohol_Q_wp] / ( V_wp * Benzyl_alcohol_PC_wp ) ;

  Benzyl_alcohol_Cout_pp = rgModelVars[ID_Benzyl_alcohol_Q_pp] / ( V_pp * Benzyl_alcohol_PC_pp ) ;

  Benzyl_alcohol_Cout_liv = rgModelVars[ID_Benzyl_alcohol_Liver] / ( V_liv * Benzyl_alcohol_PC_liv ) ;

  Benzyl_alcohol_dQ_ven = Flow_fat * Benzyl_alcohol_Cout_fat + Flow_wp * Benzyl_alcohol_Cout_wp + Flow_pp * Benzyl_alcohol_Cout_pp + Flow_liv * Benzyl_alcohol_Cout_liv ;

  rgModelVars[ID_Benzyl_alcohol_C_ven] = Benzyl_alcohol_dQ_ven / Flow_tot ;

  Benzyl_alcohol_C_art = ( Flow_alv * vrgInputs[ID_Benzyl_alcohol_C_inh].dVal + Benzyl_alcohol_dQ_ven ) / ( Flow_tot + Flow_alv / Benzyl_alcohol_PC_art ) ;

  rgModelVars[ID_Benzyl_alcohol_C_alv] = Benzyl_alcohol_C_art / Benzyl_alcohol_PC_art ;

  rgModelVars[ID_Benzyl_alcohol_C_exh] = 0.7 * rgModelVars[ID_Benzyl_alcohol_C_alv] +0.3 * vrgInputs[ID_Benzyl_alcohol_C_inh].dVal ;

  Toluene_J0 = Toluene_J0_k2 * rgModelVars[ID_Toluene_CYP2E1_Liver] ;

  Toluene_J1 = Toluene_J0_k1 * rgModelVars[ID_Toluene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Toluene_J2 = Toluene_J1_k * rgModelVars[ID_Toluene_CYP2E1_Liver] ;

  Toluene_J1_B = Toluene_J0_k1_B * rgModelVars[ID_Toluene_Liver] * rgModelVars[ID_CYP2B1_Liver] ;

  Toluene_J0_B = Toluene_J0_k2_B * rgModelVars[ID_Toluene_CYP2B1_Liver] ;

  Toluene_J2_B = Toluene_J1_k_B * rgModelVars[ID_Toluene_CYP2B1_Liver] ;

  Ethylbenzene_Cout_fat = rgModelVars[ID_Ethylbenzene_Q_fat] / ( V_fat * Ethylbenzene_PC_fat ) ;

  Ethylbenzene_Cout_wp = rgModelVars[ID_Ethylbenzene_Q_wp] / ( V_wp * Ethylbenzene_PC_wp ) ;

  Ethylbenzene_Cout_pp = rgModelVars[ID_Ethylbenzene_Q_pp] / ( V_pp * Ethylbenzene_PC_pp ) ;

  Ethylbenzene_Cout_liv = rgModelVars[ID_Ethylbenzene_Liver] / ( V_liv * Ethylbenzene_PC_liv ) ;

  Ethylbenzene_dQ_ven = Flow_fat * Ethylbenzene_Cout_fat + Flow_wp * Ethylbenzene_Cout_wp + Flow_pp * Ethylbenzene_Cout_pp + Flow_liv * Ethylbenzene_Cout_liv ;

  rgModelVars[ID_Ethylbenzene_C_ven] = Ethylbenzene_dQ_ven / Flow_tot ;

  Ethylbenzene_C_art = ( Flow_alv * vrgInputs[ID_Ethylbenzene_C_inh].dVal + Ethylbenzene_dQ_ven ) / ( Flow_tot + Flow_alv / Ethylbenzene_PC_art ) ;

  rgModelVars[ID_Ethylbenzene_C_alv] = Ethylbenzene_C_art / Ethylbenzene_PC_art ;

  rgModelVars[ID_Ethylbenzene_C_exh] = 0.7 * rgModelVars[ID_Ethylbenzene_C_alv] +0.3 * vrgInputs[ID_Ethylbenzene_C_inh].dVal ;

  One_phenylethanol_Cout_fat = rgModelVars[ID_One_phenylethanol_Q_fat] / ( V_fat * One_phenylethanol_PC_fat ) ;

  One_phenylethanol_Cout_wp = rgModelVars[ID_One_phenylethanol_Q_wp] / ( V_wp * One_phenylethanol_PC_wp ) ;

  One_phenylethanol_Cout_pp = rgModelVars[ID_One_phenylethanol_Q_pp] / ( V_pp * One_phenylethanol_PC_pp ) ;

  One_phenylethanol_Cout_liv = rgModelVars[ID_One_phenylethanol_Liver] / ( V_liv * One_phenylethanol_PC_liv ) ;

  One_phenylethanol_dQ_ven = Flow_fat * One_phenylethanol_Cout_fat + Flow_wp * One_phenylethanol_Cout_wp + Flow_pp * One_phenylethanol_Cout_pp + Flow_liv * One_phenylethanol_Cout_liv ;

  rgModelVars[ID_One_phenylethanol_C_ven] = One_phenylethanol_dQ_ven / Flow_tot ;

  One_phenylethanol_C_art = ( Flow_alv * vrgInputs[ID_One_phenylethanol_C_inh].dVal + One_phenylethanol_dQ_ven ) / ( Flow_tot + Flow_alv / One_phenylethanol_PC_art ) ;

  rgModelVars[ID_One_phenylethanol_C_alv] = One_phenylethanol_C_art / One_phenylethanol_PC_art ;

  rgModelVars[ID_One_phenylethanol_C_exh] = 0.7 * rgModelVars[ID_One_phenylethanol_C_alv] +0.3 * vrgInputs[ID_One_phenylethanol_C_inh].dVal ;

  Ethylbenzene_J0 = Ethylbenzene_J0_k2 * rgModelVars[ID_Ethylbenzene_CYP2E1_Liver] ;

  Ethylbenzene_J1 = Ethylbenzene_J0_k1 * rgModelVars[ID_Ethylbenzene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Ethylbenzene_J2 = Ethylbenzene_J1_k * rgModelVars[ID_Ethylbenzene_CYP2E1_Liver] ;

  Ethylbenzene_J1_B = Ethylbenzene_J0_k1_B * rgModelVars[ID_Ethylbenzene_Liver] * rgModelVars[ID_CYP2B1_Liver] ;

  Ethylbenzene_J0_B = Ethylbenzene_J0_k2_B * rgModelVars[ID_Ethylbenzene_CYP2B1_Liver] ;

  Ethylbenzene_J2_B = Ethylbenzene_J1_k_B * rgModelVars[ID_Ethylbenzene_CYP2B1_Liver] ;

  Xylene_Cout_fat = rgModelVars[ID_Xylene_Q_fat] / ( V_fat * Xylene_PC_fat ) ;

  Xylene_Cout_wp = rgModelVars[ID_Xylene_Q_wp] / ( V_wp * Xylene_PC_wp ) ;

  Xylene_Cout_pp = rgModelVars[ID_Xylene_Q_pp] / ( V_pp * Xylene_PC_pp ) ;

  Xylene_Cout_liv = rgModelVars[ID_Xylene_Liver] / ( V_liv * Xylene_PC_liv ) ;

  Xylene_dQ_ven = Flow_fat * Xylene_Cout_fat + Flow_wp * Xylene_Cout_wp + Flow_pp * Xylene_Cout_pp + Flow_liv * Xylene_Cout_liv ;

  rgModelVars[ID_Xylene_C_ven] = Xylene_dQ_ven / Flow_tot ;

  Xylene_C_art = ( Flow_alv * vrgInputs[ID_Xylene_C_inh].dVal + Xylene_dQ_ven ) / ( Flow_tot + Flow_alv / Xylene_PC_art ) ;

  rgModelVars[ID_Xylene_C_alv] = Xylene_C_art / Xylene_PC_art ;

  rgModelVars[ID_Xylene_C_exh] = 0.7 * rgModelVars[ID_Xylene_C_alv] +0.3 * vrgInputs[ID_Xylene_C_inh].dVal ;

  Methylbenzyl_alcohol_Cout_fat = rgModelVars[ID_Methylbenzyl_alcohol_Q_fat] / ( V_fat * Methylbenzyl_alcohol_PC_fat ) ;

  Methylbenzyl_alcohol_Cout_wp = rgModelVars[ID_Methylbenzyl_alcohol_Q_wp] / ( V_wp * Methylbenzyl_alcohol_PC_wp ) ;

  Methylbenzyl_alcohol_Cout_pp = rgModelVars[ID_Methylbenzyl_alcohol_Q_pp] / ( V_pp * Methylbenzyl_alcohol_PC_pp ) ;

  Methylbenzyl_alcohol_Cout_liv = rgModelVars[ID_Methylbenzyl_alcohol_Liver] / ( V_liv * Methylbenzyl_alcohol_PC_liv ) ;

  Methylbenzyl_alcohol_dQ_ven = Flow_fat * Methylbenzyl_alcohol_Cout_fat + Flow_wp * Methylbenzyl_alcohol_Cout_wp + Flow_pp * Methylbenzyl_alcohol_Cout_pp + Flow_liv * Methylbenzyl_alcohol_Cout_liv ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_ven] = Methylbenzyl_alcohol_dQ_ven / Flow_tot ;

  Methylbenzyl_alcohol_C_art = ( Flow_alv * vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dVal + Methylbenzyl_alcohol_dQ_ven ) / ( Flow_tot + Flow_alv / Methylbenzyl_alcohol_PC_art ) ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_alv] = Methylbenzyl_alcohol_C_art / Methylbenzyl_alcohol_PC_art ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_exh] = 0.7 * rgModelVars[ID_Methylbenzyl_alcohol_C_alv] +0.3 * vrgInputs[ID_Methylbenzyl_alcohol_C_inh].dVal ;

  Xylene_J0 = Xylene_J0_k2 * rgModelVars[ID_Xylene_CYP2E1_Liver] ;

  Xylene_J1 = Xylene_J0_k1 * rgModelVars[ID_Xylene_Liver] * rgModelVars[ID_CYP2E1_Liver] ;

  Xylene_J2 = Xylene_J1_k * rgModelVars[ID_Xylene_CYP2E1_Liver] ;

  Xylene_J1_B = Xylene_J0_k1_B * rgModelVars[ID_Xylene_Liver] * rgModelVars[ID_CYP2B1_Liver] ;

  Xylene_J0_B = Xylene_J0_k2_B * rgModelVars[ID_Xylene_CYP2B1_Liver] ;

  Xylene_J2_B = Xylene_J1_k_B * rgModelVars[ID_Xylene_CYP2B1_Liver] ;

  rgDerivs[ID_Benzene_Q_exh] = Flow_alv * rgModelVars[ID_Benzene_C_alv] ;

  rgDerivs[ID_Benzene_Q_fat] = Flow_fat * ( Benzene_C_art - Benzene_Cout_fat ) ;

  rgDerivs[ID_Benzene_Q_wp] = Flow_wp * ( Benzene_C_art - Benzene_Cout_wp ) ;

  rgDerivs[ID_Benzene_Q_pp] = Flow_pp * ( Benzene_C_art - Benzene_Cout_pp ) ;

  rgDerivs[ID_Benzene_Liver] = vrgInputs[ID_Benzene_Q_ing].dVal + Flow_liv * ( Benzene_C_art - Benzene_Cout_liv ) + Benzene_J0 - Benzene_J1 - Benzene_J1_B + Benzene_J0_B ;

  rgDerivs[ID_Benzene_oxide_Q_exh] = Flow_alv * rgModelVars[ID_Benzene_oxide_C_alv] ;

  rgDerivs[ID_Benzene_oxide_Q_fat] = Flow_fat * ( Benzene_oxide_C_art - Benzene_oxide_Cout_fat ) ;

  rgDerivs[ID_Benzene_oxide_Q_wp] = Flow_wp * ( Benzene_oxide_C_art - Benzene_oxide_Cout_wp ) ;

  rgDerivs[ID_Benzene_oxide_Q_pp] = Flow_pp * ( Benzene_oxide_C_art - Benzene_oxide_Cout_pp ) ;

  rgDerivs[ID_Benzene_oxide_Liver] = vrgInputs[ID_Benzene_oxide_Q_ing].dVal + Flow_liv * ( Benzene_oxide_C_art - Benzene_oxide_Cout_liv ) + Benzene_J2 + Benzene_J2_B ;

  rgDerivs[ID_Benzene_CYP2E1_Liver] = - Benzene_J0 + Benzene_J1 - Benzene_J2 ;

  rgDerivs[ID_CYP2E1_Liver] = + Benzene_J0 - Benzene_J1 + Benzene_J2 + Toluene_J0 - Toluene_J1 + Toluene_J2 + Ethylbenzene_J0 - Ethylbenzene_J1 + Ethylbenzene_J2 + Xylene_J0 - Xylene_J1 + Xylene_J2 ;

  rgDerivs[ID_CYP2B1_Liver] = - Benzene_J1_B + Benzene_J0_B + Benzene_J2_B - Toluene_J1_B + Toluene_J0_B + Toluene_J2_B - Ethylbenzene_J1_B + Ethylbenzene_J0_B + Ethylbenzene_J2_B - Xylene_J1_B + Xylene_J0_B + Xylene_J2_B ;

  rgDerivs[ID_Benzene_CYP2B1_Liver] = + Benzene_J1_B - Benzene_J0_B - Benzene_J2_B ;

  rgDerivs[ID_Toluene_Q_exh] = Flow_alv * rgModelVars[ID_Toluene_C_alv] ;

  rgDerivs[ID_Toluene_Q_fat] = Flow_fat * ( Toluene_C_art - Toluene_Cout_fat ) ;

  rgDerivs[ID_Toluene_Q_wp] = Flow_wp * ( Toluene_C_art - Toluene_Cout_wp ) ;

  rgDerivs[ID_Toluene_Q_pp] = Flow_pp * ( Toluene_C_art - Toluene_Cout_pp ) ;

  rgDerivs[ID_Toluene_Liver] = vrgInputs[ID_Toluene_Q_ing].dVal + Flow_liv * ( Toluene_C_art - Toluene_Cout_liv ) + Toluene_J0 - Toluene_J1 - Toluene_J1_B + Toluene_J0_B ;

  rgDerivs[ID_Benzyl_alcohol_Q_exh] = Flow_alv * rgModelVars[ID_Benzyl_alcohol_C_alv] ;

  rgDerivs[ID_Benzyl_alcohol_Q_fat] = Flow_fat * ( Benzyl_alcohol_C_art - Benzyl_alcohol_Cout_fat ) ;

  rgDerivs[ID_Benzyl_alcohol_Q_wp] = Flow_wp * ( Benzyl_alcohol_C_art - Benzyl_alcohol_Cout_wp ) ;

  rgDerivs[ID_Benzyl_alcohol_Q_pp] = Flow_pp * ( Benzyl_alcohol_C_art - Benzyl_alcohol_Cout_pp ) ;

  rgDerivs[ID_Benzyl_alcohol_Liver] = vrgInputs[ID_Benzyl_alcohol_Q_ing].dVal + Flow_liv * ( Benzyl_alcohol_C_art - Benzyl_alcohol_Cout_liv ) + Toluene_J2 + Toluene_J2_B ;

  rgDerivs[ID_Toluene_CYP2E1_Liver] = - Toluene_J0 + Toluene_J1 - Toluene_J2 ;

  rgDerivs[ID_Toluene_CYP2B1_Liver] = + Toluene_J1_B - Toluene_J0_B - Toluene_J2_B ;

  rgDerivs[ID_Ethylbenzene_Q_exh] = Flow_alv * rgModelVars[ID_Ethylbenzene_C_alv] ;

  rgDerivs[ID_Ethylbenzene_Q_fat] = Flow_fat * ( Ethylbenzene_C_art - Ethylbenzene_Cout_fat ) ;

  rgDerivs[ID_Ethylbenzene_Q_wp] = Flow_wp * ( Ethylbenzene_C_art - Ethylbenzene_Cout_wp ) ;

  rgDerivs[ID_Ethylbenzene_Q_pp] = Flow_pp * ( Ethylbenzene_C_art - Ethylbenzene_Cout_pp ) ;

  rgDerivs[ID_Ethylbenzene_Liver] = vrgInputs[ID_Ethylbenzene_Q_ing].dVal + Flow_liv * ( Ethylbenzene_C_art - Ethylbenzene_Cout_liv ) + Ethylbenzene_J0 - Ethylbenzene_J1 - Ethylbenzene_J1_B + Ethylbenzene_J0_B ;

  rgDerivs[ID_One_phenylethanol_Q_exh] = Flow_alv * rgModelVars[ID_One_phenylethanol_C_alv] ;

  rgDerivs[ID_One_phenylethanol_Q_fat] = Flow_fat * ( One_phenylethanol_C_art - One_phenylethanol_Cout_fat ) ;

  rgDerivs[ID_One_phenylethanol_Q_wp] = Flow_wp * ( One_phenylethanol_C_art - One_phenylethanol_Cout_wp ) ;

  rgDerivs[ID_One_phenylethanol_Q_pp] = Flow_pp * ( One_phenylethanol_C_art - One_phenylethanol_Cout_pp ) ;

  rgDerivs[ID_One_phenylethanol_Liver] = vrgInputs[ID_One_phenylethanol_Q_ing].dVal + Flow_liv * ( One_phenylethanol_C_art - One_phenylethanol_Cout_liv ) + Ethylbenzene_J2 + Ethylbenzene_J2_B ;

  rgDerivs[ID_Ethylbenzene_CYP2E1_Liver] = - Ethylbenzene_J0 + Ethylbenzene_J1 - Ethylbenzene_J2 ;

  rgDerivs[ID_Ethylbenzene_CYP2B1_Liver] = + Ethylbenzene_J1_B - Ethylbenzene_J0_B - Ethylbenzene_J2_B ;

  rgDerivs[ID_Xylene_Q_exh] = Flow_alv * rgModelVars[ID_Xylene_C_alv] ;

  rgDerivs[ID_Xylene_Q_fat] = Flow_fat * ( Xylene_C_art - Xylene_Cout_fat ) ;

  rgDerivs[ID_Xylene_Q_wp] = Flow_wp * ( Xylene_C_art - Xylene_Cout_wp ) ;

  rgDerivs[ID_Xylene_Q_pp] = Flow_pp * ( Xylene_C_art - Xylene_Cout_pp ) ;

  rgDerivs[ID_Xylene_Liver] = vrgInputs[ID_Xylene_Q_ing].dVal + Flow_liv * ( Xylene_C_art - Xylene_Cout_liv ) + Xylene_J0 - Xylene_J1 - Xylene_J1_B + Xylene_J0_B ;

  rgDerivs[ID_Methylbenzyl_alcohol_Q_exh] = Flow_alv * rgModelVars[ID_Methylbenzyl_alcohol_C_alv] ;

  rgDerivs[ID_Methylbenzyl_alcohol_Q_fat] = Flow_fat * ( Methylbenzyl_alcohol_C_art - Methylbenzyl_alcohol_Cout_fat ) ;

  rgDerivs[ID_Methylbenzyl_alcohol_Q_wp] = Flow_wp * ( Methylbenzyl_alcohol_C_art - Methylbenzyl_alcohol_Cout_wp ) ;

  rgDerivs[ID_Methylbenzyl_alcohol_Q_pp] = Flow_pp * ( Methylbenzyl_alcohol_C_art - Methylbenzyl_alcohol_Cout_pp ) ;

  rgDerivs[ID_Methylbenzyl_alcohol_Liver] = vrgInputs[ID_Methylbenzyl_alcohol_Q_ing].dVal + Flow_liv * ( Methylbenzyl_alcohol_C_art - Methylbenzyl_alcohol_Cout_liv ) + Xylene_J2 + Xylene_J2_B ;

  rgDerivs[ID_Xylene_CYP2E1_Liver] = - Xylene_J0 + Xylene_J1 - Xylene_J2 ;

  rgDerivs[ID_Xylene_CYP2B1_Liver] = + Xylene_J1_B - Xylene_J0_B - Xylene_J2_B ;

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

  rgModelVars[ID_Benzene_oxide_C_liv] = rgModelVars[ID_Benzene_oxide_Liver] / V_liv ;

  rgModelVars[ID_Benzene_oxide_C_fat] = rgModelVars[ID_Benzene_oxide_Q_fat] / V_fat ;

  rgModelVars[ID_Benzene_oxide_C_wp] = rgModelVars[ID_Benzene_oxide_Q_wp] / V_wp ;

  rgModelVars[ID_Benzene_oxide_C_pp] = rgModelVars[ID_Benzene_oxide_Q_pp] / V_pp ;

  rgModelVars[ID_Benzene_oxide_C_ven_MGL] = Benzene_oxide_MW * rgModelVars[ID_Benzene_oxide_C_ven] ;

  rgModelVars[ID_Benzene_oxide_C_ven_MGL_wn] = rgModelVars[ID_Benzene_oxide_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Toluene_C_liv] = rgModelVars[ID_Toluene_Liver] / V_liv ;

  rgModelVars[ID_Toluene_C_fat] = rgModelVars[ID_Toluene_Q_fat] / V_fat ;

  rgModelVars[ID_Toluene_C_wp] = rgModelVars[ID_Toluene_Q_wp] / V_wp ;

  rgModelVars[ID_Toluene_C_pp] = rgModelVars[ID_Toluene_Q_pp] / V_pp ;

  rgModelVars[ID_Toluene_C_ven_MGL] = Toluene_MW * rgModelVars[ID_Toluene_C_ven] ;

  rgModelVars[ID_Toluene_C_ven_MGL_wn] = rgModelVars[ID_Toluene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Benzyl_alcohol_C_liv] = rgModelVars[ID_Benzyl_alcohol_Liver] / V_liv ;

  rgModelVars[ID_Benzyl_alcohol_C_fat] = rgModelVars[ID_Benzyl_alcohol_Q_fat] / V_fat ;

  rgModelVars[ID_Benzyl_alcohol_C_wp] = rgModelVars[ID_Benzyl_alcohol_Q_wp] / V_wp ;

  rgModelVars[ID_Benzyl_alcohol_C_pp] = rgModelVars[ID_Benzyl_alcohol_Q_pp] / V_pp ;

  rgModelVars[ID_Benzyl_alcohol_C_ven_MGL] = Benzyl_alcohol_MW * rgModelVars[ID_Benzyl_alcohol_C_ven] ;

  rgModelVars[ID_Benzyl_alcohol_C_ven_MGL_wn] = rgModelVars[ID_Benzyl_alcohol_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Ethylbenzene_C_liv] = rgModelVars[ID_Ethylbenzene_Liver] / V_liv ;

  rgModelVars[ID_Ethylbenzene_C_fat] = rgModelVars[ID_Ethylbenzene_Q_fat] / V_fat ;

  rgModelVars[ID_Ethylbenzene_C_wp] = rgModelVars[ID_Ethylbenzene_Q_wp] / V_wp ;

  rgModelVars[ID_Ethylbenzene_C_pp] = rgModelVars[ID_Ethylbenzene_Q_pp] / V_pp ;

  rgModelVars[ID_Ethylbenzene_C_ven_MGL] = Ethylbenzene_MW * rgModelVars[ID_Ethylbenzene_C_ven] ;

  rgModelVars[ID_Ethylbenzene_C_ven_MGL_wn] = rgModelVars[ID_Ethylbenzene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_One_phenylethanol_C_liv] = rgModelVars[ID_One_phenylethanol_Liver] / V_liv ;

  rgModelVars[ID_One_phenylethanol_C_fat] = rgModelVars[ID_One_phenylethanol_Q_fat] / V_fat ;

  rgModelVars[ID_One_phenylethanol_C_wp] = rgModelVars[ID_One_phenylethanol_Q_wp] / V_wp ;

  rgModelVars[ID_One_phenylethanol_C_pp] = rgModelVars[ID_One_phenylethanol_Q_pp] / V_pp ;

  rgModelVars[ID_One_phenylethanol_C_ven_MGL] = One_phenylethanol_MW * rgModelVars[ID_One_phenylethanol_C_ven] ;

  rgModelVars[ID_One_phenylethanol_C_ven_MGL_wn] = rgModelVars[ID_One_phenylethanol_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Xylene_C_liv] = rgModelVars[ID_Xylene_Liver] / V_liv ;

  rgModelVars[ID_Xylene_C_fat] = rgModelVars[ID_Xylene_Q_fat] / V_fat ;

  rgModelVars[ID_Xylene_C_wp] = rgModelVars[ID_Xylene_Q_wp] / V_wp ;

  rgModelVars[ID_Xylene_C_pp] = rgModelVars[ID_Xylene_Q_pp] / V_pp ;

  rgModelVars[ID_Xylene_C_ven_MGL] = Xylene_MW * rgModelVars[ID_Xylene_C_ven] ;

  rgModelVars[ID_Xylene_C_ven_MGL_wn] = rgModelVars[ID_Xylene_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_liv] = rgModelVars[ID_Methylbenzyl_alcohol_Liver] / V_liv ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_fat] = rgModelVars[ID_Methylbenzyl_alcohol_Q_fat] / V_fat ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_wp] = rgModelVars[ID_Methylbenzyl_alcohol_Q_wp] / V_wp ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_pp] = rgModelVars[ID_Methylbenzyl_alcohol_Q_pp] / V_pp ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL] = Methylbenzyl_alcohol_MW * rgModelVars[ID_Methylbenzyl_alcohol_C_ven] ;

  rgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL_wn] = rgModelVars[ID_Methylbenzyl_alcohol_C_ven_MGL] * LogNormalRandom ( 1 , sigma ) ;

}  /* CalcOutputs */


