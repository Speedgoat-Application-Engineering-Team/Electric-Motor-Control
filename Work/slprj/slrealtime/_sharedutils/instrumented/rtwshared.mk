###########################################################################
## Makefile generated for component 'rtwshared'. 
## 
## Makefile     : rtwshared.mk
## Generated on : Wed Mar 03 10:49:46 2021
## Final product: ./rtwshared.a
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

PRODUCT_NAME              = rtwshared
MAKEFILE                  = rtwshared.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2020b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2020b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Work
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = rtwshared.a

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

PRODUCT = ./rtwshared.a
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/slprj/slrealtime/_sharedutils -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3/SG_BLO~1/common/libsg -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3 -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2020b/914141~1.3/SG_BLO~1/fpga/setup/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSG_INT_IO397_50k_v2_DEVNAME=\""IO397-50k\"" -DSG_INT_IO397_50k_v2_DID=41587 -DSG_INT_IO397_50k_v2_SUBDID=40970 -DSG_INT_IO397_50k_v2_SUBVID=5272 -DSG_INT_IO397_50k_v2_VID=5272
DEFINES_BUILD_ARGS = -DINTEGER_CODE=0 -DEXT_MODE=1
DEFINES_CUSTOM = 
DEFINES_STANDARD = -DNRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/slrealtime/_sharedutils/pm_printf.c $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetInf.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetNaN.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_backsubrr_dbl.c $(START_DIR)/slprj/slrealtime/_sharedutils/rt_forwardsubrr_dbl.c $(START_DIR)/slprj/slrealtime/_sharedutils/rt_lu_real.c $(START_DIR)/slprj/slrealtime/_sharedutils/rt_matrixlib_dbl.c $(START_DIR)/slprj/slrealtime/_sharedutils/rt_modd_snf.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_nonfinite.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/binsearch_u32f.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/plook_u32f_bincka.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_modf_snf.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_roundd_snf.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = pm_printf.o rtGetInf.o rtGetNaN.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o rt_modd_snf.o rt_nonfinite.o binsearch_u32f.o plook_u32f_bincka.o rt_modf_snf.o rt_roundd_snf.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

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

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


pm_printf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/pm_printf.c
	$(CC) $(CFLAGS) -o $@ $<


rtGetInf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_backsubrr_dbl.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_forwardsubrr_dbl.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_lu_real.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_lu_real.c
	$(CC) $(CFLAGS) -o $@ $<


rt_matrixlib_dbl.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_modd_snf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_modd_snf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


binsearch_u32f.o : $(START_DIR)/slprj/slrealtime/_sharedutils/binsearch_u32f.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


plook_u32f_bincka.o : $(START_DIR)/slprj/slrealtime/_sharedutils/plook_u32f_bincka.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_modf_snf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_modf_snf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_roundd_snf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_roundd_snf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw


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


