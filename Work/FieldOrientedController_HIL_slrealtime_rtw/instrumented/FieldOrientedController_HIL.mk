###########################################################################
## Makefile generated for component 'FieldOrientedController_HIL'. 
## 
## Makefile     : FieldOrientedController_HIL.mk
## Generated on : Wed Mar 03 11:56:53 2021
## Final product: $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = FieldOrientedController_HIL
MAKEFILE                  = FieldOrientedController_HIL.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2020b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2020b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Work
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSSC_SLI_SLRT_X64_OBJS  = 
LIBSSC_CORE_SLRT_X64_OBJS = 
LIBNE_SLRT_X64_OBJS       = 
LIBMC_SLRT_X64_OBJS       = 
LIBEX_SLRT_X64_OBJS       = 
LIBPM_SLRT_X64_OBJS       = 
LIBLIBECATINTERFACE_SLRT_X64_OBJS = 
LIBLIBATEMRASSRV_SLRT_X64_OBJS = 
LIBLIBECMASTER_SLRT_X64_OBJS = 

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

PRODUCT = $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/slprj/slrealtime/PMSM_Plant_Model -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 -I$(START_DIR) -I$(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3/SG_BLO~1/common/libsg -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3 -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3/SG_BLO~1/fpga/setup/include -I$(START_DIR)/slprj/slrealtime/_sharedutils -I$(MATLAB_ROOT)/toolbox/slrealtime/target/kernel/dist/include -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSG_INT_IO397_50k_v2_DEVNAME=\""IO397-50k\"" -DSG_INT_IO397_50k_v2_DID=41587 -DSG_INT_IO397_50k_v2_SUBDID=40970 -DSG_INT_IO397_50k_v2_SUBVID=5272 -DSG_INT_IO397_50k_v2_VID=5272 -DSIMULINK_REAL_TIME
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DEXT_MODE=1 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=FieldOrientedController_HIL -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c $(MATLAB_ROOT)/rtw/c/src/rt_printf.c $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/slrealtime_datatype_ground.c $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL.cpp $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_cal.cpp $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_data.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/io397_50k_v2_int_hooks.c $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_calintf.cpp $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/main.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io30x_setup_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io39x_setup_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io31x_io32x_setup_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io33x_setup_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io3xx_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_setup_util.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/analog/sg_fpga_IO397_da.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/pwm/sg_fpga_cap_sf_1.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/sg_fpga_di_sf_a2.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/sg_fpga_do_sf_a2.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/inta/sg_fpga_inta_sf_2.c C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/quadrature/sg_fpga_qae_sf_2.c $(MATLAB_ROOT)/toolbox/coder/profile/src/host_timer_x86.c $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/slrealtime_code_profiling_utility_functions.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = rt_matrx.o rt_printf.o slrealtime_datatype_ground.o FieldOrientedController_HIL.o FieldOrientedController_HIL_cal.o FieldOrientedController_HIL_data.o io397_50k_v2_int_hooks.o FieldOrientedController_HIL_calintf.o main.o sg_fpga_io30x_setup_util.o sg_fpga_io39x_setup_util.o sg_fpga_io31x_io32x_setup_util.o sg_fpga_io33x_setup_util.o sg_fpga_io3xx_util.o sg_fpga_setup_util.o sg_fpga_IO397_da.o sg_fpga_cap_sf_1.o sg_fpga_di_sf_a2.o sg_fpga_do_sf_a2.o sg_fpga_inta_sf_2.o sg_fpga_qae_sf_2.o host_timer_x86.o slrealtime_code_profiling_utility_functions.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

MODELREF_LIBS = ../../slprj/slrealtime/PMSM_Plant_Model/instrumented/PMSM_Plant_Model_rtwlib.a

LIBS = C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/sli/lib/win64/SSC_SL~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/simscape/engine/core/lib/win64/SSC_CO~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/NETWOR~1/lib/win64/NE_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/math/core/lib/win64/MC_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/external/library/lib/win64/EX_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/physmod/common/FOUNDA~1/core/lib/win64/PM_SLR~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/LIBECA~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/LIBATE~1.A C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/LIBECM~1.A $(START_DIR)/slprj/slrealtime/_sharedutils/instrumented/rtwshared.a

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

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/common/libsg -lsg_qcc_x86_64

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/common/libsg -lsg_qcc_x86_64

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/common/libsg -lsg_qcc_x86_64

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/common/libsg -lsg_qcc_x86_64

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) -Wl,--start-group ../../slprj/slrealtime/PMSM_Plant_Model/instrumented/PMSM_Plant_Model_rtwlib.a -Wl,--end-group -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
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


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/pwm/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/pwm/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/analog/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/analog/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/quadrature/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/quadrature/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/inta/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/inta/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/%.cpp
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


%.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/%.cpp
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


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_matrx.o : $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c
	$(CC) $(CFLAGS) -o $@ $<


rt_printf.o : $(MATLAB_ROOT)/rtw/c/src/rt_printf.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_datatype_ground.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/slrealtime_datatype_ground.c
	$(CC) $(CFLAGS) -o $@ $<


FieldOrientedController_HIL.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


FieldOrientedController_HIL_cal.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_cal.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


FieldOrientedController_HIL_data.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_data.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


io397_50k_v2_int_hooks.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/io397_50k_v2_int_hooks.c
	$(CC) $(CFLAGS) -o $@ $<


FieldOrientedController_HIL_calintf.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/FieldOrientedController_HIL_calintf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


main.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_fpga_io30x_setup_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io30x_setup_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_io39x_setup_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io39x_setup_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_io31x_io32x_setup_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io31x_io32x_setup_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_io33x_setup_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io33x_setup_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_io3xx_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_io3xx_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_setup_util.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/setup/src/sg_fpga_setup_util.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_IO397_da.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/analog/sg_fpga_IO397_da.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_cap_sf_1.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/pwm/sg_fpga_cap_sf_1.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_di_sf_a2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/sg_fpga_di_sf_a2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_do_sf_a2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/dio/sg_fpga_do_sf_a2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_inta_sf_2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/inta/sg_fpga_inta_sf_2.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_qae_sf_2.o : C:/ProgramData/Speedgoat/speedgoatlib/R2020b/9.1.3/sg_blocks/fpga/quadrature/sg_fpga_qae_sf_2.c
	$(CC) $(CFLAGS) -o $@ $<


host_timer_x86.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/host_timer_x86.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_code_profiling_utility_functions.o : $(START_DIR)/FieldOrientedController_HIL_slrealtime_rtw/slrealtime_code_profiling_utility_functions.cpp
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


C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/libecatinterface_slrt_x64.a : $(LIBLIBECATINTERFACE_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBLIBECATINTERFACE_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/libAtemRasSrv_slrt_x64.a : $(LIBLIBATEMRASSRV_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBLIBATEMRASSRV_SLRT_X64_OBJS)


C:/PROGRA~1/MATLAB/R2020b/toolbox/SLREAL~1/simulink/blocks/dist/lib/libEcMaster_slrt_x64.a : $(LIBLIBECMASTER_SLRT_X64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBLIBECMASTER_SLRT_X64_OBJS)


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


