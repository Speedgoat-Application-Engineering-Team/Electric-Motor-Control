###########################################################################
## Makefile generated for component 'PMSM_Plant_Model'. 
## 
## Makefile     : PMSM_Plant_Model.mk
## Generated on : Wed Mar 03 11:45:16 2021
## Final product: ./PMSM_Plant_Model_rtwlib.a
## Product type : static library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# MODELLIB                Static library target

PRODUCT_NAME              = PMSM_Plant_Model
MAKEFILE                  = PMSM_Plant_Model.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2020b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2020b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/WORKSP~1/GitHub/ELECTR~1/P-8BE5~1/Work
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../../../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = PMSM_Plant_Model_rtwlib.a
LIBSSC_SLI_SLRT_X64_OBJS  = 
LIBSSC_CORE_SLRT_X64_OBJS = 
LIBNE_SLRT_X64_OBJS       = 
LIBMC_SLRT_X64_OBJS       = 
LIBEX_SLRT_X64_OBJS       = 
LIBPM_SLRT_X64_OBJS       = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2020b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# SLREALTIME_QNX_SP_ROOT

#-----------
# MACROS
#-----------

QCC_TARGET             = gcc_ntox86_64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/target/lib -ltraceparser -lpps -lslrealtime_kernel -lslrealtime_rtps -lsocket -lboost_system -lboost_log -lpci -lopenblas

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: QNX C Compiler
CC = qcc

# Linker: QCC Linker
LD = q++

# C++ Compiler: QNX C++ Compiler
CPP = q++

# C++ Linker: QCC C++ Linker
CPP_LD = q++

# Archiver: QNX Archiver
AR = ntox86_64-gcc-ar

# Builder: GMAKE Utility
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -V$(QCC_TARGET) -g \
                       -O2 -ffast-math -fwrapv
CPPFLAGS             = -c -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++ \
                       -O2 -ffast-math -fwrapv
CPP_LDFLAGS          = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
CPP_SHAREDLIB_LDFLAGS  = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g
LDFLAGS              = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./PMSM_Plant_Model_rtwlib.a
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/slprj/slrealtime/PMSM_Plant_Model -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 -I$(START_DIR)/slprj/slrealtime/_sharedutils -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/include -I$(MATLAB_ROOT)/toolbox/slrealtime/target/kernel/dist/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSIMULINK_REAL_TIME
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=PMSM_Plant_Model -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_zc.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxy_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_il.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_all.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_exp.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_m_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_log.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_imax.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_act.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_imin.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dnf_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tduf_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_a_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxf_p.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxf.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_mode.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_f.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_duf.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_assert.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_gateway.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/slrealtime_datatype_ground.c $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model.cpp $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_cal.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = PMSM_Plant_Model_e54d855d_1_ds.o PMSM_Plant_Model_e54d855d_1_ds_zc.o PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.o PMSM_Plant_Model_e54d855d_1_ds_dxy_p.o PMSM_Plant_Model_e54d855d_1_ds_obs_il.o PMSM_Plant_Model_e54d855d_1_ds_obs_all.o PMSM_Plant_Model_e54d855d_1_ds_obs_exp.o PMSM_Plant_Model_e54d855d_1_ds_m_p.o PMSM_Plant_Model_e54d855d_1_ds_log.o PMSM_Plant_Model_e54d855d_1_ds_imax.o PMSM_Plant_Model_e54d855d_1_ds_obs_act.o PMSM_Plant_Model_e54d855d_1_ds_imin.o PMSM_Plant_Model_e54d855d_1_ds_dnf_p.o PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.o PMSM_Plant_Model_e54d855d_1_ds_tduf_p.o PMSM_Plant_Model_e54d855d_1_ds_a_p.o PMSM_Plant_Model_e54d855d_1_ds_dxf_p.o PMSM_Plant_Model_e54d855d_1_ds_dxf.o PMSM_Plant_Model_e54d855d_1_ds_mode.o PMSM_Plant_Model_e54d855d_1_ds_f.o PMSM_Plant_Model_e54d855d_1_ds_duf.o PMSM_Plant_Model_e54d855d_1_ds_assert.o PMSM_Plant_Model_e54d855d_1.o PMSM_Plant_Model_e54d855d_1_gateway.o slrealtime_datatype_ground.o PMSM_Plant_Model.o PMSM_Plant_Model_cal.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/sli/lib/win64/SSC_SL~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/core/lib/win64/SSC_CO~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/NETWOR~1/lib/win64/NE_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/math/core/lib/win64/MC_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/external/library/lib/win64/EX_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/FOUNDA~1/core/lib/win64/PM_SLR~1.A $(START_DIR)/slprj/slrealtime/_sharedutils/instrumented/rtwshared.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) $(OBJS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : ../%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : ../%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_zc.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_zc.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_dxy_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxy_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_obs_il.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_obs_all.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_obs_exp.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_m_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_m_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_log.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_imax.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_imax.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_obs_act.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_imin.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_imin.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_dnf_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dnf_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_tduf_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_tduf_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_a_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_a_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_dxf_p.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_dxf.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_dxf.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_mode.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_mode.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_f.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_f.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_duf.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_duf.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_ds_assert.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_ds_assert.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model_e54d855d_1_gateway.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_e54d855d_1_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_datatype_ground.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/slrealtime_datatype_ground.c
	$(CC) $(CFLAGS) -o $@ $<


PMSM_Plant_Model.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


PMSM_Plant_Model_cal.o : $(START_DIR)/slprj/slrealtime/PMSM_Plant_Model/PMSM_Plant_Model_cal.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


#------------------------
# BUILDABLE LIBRARIES
#------------------------

C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_slrt_x64.a : $(LIBSSC_SLI_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_slrt_x64.a : $(LIBSSC_CORE_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/NETWOR~1/lib/win64/ne_slrt_x64.a : $(LIBNE_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/math/core/lib/win64/mc_slrt_x64.a : $(LIBMC_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/external/library/lib/win64/ex_slrt_x64.a : $(LIBEX_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/FOUNDA~1/core/lib/win64/pm_slrt_x64.a : $(LIBPM_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_SLRT_X64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


