TARGET := hello
LIB_NAME := libft.a
SRCS := $(shell find ./srcs -name '*.c')
HEADER :=includes

all :$(TARGET)

$(TARGET) : libft.a main.c
	gcc -o $(TARGET) main.c -L. -lft

make_lib : 
	gcc -I $(HEADER) -c $(SRCS)
	ar rc $(LIB_NAME) *.o
	ranlib $(LIB_NAME)

clean :
	rm *.o
fclean : 
	rm libft.a $(TARGET)
re : fclean all
