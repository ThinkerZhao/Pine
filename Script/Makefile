TARGET := App.exe
DIR_RELEASE := ../Release/


#app dir
DIR_APPLICATION +=	../Application/App/ \
					../Application/boot/ 

#moudle dir
DIR_MOUDLE      +=	../Module/base64/ \
					../Module/EasyLogger/ \
					../Module/LetterShell/ \
					../Module/MultiButton/ 


#config dir
DIR_CONFIG		+=  ../Config/


#include head file
DIR_INCLUDE		+=  $(addprefix -I, $(DIR_APPLICATION)) \
					$(addprefix -I, $(DIR_MOUDLE)) \
					$(addprefix -I, $(DIR_CONFIG))

#src file
SRC_FILE		+=	$(wildcard $(addsuffix *.c, $(DIR_APPLICATION))) \
					$(wildcard $(addsuffix *.c, $(DIR_MOUDLE))) 

OBJS            +=	$(filter %.o, $(SRC_FILE:.c=.o))

#marco define
MACRO_DEFINE    += -DPROJECT_APP

CC_PREFIX   := #当前为空,主要用于交叉编译
CC          := $(CC_PREFIX)gcc
CXX         := $(CC_PREFIX)g++
CP          := $(CC_PREFIX)objcopy
LD          := $(CC_PREFIX)ld
GDB         := $(CC_PREFIX)gdb
SIZE        := $(CC_PREFIX)size
AS          := $(CC_PREFIX)as
NM          := $(CC_PREFIX)nm

TARGET :
	${CC} ${DIR_INCLUDE} ${SRC_FILE} $(MACRO_DEFINE) -o ../Release/${TARGET}

.PHONY : clean 
clean :
	rm -f $(DIR_RELEASE)App.exe