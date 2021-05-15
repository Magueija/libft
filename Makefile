# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/20 13:00:09 by tosilva           #+#    #+#              #
#    Updated: 2021/05/14 17:30:40 by tosilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##########################################################################################################################################
## Variables
##########################################################################################################################################

###########################################
## Target
###########################################

TARGET	=	libft.a

###########################################
## Commands & Flags
###########################################

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
DEBFLAGS	= -g -fsanitize=address

AR		= ar rcs

NORM	= norminette
NORM_COLORS	= sed -E "s/OK!/[32mOK!$/[0m/g;s/Warning(!|:)/[33mWarning\1$/[0m/g;s/Error(!|:)/[31mError\1$/[0m/g"

MKDIR	= mkdir -p
RM		= rm -fr

###########################################
## Folders & Files
###########################################

		# Current dir
CURRENT := ${shell pwd}/

			# Or with $(addprefix ${CURRENT}, bin/)
BIN_ROOT	= bin/
INC_ROOT	= include/
SRC_ROOT	= src/
OBJ_ROOT	= obj/
DEP_ROOT	= dep/

		# Path + Target
NAME	:= ${addprefix $(BIN_ROOT), $(TARGET)}

DEBUG_FILES	= a.out a.out.dSYM/

			# SRC_ROOT subfolders (*_DIR)
CHAR_DIR	= char/
CONV_DIR	= conv/
FILES_DIR	= files/
LST_DIR		= lst/
MATH_DIR	= math/
MEM_DIR		= mem/
NBR_DIR		= nbr/
NORM_DIR	= norm/
PUT_DIR		= put/
STR_DIR		= str/

ALL_DIRS	= $(CHAR_DIR) $(CONV_DIR) $(FILES_DIR) $(LST_DIR) $(MATH_DIR) $(MEM_DIR) $(NBR_DIR) $(NORM_DIR) $(PUT_DIR) $(STR_DIR)

			# Header files (INC_ROOT*.h), *.c files in SRC_ROOT and *.c files in each SRC_ROOT subfolders (*_DIR)
HFILES		:= libft.h
CFILES		:=

CHAR_FILES	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_isdigit.c ft_isinvisible.c ft_islower.c \
				ft_isprint.c ft_isspace.c ft_isupper.c
CONV_FILES	:= ft_atoi.c ft_etoa__2.c ft_etoa.c ft_ftoa.c ft_itoa_base.c ft_itoa_rec.c ft_itoa.c ft_itoh.c ft_itoo.c \
				ft_ldtoa.c ft_ldtoa__2.c ft_strconvchar.c ft_tolower.c ft_toupper.c ft_uitoa_base.c ft_uitoa.c ft_wctostr.c
FILES_FILES	:= get_next_line.c
LST_FILES	:= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c
MATH_FILES	:= ft_pow.c ft_powf.c
MEM_FILES	:= ft_bzero.c ft_calloc.c ft_free.c ft_malloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memrchr.c ft_memset.c ft_mtzcalloc.c ft_swap.c
NBR_FILES	:= ft_floatspecial.c ft_isnegative.c ft_nbdigits.c
NORM_FILES	:= ft_ternaries.c
PUT_FILES	:= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
STR_FILES	:= ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnlen.c ft_strnstr.c ft_strrchr.c ft_strreplace.c ft_strtrim.c ft_substr.c

			# Files with their path divided by their folders (INC_ROOT, SRC_ROOT and SRC_ROOT/*_DIR)
HFILES_SRC	:= ${foreach file, $(INC_ROOT), ${addprefix $(INC_ROOT), $(HFILES)}}
CFILES_SRC	:= ${foreach file, $(SRC_ROOT), ${addprefix $(SRC_ROOT), $(CFILES)}}

CHAR_SRC	:= ${foreach file, $(CHAR_DIR), ${addprefix $(SRC_ROOT)$(CHAR_DIR), $(CHAR_FILES)}}
CONV_SRC	:= ${foreach file, $(CONV_DIR), ${addprefix $(SRC_ROOT)$(CONV_DIR), $(CONV_FILES)}}
FILES_SRC	:= ${foreach file, $(FILES_DIR), ${addprefix $(SRC_ROOT)$(FILES_DIR), $(FILES_FILES)}}
LST_SRC		:= ${foreach file, $(LST_DIR), ${addprefix $(SRC_ROOT)$(LST_DIR), $(LST_FILES)}}
MATH_SRC	:= ${foreach file, $(MATH_DIR), ${addprefix $(SRC_ROOT)$(MATH_DIR), $(MATH_FILES)}}
MEM_SRC		:= ${foreach file, $(MEM_DIR), ${addprefix $(SRC_ROOT)$(MEM_DIR), $(MEM_FILES)}}
NBR_SRC		:= ${foreach file, $(NBR_DIR), ${addprefix $(SRC_ROOT)$(NBR_DIR), $(NBR_FILES)}}
NORM_SRC	:= ${foreach file, $(NORM_DIR), ${addprefix $(SRC_ROOT)$(NORM_DIR), $(NORM_FILES)}}
PUT_SRC		:= ${foreach file, $(PUT_DIR), ${addprefix $(SRC_ROOT)$(PUT_DIR), $(PUT_FILES)}}
STR_SRC		:= ${foreach file, $(STR_DIR), ${addprefix $(SRC_ROOT)$(STR_DIR), $(STR_FILES)}}

		# All files and folders in *_ROOT's
INCS	:= $(HFILES_SRC)
SRCS	:= $(CFILES_SRC)
SRCS	+= $(CHAR_SRC) $(CONV_SRC) $(FILES_SRC) $(LST_SRC) $(MATH_SRC) $(MEM_SRC) $(NBR_SRC) $(NORM_SRC) $(PUT_SRC) $(STR_SRC)
OBJS	:= ${subst $(SRC_ROOT), $(OBJ_ROOT), $(SRCS:.c=.o)}
DEPS	:= ${subst $(SRC_ROOT), $(DEP_ROOT), $(SRCS:.c=.d)}

###########################################
## User input
###########################################

f	:=

##########################################################################################################################################
## Rules
##########################################################################################################################################

.DELETE_ON_ERROR:

###########################################
## Compile
###########################################

all: $(NAME)

$(NAME): $(OBJS) | $(BIN_ROOT)
	$(AR) $@ $^
# @find $(INC_ROOT) -type f -name '*.h' -exec cp {} . \;
# @cp $@ .

$(OBJS): $(OBJ_ROOT)%.o : $(SRC_ROOT)%.c $(DEP_ROOT)%.d | ${foreach dir, $(OBJ_ROOT), ${addprefix $(OBJ_ROOT), $(ALL_DIRS)}}
	$(CC) $(CFLAGS) -I $(INC_ROOT) -c $< -o $@

$(DEPS): $(DEP_ROOT)%.d: $(SRC_ROOT)%.c | ${foreach dir, $(DEP_ROOT), ${addprefix $(DEP_ROOT), $(ALL_DIRS)}}
	@$(CC) $(CFLAGS) -I $(INC_ROOT) -M -MT '${patsubst $(SRC_ROOT)%.c,$(OBJ_ROOT)%.o,$<} ${patsubst $(SRC_ROOT)%.c,$(DEP_ROOT)%.d,$<}' $< -MF ${patsubst $(SRC_ROOT)%.c,$(DEP_ROOT)%.d,$<}

bonus: all

###########################################
## Debug
###########################################

debug: CFLAGS += $(DEBFLAGS)
debug: all

###########################################
## Make dirs
###########################################

$(BIN_ROOT) $(OBJ_ROOT) $(DEP_ROOT):
	@$(MKDIR) $@

${foreach dir, $(OBJ_ROOT), ${addprefix $(OBJ_ROOT), $(ALL_DIRS)}}: | $(OBJ_ROOT)
	@$(MKDIR) $@

${foreach dir, $(DEP_ROOT), ${addprefix $(DEP_ROOT), $(ALL_DIRS)}}: | $(DEP_ROOT)
	@$(MKDIR) $@

###########################################
## Norm
###########################################

norm:
ifeq ($(strip $(f)),$(filter $(strip $(f)), header))
	@echo
	@echo "»»»»» HEADERS «««««"
	@$(NORM) $(INCS) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), char))
	@echo 
	@echo "»»»»» CHAR FILES «««««"
	@$(NORM) $(CHAR_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), conv))
	@echo 
	@echo "»»»»» CONV FILES «««««"
	@$(NORM) $(CONV_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), files))
	@echo 
	@echo "»»»»» FILES FILES «««««"
	@$(NORM) $(FILES_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), lst))
	@echo 
	@echo "»»»»» LST FILES «««««"
	@$(NORM) $(LST_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), math))
	@echo 
	@echo "»»»»» MATH FILES «««««"
	@$(NORM) $(MATH_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), mem))
	@echo 
	@echo "»»»»» MEM FILES «««««"
	@$(NORM) $(MEM_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), nbr))
	@echo 
	@echo "»»»»» NBR FILES «««««"
	@$(NORM) $(NBR_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), norm))
	@echo 
	@echo "»»»»» NORM FILES «««««"
	@$(NORM) $(NORM_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), put))
	@echo 
	@echo "»»»»» PUT FILES «««««"
	@$(NORM) $(PUT_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(f)),$(filter $(strip $(f)), str))
	@echo 
	@echo "»»»»» STR FILES «««««"
	@$(NORM) $(STR_SRC) | $(NORM_COLORS)
endif

###########################################
## Clear
###########################################

clean:
	$(RM) $(OBJ_ROOT)

fclean: clean
	$(RM) $(BIN_ROOT)

clean_dep:
	$(RM) $(DEP_ROOT)

clean_debug:
	$(RM) $(DEBUG_FILES)

clean_all: fclean clean_dep clean_debug

###########################################
## Reload
###########################################

re_debug: fclean debug

re: fclean all

##########################################################################################################################################
## PHONY
##########################################################################################################################################

.PHONY: all bonus debug norm clean fclean clean_dep clean_debug clean_all re_debug re

##########################################################################################################################################
# Includes
##########################################################################################################################################

-include ${shell find . -mindepth 2 -type f -name '*.d'}

##########################################################################################################################################
## Tutorial
##########################################################################################################################################

# =		-> only looks for the variables when the command is used, not when it's defined
# :=	-> like normal imperative programming -- only those defined so far get expanded.
#			Simply expanded (using :=) allows you to append to a variable. Recursive (using =) definitions will give an infinite loop error.
# ?=	-> only sets variables if they have not yet been set
# +=	-> to append
# $@	-> replaced by the name of the target
# $<	-> replaced by the name of the first prepequisite
# $^	-> replaced by names of all prepequisite
# $?	-> replaced by all prerequisites newer than the target
# %.o: %.c	-> tells the Makefile how to compile a file ending with .o from the file ending with .c (similar names)
# https://makefiletutorial.com/
