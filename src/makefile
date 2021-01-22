obj=wgrib_main.o seekgrib.o ibm2flt.o readgrib.o intpower.o cnames.o BDSunpk.o \
  flt2ieee.o wrtieee.o levels.o PDStimes.o missing.o  \
  nceptable_reanal.o nceptable_opn.o ensemble.o \
  ec_ext.o gribtable.o gds_grid.o PDS_date.o ectable_128.o \
  ectable_129.o ectable_130.o ectable_131.o ectable_132.o ectable_133.o \
  ectable_140.o ectable_150.o ectable_162.o \
  ectable_151.o ectable_160.o ectable_170.o ectable_171.o ectable_172.o \
  ectable_173.o ectable_174.o ectable_180.o ectable_190.o ectable_200.o \
  ectable_210.o ectable_211.o ectable_228.o nceptab_129.o \
  dwdtable_002.o dwdtable_201.o dwdtable_202.o dwdtable_203.o dwdtable_204.o dwdtable_205.o \
  cptectable_254.o nceptab_128.o nceptab_130.o nceptab_131.o \
  mdl_nceptab.o nceptab_133.o nceptab_140.o nceptab_141.o BDS_NValues.o


CC=cc

wgrib: $(obj)
	$(CC) -o wgrib -O2 $(obj) -lm 

.c.o:	$(*).c
	$(CC) -c -O2 $*.c
#	$(CC) -c -Wall -O2 $*.c
