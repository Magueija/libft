# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 18:49:28 by tosilva           #+#    #+#              #
#    Updated: 2021/11/07 02:25:33 by tosilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
### Variables																 ###
################################################################################

########################################
## Target Name						  ##
########################################

NAME	= libft.a


########################################
## Folders & Files					  ##
########################################

DEBUG_FILES	= $(NAME).dSYM/

# ASCII ART MESSAGES
FONT_DIR	= font/


# DEFAULT FOLDERS
BIN_DIR		= bin/
NAME		:= ${addprefix $(BIN_DIR), $(NAME)}

INC_DIR		= inc/
SRC_DIR		= src/
OBJ_DIR		= obj/
DEP_DIR		= dep/

# SUBFOLDERS
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

ALL_DIRS	= $(CHAR_DIR) $(CONV_DIR) $(FILES_DIR) $(LST_DIR) $(MATH_DIR) \
				$(MEM_DIR) $(NBR_DIR) $(NORM_DIR) $(PUT_DIR) $(STR_DIR)


# FILES
HFILES		:= libft.h
CFILES		:=

CHAR_FILES	:= ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isblank.c \
				ft_isdigit.c \
				ft_isinvisible.c \
				ft_islower.c \
				ft_isprint.c \
				ft_issignal.c \
				ft_isspace.c \
				ft_isupper.c
CONV_FILES	:= ft_atoi.c ft_etoa__2.c \
				ft_etoa.c \
				ft_ftoa.c \
				ft_itoa_base.c \
				ft_itoa_rec.c \
				ft_itoa.c \
				ft_itoh.c \
				ft_itoo.c \
				ft_ldtoa.c ft_ldtoa__2.c \
				ft_strconvchar.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_uitoa_base.c \
				ft_uitoa.c \
				ft_wctostr.c
FILES_FILES	:= get_next_line.c
LST_FILES	:= ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
MATH_FILES	:= ft_pow.c \
				ft_powf.c
MEM_FILES	:= ft_bzero.c \
				ft_calloc.c \
				ft_free.c \
				ft_freemtx.c \
				ft_malloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memrchr.c \
				ft_memset.c \
				ft_mtzcalloc.c \
				ft_swap.c
NBR_FILES	:= ft_floatspecial.c \
				ft_isnegative.c \
				ft_nbdigits.c
NORM_FILES	:= ft_ternaries.c
PUT_FILES	:= ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c
STR_FILES	:= ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnlen.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strreplace.c \
				ft_strtrim.c \
				ft_substr.c


# FILES AND THEIR FOLDERS
HFILES_SRC	:= ${foreach file, $(INC_DIR), ${addprefix $(INC_DIR), $(HFILES)}}
CFILES_SRC	:= ${foreach file, $(SRC_DIR), ${addprefix $(SRC_DIR), $(CFILES)}}

CHAR_SRC	:= ${foreach file, $(CHAR_DIR), ${addprefix $(SRC_DIR)$(CHAR_DIR), $(CHAR_FILES)}}
CONV_SRC	:= ${foreach file, $(CONV_DIR), ${addprefix $(SRC_DIR)$(CONV_DIR), $(CONV_FILES)}}
FILES_SRC	:= ${foreach file, $(FILES_DIR), ${addprefix $(SRC_DIR)$(FILES_DIR), $(FILES_FILES)}}
LST_SRC		:= ${foreach file, $(LST_DIR), ${addprefix $(SRC_DIR)$(LST_DIR), $(LST_FILES)}}
MATH_SRC	:= ${foreach file, $(MATH_DIR), ${addprefix $(SRC_DIR)$(MATH_DIR), $(MATH_FILES)}}
MEM_SRC		:= ${foreach file, $(MEM_DIR), ${addprefix $(SRC_DIR)$(MEM_DIR), $(MEM_FILES)}}
NBR_SRC		:= ${foreach file, $(NBR_DIR), ${addprefix $(SRC_DIR)$(NBR_DIR), $(NBR_FILES)}}
NORM_SRC	:= ${foreach file, $(NORM_DIR), ${addprefix $(SRC_DIR)$(NORM_DIR), $(NORM_FILES)}}
PUT_SRC		:= ${foreach file, $(PUT_DIR), ${addprefix $(SRC_DIR)$(PUT_DIR), $(PUT_FILES)}}
STR_SRC		:= ${foreach file, $(STR_DIR), ${addprefix $(SRC_DIR)$(STR_DIR), $(STR_FILES)}}


INCS	:= $(HFILES_SRC)
SRCS	:= $(CFILES_SRC)
SRCS	+= $(CHAR_SRC) $(CONV_SRC) $(FILES_SRC) $(LST_SRC) $(MATH_SRC) \
			$(MEM_SRC) $(NBR_SRC) $(NORM_SRC) $(PUT_SRC) $(STR_SRC)
OBJS	:= ${subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o)}
DEPS	:= ${subst $(SRC_DIR), $(DEP_DIR), $(SRCS:.c=.d)}



########################################
## Colors							  ##
########################################

# RESET
COLOR_RESET		=[0m

COLORF_RED		=[31m
COLORF_GREEN	=[32m
COLORF_YELLOW	=[33m
COLORF_CYAN		=[36m

CL_NORM_OK		:=$(COLORF_GREEN)
CL_NORM_WARN	:=$(COLORF_YELLOW)
CL_NORM_ERROR	:=$(COLORF_RED)
CL_NORM_NUM		:=$(COLORF_CYAN)


########################################
## Commands & Flags					  ##
########################################

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra # -03
DEBFLAGS	= -g -fsanitize=address
INCFLAGS	:= -I./$(INC_DIR)

AR		= ar rcs

MKDIR	= mkdir -p
RM		= rm -fr

NORM		= norminette
NORM_COLORS	:= sed "s/OK!/$(CL_NORM_OK)OK!$/$(COLOR_RESET)/g"
NORM_COLORS	+= | sed -E "s/Error(!|:)/$(CL_NORM_ERROR)Error\1$/$(COLOR_RESET)/g"
NORM_COLORS	+= | sed -E "s/Warning(!|:)/$(CL_NORM_WARN)Warning\1$/$(COLOR_RESET)/g"
NORM_COLORS	+= | sed -E "s/line:[[:blank:]]+([0-9]+)/$(CL_NORM_NUM)\1$/$(COLOR_RESET)/g"
NORM_COLORS	+= | sed -E "s/col:[[:blank:]]+([0-9]+)/$(CL_NORM_NUM)\1$/$(COLOR_RESET)/g"


#########################################
## User input						   ##
#########################################

folder	:=



################################################################################
### Rules																	 ###
################################################################################

.DELETE_ON_ERROR:

########################################
## Compile							  ##
########################################

all: target

target: msg_compiling $(NAME) msg_created

$(NAME): $(OBJS) | $(BIN_DIR)
	@$(AR) $@ $^

$(OBJS): $(OBJ_DIR)%.o : $(SRC_DIR)%.c $(DEP_DIR)%.d | ${foreach dir, $(OBJ_DIR), ${addprefix $(OBJ_DIR), $(ALL_DIRS)}}
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@echo "⬜\c"

$(DEPS): $(DEP_DIR)%.d: $(SRC_DIR)%.c | ${foreach dir, $(DEP_DIR), ${addprefix $(DEP_DIR), $(ALL_DIRS)}}
	@$(CC) $(CFLAGS) -I $(INC_DIR) -M \
		-MT '${patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$<} \
				${patsubst $(SRC_DIR)%.c,$(DEP_DIR)%.d,$<}' $< \
		-MF ${patsubst $(SRC_DIR)%.c,$(DEP_DIR)%.d,$<}



########################################
## Debug							  ##
########################################

debug: CFLAGS += $(DEBFLAGS)
debug: all


########################################
## Make dirs						  ##
########################################

$(BIN_DIR) $(OBJ_DIR) $(DEP_DIR):
	@$(MKDIR) $@

${foreach dir, $(OBJ_DIR), ${addprefix $(OBJ_DIR), $(ALL_DIRS)}}: | $(OBJ_DIR)
	@$(MKDIR) $@

${foreach dir, $(DEP_DIR), ${addprefix $(DEP_DIR), $(ALL_DIRS)}}: | $(DEP_DIR)
	@$(MKDIR) $@


########################################
## Norm								  ##
########################################

norm:
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), inc))
	@echo
	@echo "▱▱▱▱▱ HEADERS ▱▱▱▱▱"
	@$(NORM) $(INCS) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), char))
	@echo 
	@echo "▱▱▱▱▱ CHAR FILES ▱▱▱▱▱"
	@$(NORM) $(CHAR_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), conv))
	@echo 
	@echo "▱▱▱▱▱ CONV FILES ▱▱▱▱▱"
	@$(NORM) $(CONV_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), files))
	@echo 
	@echo "▱▱▱▱▱ FILES FILES ▱▱▱▱▱"
	@$(NORM) $(FILES_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), lst))
	@echo 
	@echo "▱▱▱▱▱ LST FILES ▱▱▱▱▱"
	@$(NORM) $(LST_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), math))
	@echo 
	@echo "▱▱▱▱▱ MATH FILES ▱▱▱▱▱"
	@$(NORM) $(MATH_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), mem))
	@echo 
	@echo "▱▱▱▱▱ MEM FILES ▱▱▱▱▱"
	@$(NORM) $(MEM_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), nbr))
	@echo 
	@echo "▱▱▱▱▱ NBR FILES ▱▱▱▱▱"
	@$(NORM) $(NBR_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), norm))
	@echo 
	@echo "▱▱▱▱▱ NORM FILES ▱▱▱▱▱"
	@$(NORM) $(NORM_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), put))
	@echo 
	@echo "▱▱▱▱▱ PUT FILES ▱▱▱▱▱"
	@$(NORM) $(PUT_SRC) | $(NORM_COLORS)
endif
ifeq ($(strip $(folder)),$(filter $(strip $(folder)), str))
	@echo 
	@echo "▱▱▱▱▱ STR FILES ▱▱▱▱▱"
	@$(NORM) $(STR_SRC) | $(NORM_COLORS)
endif
	@echo


########################################
## Clear							  ##
########################################

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean msg_deleted
	@$(RM) $(NAME) $(BIN_DIR)

clean_dep:
	@$(RM) $(DEP_DIR)

clean_debug:
	@$(RM) $(DEBUG_FILES)

clean_all: fclean clean_dep clean_debug


########################################
## Reload							  ##
########################################

re_debug: fclean debug

re: fclean all


########################################
## Messages							  ##
########################################

msg_compiling:
	@echo 
	@echo "[ ... ] Creating ./$(NAME) [ ... ]"

msg_created:
	@echo "$(COLORF_GREEN)"
	@cat ./font/created.txt
	@echo "$(COLOR_RESET)"

msg_deleted:
	@echo "$(COLORF_RED)"
	@cat ./font/deleted.txt
	@echo "$(COLOR_RESET)"



################################################################################
### Phony																	 ###
################################################################################

.PHONY: all libft bonus target print_create print_created debug
.PHONY: norm norm_libft
.PHONY: clean fclean clean_dep clean_debug clean_all
.PHONY: re_debug re
.PHONY: msg_compiling msg_created msg_deleted



################################################################################
### Includes																 ###
################################################################################

-include ${shell find . -maxdepth 3 -type f -name '*.d'}



################################################################################
## Tutorial
################################################################################

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
