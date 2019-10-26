# Generated Makefile -- DO NOT EDIT!

ExampleMusicProvider_OUTPUT=C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/$(SPEC)
HOST=win64
SPEC=debug_lumin_clang-3.8_aarch64


# this turns off the suffix rules built into make
.SUFFIXES:

# this turns off the RCS / SCCS implicit rules of GNU Make
% : RCS/%,v
% : RCS/%
% : %,v
% : s.%
% : SCCS/s.%

# If a rule fails, delete $@.
.DELETE_ON_ERROR:

ifeq ($(VERBOSE),)
ECHO=@
else
ECHO=
endif

ifeq ($(QUIET),)
INFO=@echo
else
INFO=@:
endif

ifeq ($(VERBOSE),)
SPAM=@: \#
else
SPAM=@echo
endif

all : prebuild build postbuild

prebuild :: 

postbuild :: 

clean :: ExampleMusicProvider-clean

$(MLSDK)/tools/mabu/data/components/stdc++.comp : 

$(MLSDK)/tools/mabu/data/configs/debug.config : 

$(MLSDK)/tools/mabu/data/options/debug/on.option : 

$(MLSDK)/.metadata/components/ml_sdk.comp : 

$(MLSDK)/tools/mabu/data/options/runtime/shared.option : 

$(MLSDK)/tools/mabu/data/options/optimize/off.option : 

$(MLSDK)/tools/mabu/data/options/package/debuggable/on.option : 

$(MLSDK)/.metadata/components/ml_sdk_common.comp : 

$(MLSDK)/tools/mabu/data/options/magicleap.option : 

$(MLSDK)/tools/mabu/data/options/warn/on.option : 

$(MLSDK)/tools/mabu/data/components/OpenGL.comp : 

PROGRAM_PREFIX=
PROGRAM_EXT=
SHARED_PREFIX=lib
SHARED_EXT=.so
IMPLIB_PREFIX=lib
IMPLIB_EXT=.so
STATIC_PREFIX=lib
STATIC_EXT=.a
COMPILER_PREFIX=
LINKER_PREFIX=

-make-directories : C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64 C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/bin C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/obj.ExampleMusicProvider

C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64 : 
	$(ECHO) @mkdir -p C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64

C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/bin : 
	$(ECHO) @mkdir -p C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/bin

C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/obj.ExampleMusicProvider : 
	$(ECHO) @mkdir -p C:/Users/truon/Desktop/MayRecord31st/MayRecord31st/debug_lumin_clang-3.8_aarch64/obj.ExampleMusicProvider

include $(ExampleMusicProvider_OUTPUT)/ExampleMusicProvider.mk
build :  | ExampleMusicProvider-all

